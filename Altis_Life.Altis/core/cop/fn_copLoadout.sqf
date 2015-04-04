/*
	File: fn_copLoadout.sqf
	Author: Bryan "Tonic" Boardwine
	Edited: Itsyuka
	
	Description:
	Loads the cops out with the default gear.
*/
private["_handle","_handle2"];
_handle = [] spawn life_fnc_stripDownPlayer;
waitUntil {scriptDone _handle};
sleep 1;
_handle2 = [] spawn life_fnc_stripDownPlayer;
waitUntil {scriptDone _handle2};

//Load player with default cop gear.
player addUniform "U_Rangemaster";
player addVest "V_Rangemaster_belt";

player addWeapon "DDOPP_X26_b";
player addMagazine "DDOPP_1Rnd_X26";
player addMagazine "DDOPP_1Rnd_X26";
player addMagazine "DDOPP_1Rnd_X26";
player addMagazine "DDOPP_1Rnd_X26";
player addMagazine "DDOPP_1Rnd_X26";
player addMagazine "DDOPP_1Rnd_X26";

/* ITEMS */
player addItem "ItemMap";
player assignItem "ItemMap";
player addItem "ItemCompass";
player assignItem "ItemCompass";
player addItem "ItemWatch";
player assignItem "ItemWatch";
player addItem "ItemGPS";
player assignItem "ItemGPS";
player addItem "ItemRadio";  
player assignItem "ItemRadio";

[3] call SOCK_fnc_updatePartial;
[] call life_fnc_equipGear;