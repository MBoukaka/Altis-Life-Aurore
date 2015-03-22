/*
	File: fn_knockoutAction.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Knocks out the target.
*/
private["_target"];
_target = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;

//Error checks
if(isNull _target) exitWith {};
if(!isPlayer _target) exitWith {};
if(player distance _target > 4) exitWith {};
life_knockout = true;

// NEW ANIMATION MOD cl3_anim.pbo
if(currentWeapon player == primaryWeapon player && primaryWeapon player != "") then {
	[[player,"CL3_anim_WeaponHit"],"life_fnc_animSync",nil,false] spawn life_fnc_MP; 
	sleep 1.2;
	[[_target,profileName],"life_fnc_knockedOut2",_target,false] spawn life_fnc_MP;
} else {
	[[player,"CL3_anim_PunchRandom"],"life_fnc_animSync",nil,false] spawn life_fnc_MP;
	sleep 1.2;
	[[_target,profileName],"life_fnc_knockedOut",_target,false] spawn life_fnc_MP;
};

sleep 3;
life_knockout = false;