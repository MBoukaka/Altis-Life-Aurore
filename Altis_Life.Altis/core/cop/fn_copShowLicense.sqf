/*
	Show cop license to target player
*/

private["_target", "_message","_coplevel","_rang"];

_target = cursorTarget;

if(playerSide != west) exitWith
{
	hint "Tu n'es pas un flic !";
};

if( isNull _target) then {_target = player;};

if( !(_target isKindOf "Man") ) then {_target = player;};

if( !(alive _target) ) then {_target = player;};

_coplevel = call life_coplevel;

switch ( _coplevel ) do
{
	case 1: { _rang = "Recrue"; };
	case 2: { _rang = "Brigadier 2C"; };
	case 3: { _rang = "Brigadier 1C"; };
	case 4: { _rang = "Adjudant"; };
	case 5: { _rang = "Lieutenant"; };
	case 6: { _rang = "Capitaine"; };
	case 7: { _rang = "Colonel"; };
	case 8: { _rang = "Gouverneur"; };
	case 9: { _rang = "IGGN"; };
	default {_rank =  "Error";};
};

_message = format["<img size='10' color='#FFFFFF' image='icons\insigne.paa'/><br/><br/><t size='2.5'>%1</t><br/><t size='1.8'>%2</t><br/><t size='1'>Gendarmerie Aurore</t>", name player, _rang];

[[player, _message],"life_fnc_copLicenseShown",_target,false] spawn life_fnc_MP;