/*
	File: fn_gagAction.sqf
	Author: lowheartrate
	Assistance by: Panda
	
	Description:
	What happens to the player when gagged.
*/
private["_gagger"];

_gagger = param[0,ObjNull,[ObjNull]];

hint format["Un brouilleur a été activé par %1.", _gagger getVariable["realname",_gagger]];
titleText ["Un brouilleur a été activé !", "PLAIN"];

5 enableChannel false;
//Disable Group Chat
3 enableChannel false;
//Disable Vehicle Chat
4 enableChannel false;
//Disable Side Chat
7 enableChannel false;

waitUntil{!(player getVariable ["gagged",false]) OR !(player getVariable ["restrained",false])};
hint "Le brouilleur a été désactive !!";
titleText ["Le brouilleur a été désactive !!", "PLAIN"];
5 enableChannel true;
3 enableChannel true;
4 enableChannel true;
7 enableChannel true;