#include <macro.h>
/*
	File: fn_initCop.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Cop Initialization file.
*/
private["_end"];
player addRating 9999999;
waitUntil {!(isNull (findDisplay 46))};
_end = false;

if(life_blacklisted) exitWith
{
	["Blacklisted",false,true] call BIS_fnc_endMission;
	sleep 30;
};

if(FETCH_CONST(life_coplevel) == 0) then {
	["NotWhitelisted",false,true] call BIS_fnc_endMission;
	sleep 35;
};

if(FETCH_CONST(life_donator) == 3) then {
	license_cop_copdonator = true;
		}	else	{
	license_cop_copdonator = false;
};

switch (FETCH_CONST(life_coplevel)) do 
{
	case 2: {life_paycheck = life_paycheck + 100;}; // Rank 2
	case 3: {life_paycheck = life_paycheck + 200;}; // Rank 3
	case 4: {life_paycheck = life_paycheck + 300;}; // Rank 4
	case 5: {life_paycheck = life_paycheck + 400;}; // Rank 5 
	case 6: {life_paycheck = life_paycheck + 500;}; // Rank 6
	case 7: {life_paycheck = life_paycheck + 600;}; // Rank 7
};

player setVariable["rank",(FETCH_CONST(life_coplevel)),true];
[] call life_fnc_spawnMenu;
waitUntil{!isNull (findDisplay 38500)}; //Wait for the spawn selection to be open.
waitUntil{isNull (findDisplay 38500)}; //Wait for the spawn selection to be done.