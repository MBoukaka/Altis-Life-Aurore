/*
    File: fn_packupdouble.sqf
    Author: Bryan "Tonic" Boardwine
    Edited by: OLLI aka Hauklotz

    Description:
    Packs up a deployed wall.
*/
private["_cone"];
_cone = nearestObjects[getPos player,["RoadCone_F"],8] select 0;
if(isNil "_cone") exitWith {};

if(([true,"cone",1] call life_fnc_handleInv)) then
{
    player removeAction life_action_conePickup;
    life_action_conePickup = nil;
    deleteVehicle _cone;
};