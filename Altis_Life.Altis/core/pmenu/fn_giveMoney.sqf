#include <macro.h>
/*
	File: fn_giveMoney.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Gives the selected amount of money to the selected player.
*/
if(isNil "life_session_time_givemoney") then {life_session_time_givemoney = false;}; // BDD Douceur
if(life_session_time_givemoney) exitWith {hint "Il faut attendre 3 sec...";};

private["_unit","_amount"];
_amount = ctrlText 2018;
ctrlShow[2001,false];
if((lbCurSel 2022) == -1) exitWith {hint "Choisi quelqu'un !";ctrlShow[2001,true];};
_unit = lbData [2022,lbCurSel 2022];
_unit = call compile format["%1",_unit];
if(isNil "_unit") exitWith {ctrlShow[2001,true];};
if(_unit == player) exitWith {ctrlShow[2001,true];};
if(isNull _unit) exitWith {ctrlShow[2001,true];};

//A series of checks *ugh*
if(!life_use_atm) exitWith {hint "Tu viens de braquer la banque, tu ne peux pas déposer pour l'instant.";ctrlShow[2001,true];};
if(!([_amount] call TON_fnc_isnumber)) exitWith {hint "Choisis un format numérique.";ctrlShow[2001,true];};
if(parseNumber(_amount) <= 0) exitWith {hint "Choisis un nombre !";ctrlShow[2001,true];};
if(parseNumber(_amount) > CASH) exitWith {hint "Tu n'as pas autant !";ctrlShow[2001,true];};
if(isNull _unit) exitWith {ctrlShow[2001,true];};
if(isNil "_unit") exitWith {ctrlShow[2001,true]; hint "Joueur trop loin !";};
hint format["You gave $%1 to %2",[(parseNumber(_amount))] call life_fnc_numberText,_unit getVariable["realname",name _unit]];
CASH = CASH - (parseNumber(_amount));
[0] call SOCK_fnc_updatePartial;
[[_unit,_amount,player],"life_fnc_receiveMoney",_unit,false] call life_fnc_MP;
[] call life_fnc_p_updateInventory;
[] call life_fnc_hudUpdate;

ctrlShow[2001,true];

[] spawn
{
	life_session_time_givemoney = true;
	sleep 3;
	life_session_time_givemoney = false;
};