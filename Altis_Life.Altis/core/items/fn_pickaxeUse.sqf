#include <macro.h>
/*
	File: fn_pickaxeUse.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Main functionality for pickaxe in mining.
*/
private["_mine","_itemWeight","_diff","_itemName"];
_mine = [];
switch (true) do {
	case (player distance (getMarkerPos "lead_1") < 30): {_mine = ["copper_unrefined",2];};
	case (player distance (getMarkerPos "iron_1") < 30): {_mine = ["iron_unrefined",2];};
	case (player distance (getMarkerPos "salt_1") < 120) : {_mine = ["salt_unrefined",4];};
	case (player distance (getMarkerPos "sand_1") < 75) : {_mine = ["sand",5];};
	case (player distance (getMarkerPos "diamond_1") < 50): {_mine = ["diamond_uncut",3];};
	case (player distance (getMarkerPos "oil_1") < 40) : {_mine = ["oil_unprocessed",1];};
	case (player distance (getMarkerPos "oil_2") < 40) : {_mine = ["oil_unprocessed",1];};
	case (player distance (getMarkerPos "rock_1") < 50): {_mine = ["rock",2];};
	case (player distance (getMarkerPos "explo_1") < 50): {_mine = ["poudre",2];};
	case (player distance (getMarkerPos "heroin_1") < 50): {_mine = ["heroin_unprocessed",2];};
	case (player distance (getMarkerPos "cocaine_1") < 50): {_mine = ["cocaine_unprocessed",2];};
	case (player distance (getMarkerPos "weed_1") < 50): {_mine = ["cannabis",2];};
	case (player distance (getMarkerPos "champ_1") < 50): {_mine = ["champ",1];};
	case (player distance (getMarkerPos "rye_1") < 50): {_mine = ["rye",3];};
	case (player distance (getMarkerPos "hops_1") < 50): {_mine = ["hops",4];};
	case (player distance (getMarkerPos "bois_1") < 50): {_mine = ["bois",3];};
	default {["", 0]};
};
//Mine check
if(EQUAL(SEL(_mine, 0),"")) exitWith {hint localize "STR_ISTR_Pick_NotNear"};
if(vehicle player != player) exitWith {hint localize "STR_ISTR_Pick_MineVeh";};
if(life_action_inUse) exitWith {hint "Tu n'as que deux mains !";};
_diff = [SEL(_mine,0),SEL(_mine,1),life_carryWeight,life_maxWeight] call life_fnc_calWeightDiff;
if(EQUAL(_diff,0)) exitWith {hint localize "STR_NOTF_InvFull"};

closeDialog 0;
life_action_inUse = true;
[[player, "PickaxeUseSound",15],"life_fnc_playSound",true,false] spawn life_fnc_MP;
for "_i" from 0 to 2 do {
	player playMove "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon";
	waitUntil{animationState player != "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon";};
	sleep 2.5;
};

if(([true,SEL(_mine,0),_diff] call life_fnc_handleInv)) then {
	_itemName = M_CONFIG(getText,"VirtualItems",SEL(_mine,0),"displayName");
	titleText[format[localize "STR_ISTR_Pick_Success",(localize _itemName),_diff],"PLAIN"];
};

life_action_inUse = false;
