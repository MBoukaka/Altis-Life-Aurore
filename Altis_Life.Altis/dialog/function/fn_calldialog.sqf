/*
	File: fn_calldialog.sqf
	Author: alleskapot & Lifted
	Thanks again for all the help alleskapot!
	Description:
	Calls the Dialog.
    
*/
if(!createDialog "channel") exitWith {hint "Impossible de créer le dialogue";}; //Couldn't create the menu?
disableSerialization;