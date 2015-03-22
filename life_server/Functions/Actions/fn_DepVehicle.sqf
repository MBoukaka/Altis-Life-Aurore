/*
	File: fn_vehicleDelete.sqf
	Author: Bryan "Tonic" Boardwine

	Description:
	Doesn't actually delete since we don't give our DB user that type of
	access so instead we set it to alive=0 so it never shows again.
*/
private["_pid"];
_pid = [_this,0,-1,[0]] call BIS_fnc_param;

if(_pid == -1) exitWith {};

_query = format["depdemission:%1",_pid];

waitUntil {!DB_Async_Active};
_thread = [_query,1] call DB_fnc_asyncCall;
