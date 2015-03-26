#include <macro.h>
_speed = speed player;
_pay = 0;
_veh = vehicle player;
if((_veh getVariable "siren")) exitWith {};
if(getPosATL _veh select 2 > 20) exitWith {hint "Vous avez de la chance, les radars ne flashent pas les hélicos!";};
if(!license_civ_driver) exitWith {
cutText[format[" !!! Vous avez été flashé à %1 km/h !!! \n\n\n N'ayant pas le permis, vous êtes recherché...",round _speed,[_pay] call life_fnc_numberText],"WHITE OUT"];
0.0001 cutFadeOut 5;
sleep 0.7;
0.0001 cutFadeOut 5;
};
if((round _speed > 135) && (round _speed < 145)) then {_pay = 140;};
if((round _speed > 144) && (round _speed < 161)) then {_pay = 250;};
if(round _speed > 160) then {_pay = 849;};
 
if(BANK < _pay) exitWith {
cutText[format[" !!! Vous avez été flashé à %1 km/h !!! \n\n\n Vous écopez d'une amende de %2 $ mais n'ayant pas les moyens, vous êtes recherché ! \n\n\n Vous n'avez plus de permis !",round _speed,[_pay] call life_fnc_numberText],"WHITE OUT"];
0.0001 cutFadeOut 5;
sleep 0.7;
0.0001 cutFadeOut 5;
license_civ_driver = false;
};
if((round _speed > 135) && (round _speed < 145)) then {
if(BANK >= _pay) then {
cutText[format[" !!! Vous avez été flashé à %1 km/h !!! \n\n\n Vous écopez d'une amende de %2 $ retirés de votre compte bancaire !",round _speed,[_pay] call life_fnc_numberText],"WHITE OUT"];
0.0001 cutFadeOut 5;
sleep 0.7;
0.0001 cutFadeOut 5;
BANK = BANK - _pay;
};
};
 
if((round _speed > 144) && (round _speed < 161)) then {
if(BANK >= _pay) then {
cutText[format[" !!! Vous avez été flashé à %1 km/h !!! \n\n\n Vous écopez d'une amende de %2 $ retirés de votre compte bancaire !",round _speed,[_pay] call life_fnc_numberText],"WHITE OUT"];
0.0001 cutFadeOut 5;
sleep 0.7;
0.0001 cutFadeOut 5;
BANK = BANK - _pay;
};
};
 
if(round _speed > 160) then {
_pay = 5000;
if(BANK >= _pay) then {
cutText[format[" !!! Vous avez été flashé à %1 km/h !!! \n\n\n Vous écopez d'une amende de %2 $ retirés de votre compte bancaire ! \n\n\n Vous n'avez plus de permis !",round _speed,[_pay] call life_fnc_numberText],"WHITE OUT"];
0.0001 cutFadeOut 5;
sleep 0.7;
0.0001 cutFadeOut 5;
license_civ_driver = false;
BANK = BANK - _pay;
};
};