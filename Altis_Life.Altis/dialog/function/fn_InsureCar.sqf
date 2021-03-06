#include <macro.h>

private["_vehicle","_vid","_pid","_unit","_price"];
disableSerialization;
if(lbCurSel 2802 == -1) exitWith {hint localize "STR_Global_NoSelection"};
_vehicle = lbData[2802,(lbCurSel 2802)];
_vehicle = (call compile format["%1",_vehicle]) select 0;
_vid = lbValue[2802,(lbCurSel 2802)];
_pid = getPlayerUID player;
_unit = player;


if(isNil "_vehicle") exitWith {hint "Il y a une erreur dans la sélection..."};

_price = M_CONFIG(getNumber,CONFIG_VEHICLES,_vehicle,"insurance");

if(isNil "_price") then {_price = 150;};

if(BANK < _price) exitWith {hint format[(localize "STR_Garage_CashError"),[_price] call life_fnc_numberText];};

[[_vid,_pid],"TON_fnc_InsureCar",DB_Dest,false] call life_fnc_MP;

hint "Votre véhicule est désormais assuré";

SUB(BANK,_price);

[1] call SOCK_fnc_updatePartial;
closeDialog 0;