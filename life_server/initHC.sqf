/*
    Author: H4SHK3KS (ofpectag: H4SH)
    File: fn_initHC.sqf

    Written for Pirates of Altis
    http://pirates-of-altis.de/
    The usage of this file is restricted to allowed servers (e.g. PoA)
    For further questions contact the author!

    Description:
    Inits the HC and monitors disconnect and connect of him

    Parameters:
    None

    Returns:
    Nothing
*/
HC_UID = nil;

// JIP integration of an hc
"life_HC_isActive" addPublicVariableEventHandler {
	if(_this select 1) then {
		HC_UID = getPlayerUID hc_1;
		DB_Dest = owner hc_1;
		publicVariable "DB_Dest";
        DB_DEST publicVariableClient "serv_sv_use";
        diag_log "Headless client is connected and ready to work!";
        [["__Server__","__Server__"],"HC_fnc_testConnection",DB_Dest,false] call life_fnc_MP;
	};
};

HC_DC = ["HC_Disconnected","onPlayerDisconnected",
    {
        if(!isNil "HC_UID" && {_uid == HC_UID}) then {
            life_HC_isActive = false;
            publicVariable "life_HC_isActive";
            DB_Dest = false;
            publicVariable "DB_Dest";
            diag_log "Headless client disconnected! Broadcasted the vars!";
            diag_log "Ready for receiving queries on the server machine.";
        };
    }
] call BIS_fnc_addStackedEventHandler;

