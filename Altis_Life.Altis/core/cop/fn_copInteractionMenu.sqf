#include <macro.h>
/*
	File: fn_copInteractionMenu.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Replaces the mass addactions for various cop actions towards another player.
*/
#define Btn1 15001
#define Btn2 15002
#define Btn3 15003
#define Btn4 15004
#define Btn5 15005
#define Btn6 15006
#define Btn7 15007
#define Btn8 15008
#define Btn9 15009
#define Btn10 15010
#define Btn11 15011
#define Btn12 15012
#define Btn13 15013
#define Btn14 15014
#define Btn15 15015
#define Btn16 15016
#define Btn17 15017
#define Btn18 15018
#define Title 15000

private["_display","_curTarget","_Btn1","_Btn2","_Btn3","_Btn4","_Btn5","_Btn6","_Btn7","_Btn8","_Btn9","_Btn10","_Btn11","_Btn12","_Btn13","_Btn14","_Btn15","_Btn16","_Btn17","_Btn18"];
if(!dialog) then {
	createDialog "copInteraction_Menu";
};
disableSerialization;
_curTarget = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
if(isNull _curTarget) exitWith {closeDialog 0;}; //Bad target

if(_curTarget isKindOf "House_F") exitWith {
	if((nearestObject [[16019.5,16952.9,0],"Land_Dome_Big_F"]) == _curTarget OR (nearestObject [[16019.5,16952.9,0],"Land_Research_house_V1_F"]) == _curTarget) then {
		_display = findDisplay 14999;
		_Btn1 = _display displayCtrl Btn1;
		_Btn2 = _display displayCtrl Btn2;
		_Btn3 = _display displayCtrl Btn3;
		_Btn4 = _display displayCtrl Btn4;
		_Btn5 = _display displayCtrl Btn5;
		_Btn6 = _display displayCtrl Btn6;
		_Btn7 = _display displayCtrl Btn7;
		_Btn8 = _display displayCtrl Btn8;
		_Btn9 = _display displayCtrl Btn9;
		_Btn10 = _display displayCtrl Btn10;
		_Btn11 = _display displayCtrl Btn11;
		_Btn12 = _display displayCtrl Btn12;
		_Btn13 = _display displayCtrl Btn13;
		_Btn14 = _display displayCtrl Btn14;
		_Btn15 = _display displayCtrl Btn15;
		_Btn16 = _display displayCtrl Btn16;
		_Btn17 = _display displayCtrl Btn17;
		_Btn18 = _display displayCtrl Btn18;
		life_pInact_curTarget = _curTarget;
		
		_Btn1 ctrlSetText localize "STR_pInAct_Repair";
		_Btn1 buttonSetAction "[life_pInact_curTarget] spawn life_fnc_repairDoor;";
		
		_Btn2 ctrlSetText localize "STR_pInAct_CloseOpen";
		_Btn2 buttonSetAction "[life_pInact_curTarget] call life_fnc_doorAnimate;";
		_Btn3 ctrlShow false;
		_Btn4 ctrlShow false;
		_Btn5 ctrlShow false;
		_Btn6 ctrlShow false;
		_Btn7 ctrlShow false;
		_Btn8 ctrlShow false;
		_Btn9 ctrlShow false;
		_Btn10 ctrlShow false;
		_Btn11 ctrlShow false;
		_Btn12 ctrlShow false;
		_Btn13 ctrlShow false;
		_Btn14 ctrlShow false;
		_Btn15 ctrlShow false;
		_Btn16 ctrlShow false;
		_Btn17 ctrlShow false;
		_Btn18 ctrlShow false;
	} else {
		closeDialog 0;
	};
};
		
if(!isPlayer _curTarget && side _curTarget == civilian) exitWith {closeDialog 0;}; //Bad side check?
_display = findDisplay 14999;
_Btn1 = _display displayCtrl Btn1;
_Btn2 = _display displayCtrl Btn2;
_Btn3 = _display displayCtrl Btn3;
_Btn4 = _display displayCtrl Btn4;
_Btn5 = _display displayCtrl Btn5;
_Btn6 = _display displayCtrl Btn6;
_Btn7 = _display displayCtrl Btn7;
_Btn8 = _display displayCtrl Btn8;
_Btn9 = _display displayCtrl Btn9;
_Btn10 = _display displayCtrl Btn10;
_Btn11 = _display displayCtrl Btn11;
_Btn12 = _display displayCtrl Btn12;
_Btn13 = _display displayCtrl Btn13;
_Btn14 = _display displayCtrl Btn14;
_Btn15 = _display displayCtrl Btn15;
_Btn16 = _display displayCtrl Btn16;
_Btn17 = _display displayCtrl Btn17;
_Btn18 = _display displayCtrl Btn18;
life_pInact_curTarget = _curTarget;

