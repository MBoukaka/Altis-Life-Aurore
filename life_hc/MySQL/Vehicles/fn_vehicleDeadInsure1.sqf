/*
	File: fn_vehicleIsDead.sqf
	Author: Kevin Webb
	Description:
	Used for the copCrush function: deletes the vehicle from the database.
*/
private["_plate","_uid","_query","_thread"];

_uid = [_this,0,"",[""]] call BIS_fnc_param;
_plate = [_this,1,"",[""]] call BIS_fnc_param;

_query = format["vehicleDeadInsure:1:0:0:%1:%2",_uid,_plate];

waitUntil {!DB_Async_Active};
_thread = [_query,1] call DB_fnc_asyncCall;