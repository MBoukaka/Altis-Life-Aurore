private["_cop"];
_cop = [_this,0,Objnull,[objNull]] call BIS_fnc_param;
if(_cop == player) then {}; //WTF?

if(isNull _cop OR !(player getVariable["restrained",FALSE])) exitWith {}; //Error check?

removeGoggles player;
removeHeadGear player;
[3] call SOCK_fnc_updatePartial;
titleText["Vos lunettes ou chapeau ont été saisit comme pieces à convictions.","PLAIN"];

//[[0,format["%1's Waffen wurden von %2 beschlagnahmt!", name player, name _cop]],"life_fnc_broadcast",true,false] spawn life_fnc_MP;