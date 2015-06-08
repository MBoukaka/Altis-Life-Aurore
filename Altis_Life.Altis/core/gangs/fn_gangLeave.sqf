#include <macro.h>
/*
    Author: Bryan "Tonic" Boardwine
    
    Description:
    32 hours later...
*/
private["_grp","_grpMembers"];
if(EQUAL(steamid,(grpPlayer GVAR "gang_owner"))) exitWith {hint localize "STR_GNOTF_LeaderLeave"};

_grp = grpPlayer;
_grpMembers = grpPlayer getVariable "gang_members";

{
	_pos = _x find steamid;
	if(_pos != -1)then {
		_grpMembers deleteAt _forEachIndex;
		_grp setVariable["gang_members",_grpMembers,true];
	};
}forEach _grpMembers;

[[4,grpPlayer],"TON_fnc_updateGang",false,false] call life_fnc_MP;
closeDialog 0;
sleep 1;
[player] joinSilent (createGroup civilian);