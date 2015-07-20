/*
	File: fn_playLight.sqf
	Author: Jordan "nanou" C. 
	Description: Les lumieres pour tout le monde (avec distance)
*/

private["_source","_light","_distance"];
_source = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
_light = [_this,1,"",[""]] call BIS_fnc_param;
_distance = [_this,2,0,[0]] call BIS_fnc_param;

if (player distance _source > _distance) exitWith {};

execvm _light;