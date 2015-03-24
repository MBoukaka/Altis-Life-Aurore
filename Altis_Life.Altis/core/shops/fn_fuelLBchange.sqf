#include <macro.h>
/*
	File: fn_fuelLBChange.sqf
	Author: Worldtrade1101
	
	Description:
	
*/
disableSerialization;
private["_control","_index","_className","_basePrice","_vehicleInfo","_colorArray","_ctrl"];
_control = _this select 0;
_index = _this select 1;

//Fetch some information.
_className = _control lbData _index;
_vIndex = _control lbValue _index;
//_vehicleList =vehicleListFuel;
_vehicle = (vehiclefuelList select _vindex) select 0;
_vehicleInfo = [_className] call life_fnc_fetchVehInfo;

_fuel = fuel _vehicle;
diag_log format ["%1",_fuel];
_fueltank = (_vehicleInfo select 12);


if (_vehicle iskindof "B_Truck_01_box_F" || _vehicle iskindof "B_Truck_01_transport_F") then {_fueltank = 350;};//hemtt
if (_vehicle iskindof "C_Van_01_box_F") then {_fueltank = 100;};//
if (_vehicle iskindof "I_Truck_02_covered_F" || _vehicle iskindof "I_Truck_02_transport_F") then {_fueltank = 175;};

ctrlShow [20330,true];
(CONTROL(20300,20303))ctrlSetStructuredText parseText format["Fuel Capacity: %1",_fueltank];

{ slidersetRange [_x,(floor(_fuel * _fueltank)),_fueltank];} foreach [20901];
{ sliderSetPosition[_x ,(floor(_fuel * _fueltank))];} foreach [20901];

ctrlsettext [20323,format ["total : %1$",life_fuelPrices * ((SliderPosition 20901) -(floor(_fuel * _fueltank))) ]];

true;