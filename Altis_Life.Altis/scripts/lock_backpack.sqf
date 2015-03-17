/* 
Merci à Prospere 
*/
waituntil {alive player};
if (side player == west) exitwith {};


while {alive player} do
{
	WaitUntil {!isnull (findDisplay 602)};	
	if (cursorTarget iskindof "Car") then {
		private ["_veh","_locked"];
			_veh = cursorTarget;
			_locked = locked _veh;
			
			if(_locked == 2) exitwith 
			{
				(FindDisplay 602) closeDisplay 1;
				(FindDisplay 640) closeDisplay 1;
				titleText["\n\n\n\n\n\n\n\n Ce vehicule est verrouille !", "PLAIN",0];
			};	
};
	WaitUntil {isnull (findDisplay 602)};
};
waituntil {alive player};
execvm "scripts\lock_backpack.sqf";
WaitUntil {!isnull (findDisplay 640)};	
//titleText["\n\n\n\n\n\n\n\n Interdit d'ouvrir son inventaire dans une maison avec un coffre verrouiller", "PLAIN",0];