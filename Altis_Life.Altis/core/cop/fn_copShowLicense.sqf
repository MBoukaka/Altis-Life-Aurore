#include <macro.h>
/*
	Show cop license to target player
*/

private["_target", "_message"];

_target = cursorTarget;

if(playerSide != west) exitWith
{
	hint "Du bist kein Cop!";
};

if( isNull _target) then {_target = player;};

if( !(_target isKindOf "Man") ) then {_target = player;};

if( !(alive _target) ) then {_target = player;};

_message = format["<img size='10' color='#FFFFFF' image='%1'/><br/><br/><t size='2.5'>%2</t><br/><t size='1.8'>%3</t><br/><t size='1'>Gendarmerie Aurore</t>", switch ((_x GVAR "rank")) do {
					case 2: {"icons\insigne.paa"}; 
					case 3: {"icons\insigne.paa"};
					case 4: {"icons\insigne.paa"};
					case 5: {"icons\insigne.paa"};
					case 6: {"icons\insigne.paa"};
					case 7: {"icons\insigne.paa"};
					case 8: {"icons\Gouverneur.paa"};
					case 9: {"icons\IGGN.paa"};
					default {"icons\insigne.paa"};}, _x GVAR ["realname",name _x], switch ((_x GVAR "rank")) do {
					case 2: {"Brigadier 2C."}; 
					case 3: {"Brigadier 1C."};
					case 4: {"Adjudant"};
					case 5: {"Lieutenant"};
					case 6: {"Capitaine"};
					case 7: {"Colonel"};
					case 8: {"Gouverneur"};
					case 9: {"IGGN"};
					default {"Recrue"};
					}];

[[player, _message],"life_fnc_copLicenseShown",_target,false] spawn life_fnc_MP;