#include <macro.h>
#define ctrlSelData(ctrl) (lbData[##ctrl,(lbCurSel ##ctrl)])
/*
	File: fn_vehStoreItem.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Used in the vehicle trunk menu, stores the selected item and puts it in the vehicles virtual inventory
	if the vehicle has room for the item.
*/
private["_ctrl","_num","_totalWeight","_itemWeight","_veh_data","_inv","_index","_val"];
disableSerialization;

_ctrl = ctrlSelData(3503);
_num = ctrlText 3506;
if(!([_num] call TON_fnc_isnumber)) exitWith {hint "Mauvais format numérique";};
_num = parseNumber(_num);
if(_num < 1) exitWith {hint "Tu ne peux pas mettre un nombre en dessous de 1 !";};

if(life_trunk_vehicle isKindOf "House_F") then {
	_mWeight = 0;
	{_mWeight = _mWeight + ([(typeOf _x)] call life_fnc_vehicleWeightCfg);} foreach (life_trunk_vehicle getVariable["containers",[]]);
	_totalWeight = [_mWeight,(life_trunk_vehicle getVariable["Trunk",[[],0]]) select 1];
} else {
	_totalWeight = [life_trunk_vehicle] call life_fnc_vehicleWeight;
};
_itemWeight = ([_ctrl] call life_fnc_itemWeight) * _num;
_veh_data = life_trunk_vehicle getVariable ["Trunk",[[],0]];
_inv = _veh_data select 0;

if(_ctrl == "goldbar" && {!(life_trunk_vehicle isKindOf "LandVehicle" OR life_trunk_vehicle isKindOf "House_F")}) exitWith {hint "Tu ne peux pas le transporter dans ce vehicule !!"};
if(_ctrl == "goldbar" && (typeOf life_trunk_vehicle in ["I_Truck_02_transport_F","I_Truck_02_covered_F"])) exitWith {hint "Le chassis du Zamak ne supporte pas les lingots!"};
if(_ctrl == "relique" && {!(life_trunk_vehicle isKindOf "ship" OR life_trunk_vehicle isKindOf "LandVehicle")}) exitWith {hint "Tu ne peux pas le transporter dans ce vehicule !!"};
if(_ctrl == "champ" && {!(life_trunk_vehicle isKindOf "ship" OR life_trunk_vehicle isKindOf "LandVehicle")}) exitWith {hint "Tu ne peux pas le transporter dans ce vehicule !!"};

if(_ctrl == "money") then
{
	_index = [_ctrl,_inv] call TON_fnc_index;
	if(CASH < _num) exitWith {hint "Tu n'as pas assez !"};
	if(_index == -1) then
	{
		_inv pushBack [_ctrl,_num];
	}
		else
	{
		_val = _inv select _index select 1;
		_inv set[_index,[_ctrl,_val + _num]];
	};
	
	CASH = CASH - _num;
	life_trunk_vehicle setVariable["Trunk",[_inv,(_veh_data select 1) + _itemWeight],true];
	[life_trunk_vehicle] call life_fnc_vehInventory;
}
	else
{
	if(((_totalWeight select 1) + _itemWeight) > (_totalWeight select 0)) exitWith {hint "Le vehicule est plein !"};

	if(!([false,_ctrl,_num] call life_fnc_handleInv)) exitWith {hint "Impossible de supprimer de ton inventaire pour mettre dans le vehicule.";};
	_index = [_ctrl,_inv] call TON_fnc_index;
	if(_index == -1) then
	{
		_inv pushBack [_ctrl,_num];
	}
		else
	{
		_val = _inv select _index select 1;
		_inv set[_index,[_ctrl,_val + _num]];
	};
	
	life_trunk_vehicle setVariable["Trunk",[_inv,(_veh_data select 1) + _itemWeight],true];
	[life_trunk_vehicle] call life_fnc_vehInventory;
};
