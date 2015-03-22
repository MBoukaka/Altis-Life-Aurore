/*
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Start playing the siren for medics.
	
	*NOTE I DO NOT HAVE A SOUND FOR THIS BUT I"M LEAVING THE CODE HERE FOR OTHER PEOPLE TO ADD IT*.
*/


private["_vehicle"];
_vehicle = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;

if(isNull _vehicle) exitWith {};
if(isNil {_vehicle getVariable "siren"}) exitWith {};

while {true} do
{
	if(!(_vehicle getVariable "siren")) exitWith {};
	if(count (crew (_vehicle)) == 0) then {_vehicle setVariable["siren",false,true]};
	if(!alive _vehicle) exitWith {};
	if(isNull _vehicle) exitWith {};
	if(typeOf _vehicle in ["C_Offroad_01_F","cl3_escalade_pm","A3L_AmberLamps"]) then
		{
			_vehicle say3D "SirenEMS";
		} else {
			_vehicle say3D "SirenEMS2";
		};
	sleep 4.7;
	if(!(_vehicle getVariable "siren")) exitWith {};
};
