#include <macro.h>
/*
	File: fn_p_openAdminMenu.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Heimdall aime le zboob
*/
createDialog "iphone_admin_menu";
disableSerialization;

if(FETCH_CONST(life_adminlevel) < 3) then {
	ctrlShow[6969,false];
};