//Set Unrestrain Button
_Btn1 ctrlSetText localize "STR_pInAct_Unrestrain";
_Btn1 buttonSetAction "[life_pInact_curTarget] call life_fnc_unrestrain; closeDialog 0;";

if(currentWeapon player == PISTOL && PISTOL == "cl3_fingerprintscanner") then {_Btn3 ctrlEnable true; _Btn2 ctrlEnable true;} else {_Btn3 ctrlEnable false; _Btn2 ctrlEnable false;};
//Set Check Licenses Button
_Btn2 ctrlSetText localize "STR_pInAct_checkLicenses";
_Btn2 buttonSetAction "[[player],""life_fnc_licenseCheck"",life_pInact_curTarget,FALSE] spawn life_fnc_MP";

//Set Search Button
_Btn3 ctrlSetText localize "STR_pInAct_SearchPlayer";
_Btn3 buttonSetAction "[life_pInact_curTarget] spawn life_fnc_searchAction; closeDialog 0;";

//Set Escort Button
if((_curTarget getVariable["Escorting",false])) then {
	_Btn4 ctrlSetText localize "STR_pInAct_StopEscort";
	_Btn4 buttonSetAction "[life_pInact_curTarget] call life_fnc_stopEscorting; [life_pInact_curTarget] call life_fnc_copInteractionMenu;";
} else {
	_Btn4 ctrlSetText localize "STR_pInAct_Escort";
	_Btn4 buttonSetAction "[life_pInact_curTarget] call life_fnc_escortAction; closeDialog 0;";
};

//Set Ticket Button
_Btn5 ctrlSetText localize "STR_pInAct_TicketBtn";
_Btn5 buttonSetAction "[life_pInact_curTarget] call life_fnc_ticketAction;";

//Set Jail Button
_Btn6 ctrlSetText localize "STR_pInAct_Arrest";
_Btn6 buttonSetAction "[life_pInact_curTarget] call life_fnc_arrestAction;";

_Btn7 ctrlSetText localize "STR_pInAct_PutInCar";
_Btn7 buttonSetAction "[life_pInact_curTarget] call life_fnc_putInCar;";

_Btn8 ctrlShow false;

//alcool
_Btn9 ctrlSetText localize "STR_pInAct_Breathalyzer";
_Btn9 buttonSetAction "[[player],""life_fnc_breathalyzer"",life_pInact_curTarget,FALSE] spawn life_fnc_MP; closeDialog 0;";

//Check that you are near a place to jail them.
if(!((player distance (getMarkerPos "cop_spawn_1") < 30) OR  (player distance (getMarkerPos "cop_spawn_2") < 30) OR (player distance (getMarkerPos "cop_spawn_3") < 30) OR (player distance (getMarkerPos "cop_spawn_4") < 30) OR (player distance (getMarkerPos "cop_spawn_5") < 30) OR (player distance (getMarkerPos "jail_marker") < 50))) then 
{
	_Btn6 ctrlEnable false;
};

//delete weapon
_Btn10 ctrlSetText localize "STR_pInAct_DelLic1";
_Btn10 buttonSetAction "[life_pInact_curTarget] spawn life_fnc_removeL1;";

//delete uniform
_Btn11 ctrlSetText localize "STR_pInAct_DelLic2";
_Btn11 buttonSetAction "[life_pInact_curTarget] spawn life_fnc_removeL2;";

//delete clothes
_Btn12 ctrlSetText localize "STR_pInAct_DelLic3";
_Btn12 buttonSetAction "[life_pInact_curTarget] spawn life_fnc_removeL3;";

//delete head
_Btn13 ctrlSetText localize "STR_pInAct_DelLic4";
_Btn13 buttonSetAction "[life_pInact_curTarget] spawn life_fnc_removeL4;";

//delete weapon
_Btn14 ctrlSetText localize "STR_pInAct_RestricWp";
_Btn14 buttonSetAction "[life_pInact_curTarget] spawn life_fnc_removeW;";

//delete uniform
_Btn15 ctrlSetText localize "STR_pInAct_RestricU";
_Btn15 buttonSetAction "[life_pInact_curTarget] spawn life_fnc_removeU;";

//delete vest
_Btn16 ctrlSetText localize "STR_pInAct_RestricV";
_Btn16 buttonSetAction "[life_pInact_curTarget] spawn life_fnc_removeV;";

//delete head
_Btn17 ctrlSetText localize "STR_pInAct_RestricHG";
_Btn17 buttonSetAction "[life_pInact_curTarget] spawn life_fnc_removeHD;";

_Btn18 ctrlShow false;