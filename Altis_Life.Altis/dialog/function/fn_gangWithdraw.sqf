#include <macro.h>
/*
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Deposits money into the players gang bank.
*/
if(isNil "life_session_time_bkdep") then {life_session_time_bkdep = false;}; // BDD Douceur
if(life_session_time_bkdep) exitWith {hint "Il faut attendre 3 sec...";};

private["_value"];
_value = parseNumber(ctrlText 2702);
_gFund = grpPlayer getVariable ["gang_bank",0];

//Series of stupid checks
if(_value > 999999) exitWith {hint localize "STR_ATM_WithdrawMax";};
if(_value < 0) exitWith {};
if(!([str(_value)] call life_fnc_isnumeric)) exitWith {hint localize "STR_ATM_notnumeric"};
if ( ((grpPlayer getVariable "gang_owner") != steamid) ) exitWith {hint parseText "Tu n'est pas l'un des cadres du groupe. <br/><br/> Il faut être le <t color='#d16428'>leader du clan</t> pour retirer de l'argent."};
if(_value > _gFund) exitWith {hint localize "STR_ATM_NotEnoughFundsG"};
if(_val < 100 && _gFund > 20000000) exitWith {hint localize "STR_ATM_WithdrawMin"}; //Temp fix for something.

SUB(_gFund,_value);
CASH = CASH + _value;
grpPlayer setVariable ["gang_bank",_gFund,true];

hint format [localize "STR_ATM_WithdrawSuccessG",[_value] call life_fnc_numberText];
[] call life_fnc_atmMenu;
[6] call SOCK_fnc_updatePartial;
[[1,grpPlayer],"TON_fnc_updateGang",false,false] spawn life_fnc_MP;

[] spawn
{
	life_session_time_bkdep = true;
	sleep 3;
	life_session_time_bkdep = false;
};