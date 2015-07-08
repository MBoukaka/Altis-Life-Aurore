/*
	File: fn_gatherAction.sqf
	Author: John "Paratus" VanderZwet
	
	Description:
	Master gathering script, to replace all inferior scripts!
*/

private["_sum","_stones"];

_item = [_this select 3,0,"",[""]] call BIS_fnc_param;
_count = [_this select 3,1,1,[1]] call BIS_fnc_param;

_stones = ["diamond_uncut","copper_unrefined","iron_unrefined","rock","salt","oil_unprocessed","bois","sand"];

if (life_inv_pickaxe < 1 && _item in _stones) exitWith { hint "Il faut avoir un outil de récolte !"; };

_itemName = M_CONFIG(getText,"VirtualItems",_item,"displayName");

titleText[format["Récolte de %1...",_itemName],"PLAIN"];

if (_item in _stones) then
{
	[] spawn
	{
		private ["_i"];
		_i = 0;
		while {life_action_in_use} do
		{
			if (_i == 0) then { [[player, "pickaxe",10],"life_fnc_playSound",true,false] spawn life_fnc_MP; _i = 1; }
			else { _i = 0; };
			player playMove "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon";
			waitUntil{animationState player != "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon";};
			sleep 2.5;
		};
	};
};

while {life_carryWeight < life_maxWeight} do
{
	if (!(alive player)) exitWith {};
	if (life_action_gathering) exitWith { titleText["Récolte annulée, tu es deja entrain de recolter !","PLAIN"]; };
	life_action_gathering = true;
	if(speed player > 1) exitWith {
		life_action_gathering = false;
		titleText["Récolte annulée, tu ne dois pas te déplacer !","PLAIN"];
	};
	if(vehicle player != player) exitWith {
		life_action_gathering = false;
		titleText["Récolte annulée, tu ne dois pas être dans un Vehicule !","PLAIN"];
	};
	if(life_carryWeight >= life_maxWeight) exitWith {
		life_action_gathering = false;
		titleText [format["Récolte terminée, tu ne peux pas prendre plus de %1.", _itemName],"PLAIN"];
	};
	_sum = [_item,_count,life_carryWeight,life_maxWeight] call life_fnc_calWeightDiff;
	if(_sum > 0) then
	{
		sleep 5;
		if(!([true,_item,_count] call life_fnc_handleInv)) exitWith
		{
			titleText [format["Récolte terminée, tu ne peux pas prendre plus %1.", _itemName],"PLAIN"];
		};
		titleText [format["Récolte de %1 %2.",_count,_itemName],"PLAIN"];
		titleFadeOut 1;
		//[[6, player, format["Pioché %1 %2", _sum, _itemName]],"ASY_fnc_logIt",false,false] spawn BIS_fnc_MP;
	};
	life_action_gathering = false;
};

life_action_in_use = false;