private["_vid","_pid","_query","_thread"];

_vid = [_this,0,-1,[0]] call BIS_fnc_param;
_pid = [_this,1,"",[""]] call BIS_fnc_param;

_query = format["vehicleIsure:1:%1:%2",_pid,_vid];

waitUntil {!DB_Async_Active};
_thread = [_query,1] call DB_fnc_asyncCall;