#include "hc_macros.hpp"
/*
    Author: H4SHK3KS (ofpectag: H4SH)
    File: fn_initHC.sqf

    Written for Pirates of Altis
    http://pirates-of-altis.de/
    The usage of this file is restricted to allowed servers (e.g. PoA)
    For further questions contact the author!

    Description:
    Inits the HC locally

    Parameters:
    None

    Returns:
    Nothing

    Instructions:

    All needed scripts have to be imported and declared in the config.cpp
    It's imortant that clearly no script uses the function "owner" to reject a life_fnc_mp!
    This command can only be used on the server. Instead of the owner ID just use the player object,
    it will work fine too.
    Make sure that every script that has to be reached remotely is declared in the array "HC_MPAllowedFuncs"
    in the initHC.sqf . Please note that this array can't be modified by another script or somewhere else because it
    is a const (or also called static) which protects from overriding. Thats a security option!
    Also make sure that you have adjusted the config propertly. The default configuration is adjusted for fully debugging
    including displaying of all MP Funcs (incoming and outgoing) The MP funcs are not effected by the option which logger should be used, they are hardcoded going to the HC's RPT because everything else is too confusing. If you're going live I recommend you to enable full debugging for at least one server period to ensure everything is working propertly. If you checked this just disable this options.
    The extDB Init here is made for extDB2. If you're using a version below V 40 you have to adjust this fully.

*/
if(!(EXTDB_SETTINGS_BOOL("Enabled"))) exitWith {}; // ExtDB HC is not enabled!

[] execVM "\life_hc\KRON_Strings.sqf";
"life_fnc_MP_packet" addPublicVariableEventHandler {[_this select 0,_this select 1] call life_fnc_MPexec;};

HC_Custom_Logging = (EXTDB_SETTINGS_BOOL("Custom_Logging"));
HC_Debug_Queries = (EXTDB_SETTINGS_BOOL("MySQL_Debug_Queries"));
HC_Query_Logging = (EXTDB_SETTINGS_BOOL("MySQL_Query"));
HC_Status_Time = (EXTDB_SETTINGS("MySQL_Status_Time"));
DB_Async_Active = false;
DB_Async_ExtraLock = false;
HC_extDB_notLoaded = true;
HC_DBInsertTime = 0;
HC_DBInsertCounter = 0;
HC_DBSelectTime = 0;
HC_DBSelectCounter = 0;

life_server_extDB_notLoaded = "";


if(HC_Custom_Logging) then {
    [] call compile PreprocessFileLineNumbers "\@Arma3Log\init.sqf";
    HC_Logging =
    compileFinal "
        [(_this select 0)] call Arma3Log;
    ";
} else {
    HC_Logging =
    compileFinal "
        diag_log (_this select 0);
    ";
};

[("")] call HC_Logging;
[("-------------------------------------------------------------------------------------------------------------------")] call HC_Logging;
[("-------------------------------- Starting initialization of 'extDB-HC' by H4SHK3KS --------------------------------")] call HC_Logging;
[("-------------------------------------------------------------------------------------------------------------------")] call HC_Logging;
[("")] call HC_Logging;

