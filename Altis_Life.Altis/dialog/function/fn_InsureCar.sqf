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

_price = M_CONFIG(getNumber,CONFIG_VEHICLES,_className,"insurance");

if(!(EQUAL(typeName _price,typeName 0)) OR _price < 1) then {_price = 1000};

if(BANK < _price) exitWith {hint format[(localize "STR_Garage_CashError"),[_price] call life_fnc_numberText];};

[[_vid,_pid,_unit,_price],"TON_fnc_InsureCar",false,false] spawn life_fnc_MP;

hint "Votre véhicule est désormais assuré";

BANK = BANK - _price;
closeDialog 0;