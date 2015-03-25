#include <macro.h>
/*
	File: fn_bankDeposit.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Figure it out.
*/
if(isNil "life_session_time_bkdep") then {life_session_time_bkdep = false;}; // BDD Douceur
if(life_session_time_bkdep) exitWith {hint "Il faut attendre 3 sec...";};

private["_value"];
_value = parseNumber(ctrlText 2702);

//Series of stupid checks
if(_value > 999999) exitWith {hint localize "STR_ATM_GreaterThan";};
if(_value < 0) exitWith {};
if(!([str(_value)] call life_fnc_isnumeric)) exitWith {hint localize "STR_ATM_notnumeric"};
if(_value > CASH) exitWith {hint localize "STR_ATM_NotEnoughCash"};

CASH = CASH - _value;
BANK = BANK + _value;

hint format[localize "STR_ATM_DepositMSG",[_value] call life_fnc_numberText];
[] call life_fnc_atmMenu;
[] call life_fnc_hudUpdate;
[6] call SOCK_fnc_updatePartial;

[] spawn
{
	life_session_time_bkdep = true;
	sleep 3;
	life_session_time_bkdep = false;
};