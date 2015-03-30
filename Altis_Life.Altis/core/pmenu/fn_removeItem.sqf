#include <macro.h>
/*
	File: fn_removeItem.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Removes the selected item & amount to remove from the players
	virtual inventory.
*/
private["_data","_value","_obj"];
disableSerialization;
_data = lbData[2005,(lbCurSel 2005)];
_value = ctrlText 2010;
if(EQUAL(_data,"")) exitWith {hint "Choisis quelque chose !";};
if(!([_value] call TON_fnc_isnumber)) exitWith {hint "Format numérique obligatoire !"};
if(parseNumber(_value) <= 0) exitWith {hint "Choisis un nombre !"};
if(EQUAL(ITEM_ILLEGAL(_data),1) && ([west,visiblePosition player,100] call life_fnc_nearUnits)) exitWith {titleText["Il y a des flics à coté ! Tu ne peux pas le jeter !","PLAIN"]};
if(player != vehicle player) exitWith {titleText["Tu ne peux pas depuis ton véhicule.","PLAIN"]};
if(!([false,_data,(parseNumber _value)] call life_fnc_handleInv)) exitWith {hint "Tu n'en as pas autant !"};

hint format["Tu as supprimé %1 %2 de ton inventaire.",(parseNumber _value),(localize ITEM_NAME(_data))];
	
[] call life_fnc_p_updateInventory;