if(isNil {GVAR_UINS "life_sql_id"}) then {
    life_sql_id = round(random(9999));
    CONSTVAR(life_sql_id);
    SVAR_UINS ["life_sql_id",life_sql_id];

    //Retrieve extDB version
    _result = EXTDB "9:VERSION";
    ["diag_log",[format["extDB: Version: %1",_result]]] call HC_Logging;
    if(EQUAL(_result,"")) exitWith {[("The server-side extension extDB was not loaded into the engine, report this to the server admin.")] call HC_Logging;};
    if ((parseNumber _result) < 47) exitWith {[("extDB version is not compatible with current Altis life version. Require version 35 or higher.")] call HC_Logging;};
    //Initialize connection to Database
    _result = EXTDB format["9:ADD_DATABASE:%1",DATABASE_SELECTION];
    if(!(EQUAL(_result,"[1]"))) exitWith {diag_log "extDB: Error with Database Connection";};
    _result = EXTDB format["9:ADD_DATABASE_PROTOCOL:Database2:SQL_CUSTOM:%1:altisaurore",FETCH_CONST(life_sql_id)];
    if(!(EQUAL(_result,"[1]"))) exitWith {diag_log "extDB: Error with Database Connection";};

    //Initialize MISC options from extDB
    if((EQUAL(EXTDB_SETTINGS("MISC"),1))) then {
        MISC_ID = round(random(9999));
        CONSTVAR(MISC_ID);
        SVAR_UINS ["MISC_ID",MISC_ID];

        EXTDB format["9:ADD:MISC:%1",FETCH_CONST(MISC_ID)];
        ["diag_log",["extDB: MISC is enabled"]] call HC_Logging;
    };
    EXTDB "9:LOCK";
    ["diag_log",["extDB: Connected to the Database"]] call HC_Logging;
} else {
    life_sql_id = GVAR_UINS "life_sql_id";
    CONSTVAR(life_sql_id);
    ["diag_log",["extDB: Still Connected to the Database"]] call HC_Logging;
    if((EQUAL(EXTDB_SETTINGS("RCON"),1))) then {
        RCON_ID = GVAR_UINS "RCON_ID";
        CONSTVAR(RCON_ID);
        ["diag_log",["extDB: RCON still enabled"]] call HC_Logging;
    };
    if((EQUAL(EXTDB_SETTINGS("VAC"),1))) then {
        VAC_ID = GVAR_UINS "VAC_ID";
        CONSTVAR(VAC_ID);
        ["diag_log",["extDB: VAC still enabled"]] call HC_Logging;
    };
    if((EQUAL(EXTDB_SETTINGS("MISC"),1))) then {
        MISC_ID = GVAR_UINS "MISC_ID";
        CONSTVAR(MISC_ID);
        ["diag_log",["extDB: MISC still enabled"]] call HC_Logging;
    };
};

if(!(EQUAL(life_server_extDB_notLoaded,""))) exitWith {}; //extDB did not fully initialize so terminate the rest of the initialization process.

[] spawn {
    while {true} do {
        PVAR_SERV("serv_sv_use");
        uiSleep 60;
    };
};

// A list of allowed funcs to be passed on the hc (by external sources)
// Have to be written in only lower capitals
HC_MPAllowedFuncs = [
    "hc_fnc_testconnection",

    "db_fnc_insertrequest",
    "db_fnc_insertvehicle",
    "db_fnc_queryrequest",
    "db_fnc_updatepartial",
    "db_fnc_updaterequest",

    "ton_fnc_insertgang",
    "ton_fnc_queryplayergang",
    "ton_fnc_removegang",
    "ton_fnc_updategang",

    "ton_fnc_addhouse",
    "ton_fnc_precheckhouse",
    "ton_fnc_sellhouse",
    "ton_fnc_updatehousecontainers",
    "ton_fnc_updatehousetrunk",

    "ton_fn_handlemessages",
    "ton_fn_msgrequest",

    "ton_fnc_getvehicles",
    "ton_fnc_keymanagement",
    "ton_fnc_vehiclecreate",
    "ton_fnc_vehicledead",
    "ton_fnc_vehicledelete",
    "ton_fnc_vehicleisdead",

	"life_fnc_wantedadd",
	"life_fnc_wantedbounty",
	"life_fnc_wantedcrimes",
	"life_fnc_wantedfetch",
	"life_fnc_wantedperson",
	"life_fnc_wantedprofupdate",
	"life_fnc_wantedremove"
];

CONSTVAR(HC_MPAllowedFuncs);

life_HC_isActive = true;
publicVariable "life_HC_isActive";

[("Published the needed vars over the network, ready for queries to recieve!")] call HC_Logging;
[("")] call HC_Logging;
[("")] call HC_Logging;
[("")] call HC_Logging;