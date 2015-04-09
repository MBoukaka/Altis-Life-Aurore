#include <macro.h>
/*
	file: fn_newMsg.sqf
        Author: Silex
        Modified by: Kai
*/

private["_to","_type","_playerData","_msg"];
disableSerialization;

_type = [_this,0,-1] call BIS_fnc_param;
_playerData = [_this,1,-1] call BIS_fnc_param;
_msg = [_this,2,"",[""]] call BIS_fnc_param;

_display = findDisplay 88888;
_cPlayerList = _display displayCtrl 88881;
_cMessageEdit = _display displayCtrl 88884;

switch(_type) do
{
	case 0:
	{
		life_smartphoneTarget = call compile format["%1",_playerData];
		ctrlSetText[88886, format["Message a: %1",name life_smartphoneTarget]];
		if((FETCH_CONST(life_adminlevel) < 1)) then
		{
			ctrlShow[888897,false];
		};
	};
	//normal message
	case 1:
	{
		if(isNUll life_smartphoneTarget) exitWith {hint format["No player selected!"];};
		ctrlShow[88885, false];
		if(!([str(_msg)] call life_fnc_bugExtDB)) exitWith {hint "Tu ne peux pas utiliser les deux-points !"};
		if(_msg == "") exitWith {hint "Il faut taper un message !";ctrlShow[88885, true];};
		[[life_smartphoneTarget,_msg,player,0],"TON_fnc_handleMessages",DB_Dest,false] spawn life_fnc_MP;
		hint format["Tu as envoye un message a : %1 : %2",name life_smartphoneTarget,_msg];
		ctrlShow[88885, true];
		closeDialog 88883;
	};
	//copmessage
	case 2:
	{
		if(({side _x == west} count playableUnits) == 0) exitWith {hint format["Impossible actuellement."];};
		ctrlShow[888895,false];
		if(!([str(_msg)] call life_fnc_bugExtDB)) exitWith {hint "Tu ne peux pas utiliser les deux-points !"};
		if(_msg == "") exitWith {hint "Il faut taper un message !";ctrlShow[888895,true];};
		[[ObjNull,_msg,player,1],"TON_fnc_handleMessages",false] spawn life_fnc_MP;
		_to = "The Police";
		hint format["Tu as envoye un message à %1 : %2",_to,_msg];
		ctrlShow[888895,true];
		closeDialog 887890;
	};
	//msgadmin
	case 3:
	{
		ctrlShow[888896,false];
		if(!([str(_msg)] call life_fnc_bugExtDB)) exitWith {hint "Tu ne peux pas utiliser les deux-points !"};
		if(_msg == "") exitWith {hint "Il faut taper un message !";ctrlShow[888896,true];};
		[[ObjNull,_msg,player,2],"TON_fnc_handleMessages",false] spawn life_fnc_MP;
		_to = "The Admins";
		hint format["Tu as envoye un message a %1 : %2",_to,_msg];
		ctrlShow[888896,true];
		closeDialog 887890;
	};
	//emsrequest
	case 4:
	{
		if(({side _x == independent} count playableUnits) == 0) exitWith {hint format["Impossible actuellement."];};
		ctrlShow[888899,false];
		if(!([str(_msg)] call life_fnc_bugExtDB)) exitWith {hint "Tu ne peux pas utiliser les deux-points !"};
		if(_msg == "") exitWith {hint "Il faut taper un message !";ctrlShow[888899,true];};
		[[ObjNull,_msg,player,3],"TON_fnc_handleMessages",false] spawn life_fnc_MP;
		hint format["Tu as envoye un message aux medecins.",_msg];
		ctrlShow[888899,true];
		closeDialog 887890;
	};
	//adminToPerson
	case 5:
	{
		if((call life_adminlevel) < 1) exitWith {hint "Tu dois etre un admin !";};
		if(isNULL life_smartphoneTarget) exitWith {hint format["Pas de contacte defini !"];};
		if(!([str(_msg)] call life_fnc_bugExtDB)) exitWith {hint "Tu ne peux pas utiliser les deux-points !"};
		if(_msg == "") exitWith {hint "Il faut taper un message !";};
		[[life_smartphoneTarget,_msg,player,4],"TON_fnc_handleMessages",false] spawn life_fnc_MP;
		hint format["Message admin envoye a : %1 - Message: %2",name life_smartphoneTarget,_msg];
		closeDialog 88883;
	};
	//emergencyloading
	case 6:
	{
		if((FETCH_CONST(life_adminlevel) < 1)) then
		{
			ctrlShow[888898,false];
			ctrlShow[888896,true];
		} else {
			ctrlShow[888898,true];
			ctrlShow[888896,false];
		};
	};
	//adminMsgAll
	case 7:
	{
		if((call life_adminlevel) < 1) exitWith {hint "Tu dois etre un admin.";};
		if(!([str(_msg)] call life_fnc_bugExtDB)) exitWith {hint "Tu ne peux pas utiliser les deux-points !"};
		if(_msg == "") exitWith {hint "Il faut taper un message !";};
		[[ObjNull,_msg,player,5],"TON_fnc_handleMessages",false] spawn life_fnc_MP;
		hint format["Message admin envoye a tous : %1",_msg];
		closeDialog 887890;
	};
};