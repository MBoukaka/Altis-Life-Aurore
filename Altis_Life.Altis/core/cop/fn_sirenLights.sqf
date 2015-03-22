#include <macro.h>
/*
	File: fn_sirenLights.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Lets play a game! Can you guess what it does? I have faith in you, if you can't
	then you have failed me and therefor I lose all faith in humanity.. No pressure.
*/
private["_vehicle"];
_vehicle = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
if(isNull _vehicle) exitWith {}; //Bad entry!
if(!(typeOf _vehicle in [
"demian2435_police_offroad",
"Orel_Rangoo",
"DAR_CVPIAux",
"DAR_CVPIPolice",
"DAR_CVPISlick",
"Orel_Master",
"DAR_ImpalaPolice",
"DAR_ImpalaPoliceSlick",
"DAR_ImpalaPoliceDet",
"Orel_Payenne",
"DAR_TaurusPolice",
"DAR_TaurusPoliceState",
"DAR_TaurusPoliceStateSlick",
"A3L_GrandCaravanUCBlack",
"DAR_ExplorerPolice",
"DAR_ExplorerPoliceStealth",
"DAR_TahoePolice",
"DAR_TahoePoliceSlick",
"DAR_ChargerPolice",
"DAR_ChargerPoliceState",
"DAR_ChargerPoliceStateSlick",
"REV_GDM",
"B_MRAP_01_F",
"Orel_Dingo",
"Aurore_q7_gdm",
"B_MRAP_01_hmg_F",
"B_MRAP_01_F"])) exitWith {}; //Last chance check to prevent something from defying humanity and creating a monster.

_trueorfalse = _vehicle GVAR ["lights",FALSE];

if(_trueorfalse) then {
	_vehicle SVAR ["lights",FALSE,TRUE];
} else {
	_vehicle SVAR ["lights",TRUE,TRUE];
	[[_vehicle,0.22],"life_fnc_copLights",true,false] call life_fnc_MP;
};