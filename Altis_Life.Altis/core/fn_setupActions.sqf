#include <macro.h>
/*
	File: fn_setupActions.sqf
	
	Description:
	Master addAction file handler for all client-based actions.
*/
switch (playerSide) do
{
	case west:
	{
		// Voyage Rapide
		life_actions = life_actions + [player addAction["<t color='#FFFF33'>Voyage rapide</t>",life_fnc_spawnMenu,"",151,false,false,"",' ((player distance (getMarkerPos "cop_spawn_1") < 30) OR  (player distance (getMarkerPos "cop_spawn_2") < 30) OR (player distance (getMarkerPos "cop_spawn_3") < 30) OR  (player distance (getMarkerPos "cop_spawn_4") < 30) OR  (player distance (getMarkerPos "cop_spawn_5") < 30)) ']];
		// Prendre barrière
		life_actions = life_actions + [player addAction["Prendre barrière",life_fnc_packupmauer,"",0,false,false,"",' _mauer = nearestObjects[getPos player,["RoadBarrier_F"],8] select 0; !isNil "_mauer" && !isNil {(_mauer getVariable "item")}']];
		// Prendre panneau
		life_actions = life_actions + [player addAction["Prendre Panneau",life_fnc_packuppan1,"",0,false,false,"",' _pan1 = nearestObjects[getPos player,["Orel_Panneau_Pied_Rond"],8] select 0; !isNil "_pan1" && !isNil {(_pan1 getVariable "item")}']];
		// Reprendre la herse
		life_actions = life_actions + [player addAction["<t color='#FFFF33'>Remballer la herse</t>",life_fnc_packupSpikes,"",140,false,false,"",' _spikes = nearestObjects[getPos player,["Land_Razorwire_F"],8] select 0; !isNil "_spikes" && !isNil {(_spikes getVariable "item")}']];		
        act22 = player addaction ["Tarifs amendes", "amendeinfo.sqf", [], 1, false, true, "", ""];
		// Prendre lumiere
		life_actions = life_actions + [player addAction["Prendre lumiere",life_fnc_packupdouble,"",0,false,false,"",' _double = nearestObjects[getPos player,["Land_PortableLight_double_F"],8] select 0; !isNil "_double" && !isNil {(_double getVariable "item")}']];
	
		// Entrer dans un vehicule meme verouillé
		life_actions = life_actions + [player addAction["Monter en conducteur",life_fnc_copEnter,"driver",200,false,false,"",'!isNull cursorTarget && ((cursorTarget isKindOf "Car")||(cursorTarget isKindOf "Air")||(cursorTarget isKindOf "Ship")) && (locked cursorTarget) != 0 && cursorTarget distance player < 5']];
		life_actions = life_actions + [player addAction["Monter en passager",life_fnc_copEnter,"passenger",100,false,false,"",'!isNull cursorTarget && ((cursorTarget isKindOf "Car")||(cursorTarget isKindOf "Air")||(cursorTarget isKindOf "Ship")) && (locked cursorTarget) != 0 && cursorTarget distance player < 5']];
		life_actions = life_actions + [player addAction["Descendre",life_fnc_copEnter,"exit",100,false,false,"",'(vehicle player != player) && (locked(vehicle player)==2)']];
	};
	
	case civilian:
	{
		//Drop fishing net
		life_actions = [player addAction[localize "STR_pAct_DropFishingNet",life_fnc_dropFishingNet,"",0,false,false,"",'
		(surfaceisWater (getPos vehicle player)) && (vehicle player isKindOf "Ship") && life_carryWeight < life_maxWeight && speed (vehicle player) < 2 && speed (vehicle player) > -1 && !life_net_dropped ']];
		//Rob person
		life_actions = life_actions + [player addAction[localize "STR_pAct_RobPerson",life_fnc_robAction,"",0,false,false,"",'
		!isNull cursorTarget && player distance cursorTarget < 3.5 && isPlayer cursorTarget && ((animationState cursorTarget == "Incapacitated") OR (animationState cursorTarget == "amovpercmstpsnonwnondnon_amovpercmstpssurwnondnon")) && !(cursorTarget GVAR["robbed",FALSE]) ']];
		
				///////////////////////////////Dépaneur HEMTT/////////////////////////////////
				//Service Truck_Stuff
				life_actions = life_actions + [player addAction["<t color='#FF0000'>Reparer le vehicule proche</t>",life_fnc_serviceTruck,"",99,false,false,"",' (typeOf (vehicle player) == "B_Truck_01_mover_F") && ((vehicle player animationPhase "HideServices") == 0) && license_civ_dep && ((vehicle player) in life_vehicles) && (speed vehicle player) < 1 ']];
				//Service Truck_Impound Car
				life_actions = life_actions + [player addAction["<t color='#0000FF'>Mettre le vehicule en fourriere</t>",life_fnc_dep_impound,"",0,false,false,"",' (typeOf (vehicle player) == "B_Truck_01_mover_F") && ((vehicle player animationPhase "HideServices") == 0) && license_civ_dep && ((vehicle player) in life_vehicles) && (speed vehicle player) < 1 ']];
				//Remorquer vehicule
				life_actions = life_actions + [player addAction["<t color='#FF0000'>Remorquer le vehicule</t>","core\depanneur\fn_attacher.sqf",[],7,true,true,"",' (typeOf (vehicle player) == "B_Truck_01_mover_F") && ((vehicle player animationPhase "HideServices") == 0) && license_civ_dep && (_target distance _this) < 12 ']];
				//Reset variable 1
				life_actions = life_actions + [player addAction["<t color='#FF0000'>DEBUG VARIABLE 0</t>","core\depanneur\fn_resvar1.sqf",[],7,true,true,"",' (typeOf (vehicle player) == "B_Truck_01_mover_F") && ((vehicle player animationPhase "HideServices") == 0) && license_civ_dep && (_target distance _this) < 12 ']];
				//Reset variable 2
				life_actions = life_actions + [player addAction["<t color='#FF0000'>DEBUG VARIABLE 1</t>","core\depanneur\fn_resvar2.sqf",[],7,true,true,"",' (typeOf (vehicle player) == "B_Truck_01_mover_F") && ((vehicle player animationPhase "HideServices") == 0) && license_civ_dep && (_target distance _this) < 12 ']];
				//Detacher vehicule
				life_actions = life_actions + [player addAction["<t color='#0000FF'>Detacher le vehicule</t>","core\depanneur\fn_detacher.sqf",[],7,true,true,"",' (typeOf (vehicle player) == "B_Truck_01_mover_F") && ((vehicle player animationPhase "HideServices") == 0) && license_civ_dep && (_target distance _this) < 12 ']];
				/////////////////////////////////////////////////////////////////////////
				////////////////////////////////Dépaneur M9-Humming/////////////////////////////////
				//Service Truck_Stuff
				life_actions = life_actions + [player addAction["<t color='#FF0000'>Reparer le vehicule proche</t>",life_fnc_serviceTruck,"",99,false,false,"",' (typeOf (vehicle player) == "B_Heli_Light_01_F") && ((vehicle player animationPhase "HideServices") == 0) && license_civ_dep && ((vehicle player) in life_vehicles) && (speed vehicle player) < 1 ']];
				//Service Truck_Impound Car
				life_actions = life_actions + [player addAction["<t color='#0000FF'>Mettre le vehicule en fourriere</t>",life_fnc_dep_impound,"",0,false,false,"",' (typeOf (vehicle player) == "B_Heli_Light_01_F") && ((vehicle player animationPhase "HideServices") == 0) && license_civ_dep && ((vehicle player) in life_vehicles) && (speed vehicle player) < 1 ']];
				/////////////////////////////////////////////////////////////////////////
				////////////////////////////////Dépaneur F350/////////////////////////////////
				//Service Truck_Stuff
				life_actions = life_actions + [player addAction["<t color='#FF0000'>Reparer le vehicule proche</t>",life_fnc_serviceTruck,"",99,false,false,"",' (typeOf (vehicle player) == "cl3_f150repo_orange") && ((vehicle player animationPhase "HideServices") == 0) && license_civ_dep && ((vehicle player) in life_vehicles) && (speed vehicle player) < 1 ']];
				//Service Truck_Impound Car
				life_actions = life_actions + [player addAction["<t color='#0000FF'>Mettre le vehicule en fourriere</t>",life_fnc_dep_impound,"",0,false,false,"",' (typeOf (vehicle player) == "cl3_f150repo_orange") && ((vehicle player animationPhase "HideServices") == 0) && license_civ_dep && ((vehicle player) in life_vehicles) && (speed vehicle player) < 1 ']];
				//Reset variable 1
				life_actions = life_actions + [player addAction["<t color='#FF0000'>DEBUG VARIABLE 0</t>","core\depanneur\fn_resvar3.sqf",[],7,true,true,"",' (typeOf (vehicle player) == "cl3_f150repo_orange") && ((vehicle player animationPhase "HideServices") == 0) && license_civ_dep && (_target distance _this) < 12 ']];
				//Reset variable 2
				life_actions = life_actions + [player addAction["<t color='#FF0000'>DEBUG VARIABLE 1</t>","core\depanneur\fn_resvar4.sqf",[],7,true,true,"",' (typeOf (vehicle player) == "cl3_f150repo_orange") && ((vehicle player animationPhase "HideServices") == 0) && license_civ_dep && (_target distance _this) < 12 ']];
				//Remorquer vehicule
				life_actions = life_actions + [player addAction["<t color='#FF0000'>Remorquer le vehicule</t>","core\depanneur\fn_attacher2.sqf",[],7,true,true,"",' (typeOf (vehicle player) == "cl3_f150repo_orange") && ((vehicle player animationPhase "HideServices") == 0) && license_civ_dep && (_target distance _this) < 12 ']];
				//Detacher vehicule
				life_actions = life_actions + [player addAction["<t color='#0000FF'>Detacher le vehicule</t>","core\depanneur\fn_detacher.sqf",[],7,true,true,"",' (typeOf (vehicle player) == "cl3_f150repo_orange") && ((vehicle player animationPhase "HideServices") == 0) && license_civ_dep && (_target distance _this) < 12 ']];
				/////////////////////////////////////////////////////////////////////////
				////////////////////////////////Dépaneur Dep Offroad/////////////////////////////////
				//Service Truck_Stuff
				life_actions = life_actions + [player addAction["<t color='#FF0000'>Reparer le vehicule proche</t>",life_fnc_serviceTruck,"",99,false,false,"",' (typeOf (vehicle player) == "Dep_Offroad") && ((vehicle player animationPhase "HideServices") == 0) && license_civ_dep && ((vehicle player) in life_vehicles) && (speed vehicle player) < 1 ']];
				//Service Truck_Impound Car
				life_actions = life_actions + [player addAction["<t color='#0000FF'>Mettre le vehicule en fourriere</t>",life_fnc_dep_impound,"",0,false,false,"",' (typeOf (vehicle player) == "Dep_Offroad") && ((vehicle player animationPhase "HideServices") == 0) && license_civ_dep && ((vehicle player) in life_vehicles) && (speed vehicle player) < 1 ']];
				//////////////////////////////////////////////////////////////////////////
				
				// Prendre cone depanneur
				life_actions = life_actions + [player addAction["Prendre cone",life_fnc_packupcone,"",0,false,false,"",' _double = nearestObjects[getPos player,["RoadCone_F"],8] select 0; license_civ_dep && !isNil "_cone" && !isNil {(_cone getVariable "item")}']];

				// Prendre P G Rally
				life_actions = life_actions + [player addAction["Prendre P Gauche",life_fnc_packupvirg,"",0,false,false,"",' _virg = nearestObjects[getPos player,["ArrowDesk_L_F"],8] select 0; license_civ_rally && !isNil "_virg" && !isNil {(_virg getVariable "item")}']];
				// Prendre P D Rally
				life_actions = life_actions + [player addAction["Prendre P Droite",life_fnc_packupvird,"",0,false,false,"",' _vird = nearestObjects[getPos player,["ArrowDesk_R_F"],8] select 0; license_civ_rally && !isNil "_vird" && !isNil {(_vird getVariable "item")}']];
	};
	
	case independent:
	{
		//fast travel
		life_actions = life_actions + [player addAction["<t color='#FFFF33'>Voyage rapide</t>",life_fnc_spawnMenu,"",151,false,false,"",' ((player distance (getMarkerPos "medic_spawn_1") < 30) OR  (player distance (getMarkerPos "medic_spawn_2") < 30) OR  (player distance (getMarkerPos "medic_spawn_3") < 30) OR  (player distance (getMarkerPos "medic_spawn_4") < 30)) ']];
	};
};

//S'asseoir
life_actions = life_actions + [player addAction["<t color='#0099FF'>S'asseoir</t>",life_fnc_sitDown,"",10,false,false,"",' !isNull cursorTarget && player distance cursorTarget < 3.5 && (cursorTarget isKindOf "Land_CampingChair_V2_F" OR cursorTarget isKindOf "Land_ChairWood_F" OR cursorTarget isKindOf "Land_ChairPlastic_F")']];
//Se lever
life_actions = life_actions + [player addAction["<t color='#0099FF'>Se Lever</t>",life_fnc_sitDown,"",10,false,false,"",'life_sitting']];