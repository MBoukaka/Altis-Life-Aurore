hint "! DEBUG VEHICULE 1 ! \n\n Le fonctionnement est simple : \n\n Tu selectionnes le vehicules buggé pour debug la variable variable !";

waitUntil {(cursortarget isKindOf "Car") && !(cursortarget isKindOf "B_Truck_01_mover_F") && (player distance cursortarget) < 6}; 

_levehiculearemorquer = cursortarget;
_type = typeOf _levehiculearemorquer;
cursortarget setvariable ["jesuisattacher",1,true];

hint format['Ok, véhicule de type %1 est en variable debug 1 !',_type];