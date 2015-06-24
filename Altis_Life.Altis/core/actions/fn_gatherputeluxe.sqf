/*
    File: fn_gatherReliques.sqf
    Script by Tonic Edit by Heimdall #AltisAurore.fr
	
*/
if(life_action_inUse) exitWith {hint "Tu n'as qu'une bite !";};
private["_sum","_dice"];

_dice=ceil(random 1);
_sum = ["puteluxe",_dice,life_carryWeight,life_maxWeight] call life_fnc_calWeightDiff;

if(_sum > 0) then
{
    life_action_inUse = true;
    titleText["Tu emballes la dame...","PLAIN"];
    titleFadeOut 6;
    sleep 6;
    if(([true,"relique",_sum] call life_fnc_handleInv)) then
    {
        titleText[format["Tu as emballé %1 callgirl ! Ramène là a son Mac pour une récompense !",_sum],"PLAIN"];
    };
};

life_action_inUse = false;