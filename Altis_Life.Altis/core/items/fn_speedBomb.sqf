/*
	File: fn_speedBomb.sqf
   	Author: Fuzz
   	
   	Description:
   	Attaches a speed bomb to a vehicle.
   */
private["_unit"];
_unit = cursorTarget;

if((!(_unit isKindOf "LandVehicle"))&&(!(_unit getVariable ["restrained",false]))) exitWith {hint "Vous ne pouvez pas poser la bombe sur cette objet."};
if(player distance _unit > 7) exitWith {hint "Vous devez être dans les 7 pieds!"};
if(!([false,"speedbomb",1] call life_fnc_handleInv)) exitWith {};
closeDialog 0;

life_action_inUse = true;

player playMove "AinvPknlMstpSnonWnonDnon_medic_1";
sleep 1.5;
waitUntil {animationState player != "ainvpknlmstpsnonwnondnon_medic_1"};
 
life_action_inUse = false;
if(player distance _unit > 7) exitWith {titleText["Vous ete pas dans le Rayon!","PLAIN"];};
     
titleText["Vous avez joint la bombe de vitesse a ce véhicule.","PLAIN"];
life_experience = life_experience + 25; 
     
[_unit] spawn
{
    _veh = _this select 0;
    waitUntil {(speed _veh) > 70};
    [[_veh, "bombarm",20],"life_fnc_playSound",true,false] spawn BIS_fnc_MP;
    hint "La bombe que vous avez plante sur un véhicule vient d'etre active!";
    { [[2,"Une bombe de vitesse a ete active sur ce véhicule, si vous descender en dessous de 50km\H la bombe explosera!"],"life_fnc_broadcast",_x,false] spawn BIS_fnc_MP; } foreach (crew _veh);
    waitUntil {(speed _veh) < 50};
    serv_killed = [player,"1090"];
    publicVariableServer "serv_killed";
    _test = "Bo_Mk82" createVehicle [0,0,9999];
    _test setPos (getPos _veh);
    _test setVelocity [100,0,0];
    hint "La bombe que vous avez plante sur un véhicule a explose!";
};