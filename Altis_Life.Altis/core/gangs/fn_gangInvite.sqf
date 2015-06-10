#include <macro.h>
/*
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Prompts the player about an invite.
*/
private["_name","_group"];
_name = [_this,0,"",[""]] call BIS_fnc_param;
_group = [_this,1,grpNull,[grpNull]] call BIS_fnc_param;
if(_name == "" OR isNull _group) exitWith {}; //Fail horn anyone?
if(!isNil {(group player) GVAR "gang_name"}) exitWith {hint "You are already in a gang"};

_gangName = _group GVAR "gang_name";
_action = [
	format[localize "STR_GNOTF_InviteMSG",_name,_gangName],
	localize "STR_Gang_Invitation",
	localize "STR_Global_Yes",
	localize "STR_Global_No"
] call BIS_fnc_guiMessage;

if(_action) then {
	[player] join _group;

	_members = grpPlayer GVAR "gang_members";
	_members pushBack [getPlayerUID _unit,profilename];
	grpPlayer SVAR ["gang_members",_members,true];
	[[4,_grpMembers],"TON_fnc_updateGang",false,false] call life_fnc_MP;
};