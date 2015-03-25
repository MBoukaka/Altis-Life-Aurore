#include <macro.h>
/*
	File: fn_sendChannel.sqf
	Author: alleskapot & Lifted
	Thanks again for all the help alleskapot!
	Description:
	Ermöglicht senden bzw. die Abfrage des Geschriebenen.

*/

private["_message"];
disableSerialization;

waitUntil {!isnull (findDisplay 9000)};

if ( CASH < 5000 ) exitWith { systemChat "Il faut 5.000€ pour envoyer une pub !!"; }; // Hint if person haves no 6000 dollar
if (!life_channel_send) exitWith { systemChat "Il faut attendre 15 minutes !!"; }; //Gives Player the Hint to Wait 10 mins

CASH = CASH - 5000;
[0] call SOCK_fnc_updatePartial;

_message = ctrlText 9001;
[[3,format ["%1 a envoyé un message de AURORE-TV : %2",name player,_message]],"life_fnc_broadcast",true,false] call life_fnc_MP;
life_channel_send = false;

[] spawn
{
	sleep 900;
	life_channel_send = true;
};
[] call life_fnc_hudUpdate;