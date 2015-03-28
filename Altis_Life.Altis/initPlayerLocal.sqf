/*
	File: initPlayerLocal.sqf
	
	Description:
	Starts the initialization of the player.
*/
"BIS_fnc_MP_packet" addPublicVariableEventHandler {_this call life_fnc_MPexec};
if(!hasInterface) exitWith {}; //This is a headless client, he doesn't need to do anything but keep being headless..
#define CONST(var1,var2) var1 = compileFinal (if(typeName var2 == "STRING") then {var2} else {str(var2)})
CONST(BIS_fnc_endMission,BIS_fnc_endMission);
[] execVM "SpyGlass\fn_initSpy.sqf";

//Salle d'attente
if (playerSide == east) exitWith {
player addRating 99999999;
waitUntil {!(isNull (findDisplay 46))};
["SalleDattente",FALSE,TRUE] call BIS_fnc_endMission;
sleep 35;
};

[] execVM "core\init.sqf";
[] execVM "scripts\autoReskin.sqf";
[] execVM "scripts\lock_backpack.sqf";
[] execVM "scripts\emptyFuel.sqf";

enableRadio false; 
enableSentences false;

//Execute JIP code.
if((_this select 1)) then {
	[] execVM "core\jip.sqf";
};