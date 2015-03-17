/*
	File: fn_playSound.sqf
	Author: Jordan "nanou" C. 
	Description: Jouer un son pour tout le monde (50m distance)
*/

private["_source","_sound","_distance"];
_source = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
_sound = [_this,1,"",[""]] call BIS_fnc_param;
_distance = [_this,2,0,[0]] call BIS_fnc_param;

if (player distance _source > _distance) exitWith {};

_source say3D _sound;