#define SYSTEM_TAG "HC"
#define SUB(var1,var2) var1 = var1 - var2
#define ADD(var1,var2) var1 = var1 + var2
#define SEL(ARRAY,INDEX) (ARRAY select INDEX)
#define CASH life_cash
#define BANK life_atmbank
#define GANG_FUNDS grpPlayer getVariable ["gang_bank",0];

//Namespace Macros
#define SVAR_MNS missionNamespace setVariable
#define SVAR_UINS uiNamespace setVariable
#define SVAR_PNS parsingNamespace setVariable
#define GVAR_MNS missionNamespace getVariable
#define GVAR_UINS uiNamespace getVariable

//Scripting Macros
#define CONST(var1,var2) var1 = compileFinal (if(typeName var2 == "STRING") then {var2} else {str(var2)})
#define CONSTVAR(var) var = compileFinal (if(typeName var == "STRING") then {var} else {str(var)})
#define FETCH_CONST(var) (call var)
#define PVAR_ALL(var) publicVariable var
#define PVAR_SERV(var) publicVariableServer var
#define PVAR_ID(var,id) id publicVariableClient var
#define GVAR getVariable
#define SVAR setVariable

//Condition Macros
#define EQUAL(condition1,condition2) condition1 isEqualTo condition2
#define CONFIG_BOOL(NUMBER) [##NUMBER] call { _ret = false; if((_this select 0) in [0,1] && EQUAL((_this select 0),1)) then { _ret = true; }; _ret;}

// Arrays
#define ARRAY_TYPE(a) [##a] call {if((typeName (_this select 0)) == "ARRAY") then {true;} else {false;};}
#define ARRAY_EMPTY(a) [##a] call {if(count (_this select 0) == 0) then {true;} else {false;};}

// extDB Macros
#define EXTDB "extDB2" callExtension
#define RCON_SELECTION getText(configFile >> "CfgServerSettings" >> "extDB" >> "RCON_Selection")
#define DATABASE_SELECTION getText(configFile >> "CfgServerSettings" >> "extDB" >> "Database")
#define EXTDB_SETTINGS_BOOL(SETTING) CONFIG_BOOL(getNumber(configFile >> "CfgServerSettings" >> "extDB" >> SETTING))
#define EXTDB_SETTINGS(SETTING) getNumber(configFile >> "CfgServerSettings" >> "extDB" >> SETTING)