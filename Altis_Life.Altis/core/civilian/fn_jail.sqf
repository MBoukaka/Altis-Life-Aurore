#include <macro.h>
/*
	File: fn_jail.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Starts the initial process of jailing.
*/
private["_bad","_unit"];
_unit = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
hint format["%1", _unit];
if(isNull _unit) exitWith {}; //Dafuq?
if(_unit != player) exitWith {}; //Dafuq?
if(life_is_arrested) exitWith {}; //Dafuq i'm already arrested
_bad = [_this,1,false,[false]] call BIS_fnc_param;
player SVAR ["restrained",false,true];
player SVAR ["Escorting",false,true];
player SVAR ["transporting",false,true];

titleText[localize "STR_Jail_Warn","PLAIN"];
hint localize "STR_Jail_LicenseNOTF";
player setPos (getMarkerPos "jail_marker");

if(_bad) then {
	waitUntil {alive player};
	sleep 1;
};

//Check to make sure they goto check
if(player distance (getMarkerPos "jail_marker") > 40) then {
	player setPos (getMarkerPos "jail_marker");
};

//[1] call life_fnc_removeLicenses;
if(life_inv_heroin_unprocessed > 0) then {[false,"heroinUnprocessed",life_inv_heroin_unprocessed] call life_fnc_handleInv;};
if(life_inv_heroin_processed > 0) then {[false,"heroinProcessed",life_inv_heroin_processed] call life_fnc_handleInv;};
if(life_inv_cocaine_unprocessed > 0) then {[false,"cocaineUnprocessed",life_inv_cocaine_unprocessed] call life_fnc_handleInv;};
if(life_inv_cocaine_processed > 0) then {[false,"cocaineProcessed",life_inv_cocaine_processed] call life_fnc_handleInv;};
if(life_inv_turtle_raw > 0) then {[false,"turtleRaw",life_inv_turtle_raw] call life_fnc_handleInv;};
if(life_inv_cannabis > 0) then {[false,"cannabis",life_inv_cannabis] call life_fnc_handleInv;};
if(life_inv_marijuana > 0) then {[false,"marijuana",life_inv_marijuana] call life_fnc_handleInv;};
life_is_arrested = true;

//On le désap magueule
_handle = [] spawn life_fnc_stripDownPlayer;
waitUntil {scriptDone _handle};
//Maintenant on l'habille  en détenue
player addUniform "cl3_coveralls_prisoner_uniform";
player addItem "ItemWatch";
player assignItem "ItemWatch";

life_thirst = 100;
life_hunger = 100;
life_drink = 0;
CASH = 0;

[] call life_fnc_hudUpdate;

[[player,_bad],"life_fnc_jailSys",false,false] call life_fnc_MP;
[0] call SOCK_fnc_updatePartial;
[3] call SOCK_fnc_updatePartial;
[5] call SOCK_fnc_updatePartial;