/*
	File: fn_FuelStat_open.sqf
	Author : worldtrade1101
	Base on : Bryan "Tonic" Boardwine
	
	Description:
	Blah
*/
private["_shop","_sideCheck","_spawnPoints","_shopFlag","_disableBuy"];

disableSerialization;
//Long boring series of checks
if (life_action_inUse) exitwith {};
life_action_inUse = true;
if(dialog) exitWith {};
if(life_is_processing) exitwith {};

_fuelstations = nearestobjects [player, ["Land_fs_feed_F"],10];
if (count _fuelstations == 0 ) exitwith {life_action_inUse = false;};

if(!createDialog "Life_FuelStat") exitWith {};
[] spawn {waituntil {!dialog}; life_action_inUse =false;};

ctrlSetText [20301,"Fuel Station"];
if (isnil "life_fuelPrices") then {
life_fuelPrices = 3;
};


//Fetch the shop config.
_vehicleList = nearestObjects[getPos (_this select 0),["Car","Air","Ship"],10];
if (count _vehicleList <1) exitwith {Hint "Pas de vehicules!";life_action_inUse = true;};
vehicleFuelList =[];
{
_fuel = fuel _x;
vehicleFuelList set [count vehiclefuelList,[_x,_fuel]];
}foreach _vehicleList;


_control = ((findDisplay 20300) displayCtrl 20302);
lbClear _control; //Flush the list.



ctrlsettext [20322,format ["Prix au litre : %1€",life_fuelPrices]];
ctrlsettext [20323,format ["Total : %1€",life_fuelPrices * 1.1]];
//Loop through
{
	_className = typeof (_x select 0);
	_fuelleft = _x select 1;
	
	_vehicleInfo = [_className] call life_fnc_fetchVehInfo;
	_control lbAdd (_vehicleInfo select 3);
	_control lbSetPicture [(lbSize _control)-1,(_vehicleInfo select 2)];
	_control lbSetData [(lbSize _control)-1,_className];
	_control lbSetValue [(lbSize _control)-1,_ForEachIndex];
} foreach vehicleFuelList;