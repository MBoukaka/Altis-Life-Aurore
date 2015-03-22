/*
	File: fn_isnumeric.sqf
	Author: I can't remember if I did it or Kronzsky
	
	Description:
	Checks a string to make sure it is in numeric format.
*/
private["_valid","_value","_compare"];
_value = _this select 0;
_valid = [":"];
_array = [_value] call KRON_StrToArray;
_return = true;

{
	if(_x in _valid) then	
	{ _return = false; }
	else
	{};
} foreach _array;
_return;