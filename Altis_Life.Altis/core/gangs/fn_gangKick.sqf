#include <macro.h>
/*
	Author: Bryan "Tonic" Boardwine
	
	Description:
	32 hours...
*/
private["_unit","_unitID","_members"];
disableSerialization;

if((lbCurSel 2621) == -1) exitWith {hint localize "STR_GNOTF_SelectKick"};
_unit = call compile format["%1",CONTROL_DATA(2621)];
if((_unit select 0) isEqualto getPlayerUID player) exitWith {hint localize "STR_GNOTF_KickSelf"};

_unitID = _unit select 0;
_members = grpPlayer GVAR "gang_members";

{
	_pos = _x find _unitID;
	if(_pos != -1)then {
		_members deleteAt _forEachIndex;
		grpPlayer SVAR["gang_MemberNames",_members,true];
	};
}forEach _members;

_check = [_unitID] call life_fnc_isUIDActive;

if(_check)then {
    [[life_selectedPlayer,grpPlayer],"TON_fnc_clientGangKick",life_selectedPlayer,false] call life_fnc_MP;
};

[[4,grpPlayer],"TON_fnc_updateGang",false,false] call life_fnc_MP; //Update the database.
[] call life_fnc_gangMenu;