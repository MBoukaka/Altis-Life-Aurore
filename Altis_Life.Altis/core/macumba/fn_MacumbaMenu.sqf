/*
	File: fn_MacumbaMenu.sqf
	Author: Nanou v0.1a
	
	Description:
	Un bouton par action.
*/
if(!license_civ_colonna) exitwith {hint "T'es pas colonna !"};

#define Btn1 37450
#define Btn2 37451
#define Btn3 37452
#define Btn4 37453
#define Btn5 37454
#define Btn6 37455
#define Btn7 37456
#define Btn8 37457
#define Btn9 37458
#define Title 37401

private["_display","_Btn1","_Btn2","_Btn3","_Btn4","_Btn5","_Btn5","_Btn6","_Btn7","_Btn8","_Btn9"];
if(!dialog) then {
	createDialog "pInteraction_Menu";
};
disableSerialization;

_display = findDisplay 37400;

_Btn1 = _display displayCtrl Btn1;
_Btn2 = _display displayCtrl Btn2;
_Btn3 = _display displayCtrl Btn3;
_Btn4 = _display displayCtrl Btn4;
_Btn5 = _display displayCtrl Btn5;
_Btn6 = _display displayCtrl Btn6;
_Btn7 = _display displayCtrl Btn7;
_Btn8 = _display displayCtrl Btn8;
_Btn9 = _display displayCtrl Btn9;

//Compil 1
	_Btn1 ctrlSetText localize "STR_pInAct_Compil1";
	_Btn1 buttonSetAction "[0] call life_fnc_MacumbaSelect;";

//Compil 2
	_Btn2 ctrlSetText localize "STR_pInAct_Compil2";
	_Btn2 buttonSetAction "[1] call life_fnc_MacumbaSelect;	closeDialog 0;";
	
//Compil 3
	_Btn3 ctrlSetText localize "STR_pInAct_Compil3";
	_Btn3 buttonSetAction "[2] call life_fnc_MacumbaSelect; closeDialog 0;";
	
//Compil 4
	_Btn4 ctrlSetText localize "STR_pInAct_Compil4";
	_Btn4 buttonSetAction "[3] call life_fnc_MacumbaSelect; closeDialog 0;";
	
	_Btn5 ctrlShow false;
	_Btn6 ctrlShow false;
	_Btn7 ctrlShow false;
	_Btn8 ctrlShow false;
	_Btn9 ctrlShow false;