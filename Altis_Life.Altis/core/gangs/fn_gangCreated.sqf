#include <macro.h>
/*
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Tells the player that the gang is created and throws him into it.
*/
private "_group";
life_action_gangInUse = nil;

if(BANK < (LIFE_SETTINGS(getNumber,"gang_price"))) exitWith {
	hint format[localize "STR_GNOTF_NotEnoughMoney",[((LIFE_SETTINGS(getNumber,"gang_price"))-BANK)] call life_fnc_numberText];
	{grpPlayer SVAR [_x,nil,true];} foreach ["gang_id","gang_owner","gang_name","gang_members","gang_maxmembers","gang_bank"];
};

SUB(BANK,(LIFE_SETTINGS(getNumber,"gang_price")));

hint format[localize "STR_GNOTF_CreateSuccess",(group player) getVariable "gang_name",[(LIFE_SETTINGS(getNumber,"gang_price"))] call life_fnc_numberText];

sleep 2;
hint "Retour au lobby dans 3";
sleep 1;
hint "Retour au lobby dans 2";
sleep 1;
hint "Retour au lobby dans 1";
sleep 1;
["gangcreated",FALSE,TRUE] call BIS_fnc_endMission;
sleep 5;