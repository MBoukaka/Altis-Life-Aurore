#include <macro.h>
/*
	File: fn_p_iPhone9S.sqf
	Author: Jordan "Nanou" C.
	
	Description:
	Tablette graphique pour @AltisAurore.fr
*/

#define iphone 1200
#define iapp1 1201 //admin
#define iapp2 1202 //inv
#define iapp3 1203 //sms
#define iapp4 1204 //keys
#define iapp5 1205 //bourse
#define iapp6 1206 //gg
#define iapp7 1207 //sets
#define iapp8 1208 //sync
#define iapp10 1210 //w

#define bapp1 1601 //admin
#define bapp2 1602 //inv
#define bapp3 1603 //sms
#define bapp4 1608 //keys
#define bapp5 1604 //bourse
#define bapp6 1605 //w
#define bapp7 1607 //sets
#define bapp8 1606 //sync
#define home 1609 //home
#define bapp10 1610 //gg

private["_display","_iphone","_iapp1","_iapp2","_iapp3","_iapp4","_iapp5","_iapp6","_iapp7","_iapp8","_iapp10","_bapp1","_bapp2","_bapp3","_bapp4","_bapp5","_bapp10","_bapp6","_bapp7","_bapp8","_home"];

if(!alive player || dialog) exitWith {}; //Prevent them from opening this for exploits while dead.

createDialog "piPhone9S";
disableSerialization;

_display = findDisplay 1199;

_iphone = _display displayCtrl iphone;
_iapp1 = _display displayCtrl iapp1;
_iapp2 = _display displayCtrl iapp2;
_iapp3 = _display displayCtrl iapp3;
_iapp4 = _display displayCtrl iapp4;
_iapp5 = _display displayCtrl iapp5;
_iapp6 = _display displayCtrl iapp6;
_iapp7 = _display displayCtrl iapp7;
_iapp8 = _display displayCtrl iapp8;
_iapp10 = _display displayCtrl iapp10;

_bapp1 = _display displayCtrl bapp1;
_bapp2 = _display displayCtrl bapp2;
_bapp3 = _display displayCtrl bapp3;
_bapp4 = _display displayCtrl bapp4;
_bapp5 = _display displayCtrl bapp5;
_bapp6 = _display displayCtrl bapp6;
_bapp7 = _display displayCtrl bapp7;
_bapp8 = _display displayCtrl bapp8;
_bapp10 = _display displayCtrl bapp10;

_home = _display displayCtrl home;

//On affiche les applications
_iphone ctrlShow true; //iphone
_home ctrlShow true;

_iapp2 ctrlShow true; //inventaire
_bapp2 ctrlShow true;

_iapp3 ctrlShow true; //sms
_bapp3 ctrlShow true;

_iapp4 ctrlShow true; //keys
_bapp4 ctrlShow true;

_iapp7 ctrlShow true; //reglages
_bapp7 ctrlShow true;

_iapp8 ctrlShow true; //sync
_bapp8 ctrlShow true;

_iapp5 ctrlShow true; //bourse
_bapp5 ctrlShow true;


if(FETCH_CONST(life_adminlevel) < 1) then {_iapp1 ctrlShow false; _bapp1 ctrlShow false;} else { _iapp1 ctrlShow true; _bapp1 ctrlShow true; }; //admin

if (playerSide == west) then {
	_iapp6 ctrlShow false; //gang disable
	_bapp10 ctrlShow false;

	_iapp10 ctrlShow true; //wanted
	_bapp6 ctrlShow true;
	
	
};

if (playerSide == civilian) then { 
	_iapp6 ctrlShow true; //gang enable
	_bapp10 ctrlShow true;

	_iapp10 ctrlShow false; //wanted
	_bapp6 ctrlShow false;
};

if (playerSide == independent) then { 
	_iapp6 ctrlShow false; //gang enable
	_bapp10 ctrlShow false;

	_iapp10 ctrlShow false; //wanted
	_bapp6 ctrlShow false;
};