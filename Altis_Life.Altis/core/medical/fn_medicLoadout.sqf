/*
	File: fn_medicLoadout.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Loads the medic out with the default gear.
*/
private["_handle","_handle2"];
_handle = [] spawn life_fnc_stripDownPlayer;
waitUntil {scriptDone _handle};
sleep 1;
_handle2 = [] spawn life_fnc_stripDownPlayer;
waitUntil {scriptDone _handle2};

player addUniform "U_Rangemaster";
player addItem "FirstAidKit";
player addItem "FirstAidKit";
player addItem "ItemMap";
player assignItem "ItemMap";
player addItem "ItemCompass";
player assignItem "ItemCompass";
player addItem "ItemWatch";
player assignItem "ItemWatch";
player addItem "ItemRadio";
player assignItem "ItemRadio";

[3] call SOCK_fnc_updatePartial;
[] call life_fnc_equipGear;