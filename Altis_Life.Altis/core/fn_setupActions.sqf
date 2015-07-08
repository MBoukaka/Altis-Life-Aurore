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
		life_actions = life_actions + [player addAction["<t color='#FFFF33'>Voyage rapide</t>",life_fnc_spawnMenu,"",151,false,false,"",' ((player distance (getMarkerPos "cop_tp_1") < 3) OR  (player distance (getMarkerPos "cop_spawn_2") < 30) OR (player distance (getMarkerPos "cop_spawn_3") < 30) OR  (player distance (getMarkerPos "cop_spawn_4") < 30) OR  (player distance (getMarkerPos "cop_tp_5") < 3) OR  (player distance (getMarkerPos "cop_tp_6") < 3)) ']];
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
				////////////////////////////////Dépaneur Dep Offroad/////////////////////
				//Service Truck_Stuff
				life_actions = life_actions + [player addAction["<t color='#FF0000'>Reparer le vehicule proche</t>",life_fnc_serviceTruck,"",99,false,false,"",' (typeOf (vehicle player) == "Dep_Offroad") && ((vehicle player animationPhase "HideServices") == 0) && license_civ_dep && ((vehicle player) in life_vehicles) && (speed vehicle player) < 1 ']];
				//Service Truck_Impound Car
				life_actions = life_actions + [player addAction["<t color='#0000FF'>Mettre le vehicule en fourriere</t>",life_fnc_dep_impound,"",0,false,false,"",' (typeOf (vehicle player) == "Dep_Offroad") && ((vehicle player animationPhase "HideServices") == 0) && license_civ_dep && ((vehicle player) in life_vehicles) && (speed vehicle player) < 1 ']];
				/////////////////////////////////////////////////////////////////////////
				
				// Prendre cone depanneur
				life_actions = life_actions + [player addAction["Prendre cone",life_fnc_packupcone,"",0,false,false,"",' _double = nearestObjects[getPos player,["RoadCone_F"],8] select 0; license_civ_dep && !isNil "_cone" && !isNil {(_cone getVariable "item")}']];

				// Prendre P G Rally
				life_actions = life_actions + [player addAction["Prendre P Gauche",life_fnc_packupvirg,"",0,false,false,"",' _virg = nearestObjects[getPos player,["ArrowDesk_L_F"],8] select 0; license_civ_rally && !isNil "_virg" && !isNil {(_virg getVariable "item")}']];
				// Prendre P D Rally
				life_actions = life_actions + [player addAction["Prendre P Droite",life_fnc_packupvird,"",0,false,false,"",' _vird = nearestObjects[getPos player,["ArrowDesk_R_F"],8] select 0; license_civ_rally && !isNil "_vird" && !isNil {(_vird getVariable "item")}']];
				// Suicide Bomb
				life_actions = life_actions + [player addAction["Activer la veste explosive",life_fnc_suicideBomb,"",0,false,false,"",
				'vest player == "V_HarnessOGL_gry" && alive player && playerSide == civilian && !life_istazed && !(player getVariable "restrained") && !(player getVariable "Escorting") && !(player getVariable "transporting")']];
				
				//Récolte ressources
		life_actions = life_actions + [player addAction["Récolter la cocaine",life_fnc_gatherAction,["cocaine_unprocessed",1],0,false,false,"",'
		!life_action_in_use && (player distance (getMarkerPos "cocaine_1") < 80) && (vehicle player == player) && (life_carryWeight + (["cocaine_unprocessed"] call life_fnc_itemWeight)) <= life_maxWeight ']];
		life_actions = life_actions + [player addAction["Récolter du Cannabis",life_fnc_gatherAction,["cannabis",1],0,false,false,"",'
		!life_action_in_use && (player distance (getMarkerPos "weed_1") < 80) && (vehicle player == player) && (life_carryWeight + (["cannabis"] call life_fnc_itemWeight)) <= life_maxWeight ']];
		life_actions = life_actions + [player addAction["Récolter Heroine",life_fnc_gatherAction,["heroin_unprocessed",1],0,false,false,"",'
		!life_action_in_use && (player distance (getMarkerPos "heroin_1") < 80) && (vehicle player == player) && (life_carryWeight + (["heroin_unprocessed"] call life_fnc_itemWeight)) <= life_maxWeight ']];
		life_actions = life_actions + [player addAction["Récolter Cuivre",life_fnc_gatherAction,["copper_unrefined",1],0,false,false,"",'
		!life_action_in_use && (player distance (getMarkerPos "lead_1") < 80) && (vehicle player == player) && (life_carryWeight + (["copper_unrefined"] call life_fnc_itemWeight)) <= life_maxWeight ']];
		life_actions = life_actions + [player addAction["Récolter Sel",life_fnc_gatherAction,["salt_unrefined",1],0,false,false,"",'
		!life_action_in_use && (player distance (getMarkerPos "salt_1") < 80) && (vehicle player == player) && (life_carryWeight + (["salt_unrefined"] call life_fnc_itemWeight)) <= life_maxWeight ']];
		life_actions = life_actions + [player addAction["Récolter Sable",life_fnc_gatherAction,["sand",1],0,false,false,"",'
		!life_action_in_use && (player distance (getMarkerPos "sand_1") < 80) && (vehicle player == player) && (life_carryWeight + (["sand"] call life_fnc_itemWeight)) <= life_maxWeight ']];
		life_actions = life_actions + [player addAction["Récolter Pétrole",life_fnc_gatherAction,["oil_unprocessed",1],0,false,false,"",'
		!life_action_in_use && (player distance (getMarkerPos "oil_1") < 80) OR (player distance (getMarkerPos "oil_2") < 80) && (vehicle player == player) && (life_carryWeight + (["oil_unprocessed"] call life_fnc_itemWeight)) <= life_maxWeight ']];
		life_actions = life_actions + [player addAction["Récolter Fer",life_fnc_gatherAction,["iron_unrefined",1],0,false,false,"",'
		!life_action_in_use && (player distance (getMarkerPos "iron_1") < 80) && (vehicle player == player) && (life_carryWeight + (["iron_unrefined"] call life_fnc_itemWeight)) <= life_maxWeight ']];
		life_actions = life_actions + [player addAction["Récolter Roche",life_fnc_gatherAction,["rock",1],0,false,false,"",'
		!life_action_in_use && (player distance (getMarkerPos "rock_1") < 80) && (vehicle player == player) && (life_carryWeight + (["rock"] call life_fnc_itemWeight)) <= life_maxWeight ']];
		life_actions = life_actions + [player addAction["Récolter Diamant",life_fnc_gatherAction,["diamond_uncut",1],0,false,false,"",'
		!life_action_in_use && (player distance (getMarkerPos "diamond_1") < 80) && (vehicle player == player) && (life_carryWeight + (["diamond_uncut"] call life_fnc_itemWeight)) <= life_maxWeight ']];
		life_actions = life_actions + [player addAction["Récolter du Bois",life_fnc_gatherAction,["bois",1],0,false,false,"",'
		!life_action_in_use && (player distance (getMarkerPos "bois_1") < 80) && (vehicle player == player) && (life_carryWeight + (["bois"] call life_fnc_itemWeight)) <= life_maxWeight ']];
		life_actions = life_actions + [player addAction["Récolter les Pommes",life_fnc_gatherAction,["apple",3],0,false,false,"",'
		!life_action_in_use && (player distance (getMarkerPos "apple_1") < 80) OR (player distance (getMarkerPos "apple_2") < 80) OR (player distance (getMarkerPos "apple_3") < 80) OR (player distance (getMarkerPos "apple_4") < 80)&& (vehicle player == player) && (life_carryWeight + (["apple"] call life_fnc_itemWeight)) <= life_maxWeight ']];
		life_actions = life_actions + [player addAction["Récolter les Pêches",life_fnc_gatherAction,["peach",3],0,false,false,"",'
		!life_action_in_use && (player distance (getMarkerPos "peaches_1") < 80) OR (player distance (getMarkerPos "peaches_2") < 80) OR (player distance (getMarkerPos "peaches_3") < 80) OR (player distance (getMarkerPos "peaches_4") < 80)&& (vehicle player == player) && (life_carryWeight + (["peach"] call life_fnc_itemWeight)) <= life_maxWeight ']];
		
		//alcool
		life_actions = life_actions + [player addAction["Récolter du Seigle",life_fnc_gatherAction,["rye",1],0,false,false,"",'
		!life_action_in_use && (player distance (getMarkerPos "rye_1") < 80) && (vehicle player == player) && (life_carryWeight + (["rye"] call life_fnc_itemWeight)) <= life_maxWeight ']];
		life_actions = life_actions + [player addAction["Récolter des Levures",life_fnc_gatherAction,["yeast",1],0,false,false,"",'
		!life_action_in_use && (player distance (getMarkerPos "hops_1") < 80) && (vehicle player == player) && (life_carryWeight + (["hops"] call life_fnc_itemWeight)) <= life_maxWeight ']];
		//champ by heimdall @Aurore
		life_actions = life_actions + [player addAction["Récolter des Champignons",life_fnc_gatherAction,["champ",1],0,false,false,"",'
		!life_action_in_use && (player distance (getMarkerPos "champ_1") < 80) && (vehicle player == player) && (life_carryWeight + (["champ"] call life_fnc_itemWeight)) <= life_maxWeight ']];
		//Poudre explosive by heimdall @Aurore
		life_actions = life_actions + [player addAction["Récolter de la poudre",life_fnc_gatherAction,["poudre",1],0,false,false,"",'
		!life_action_in_use && (player distance (getMarkerPos "explo_1") < 80) && (vehicle player == player) && (life_carryWeight + (["poudre"] call life_fnc_itemWeight)) <= life_maxWeight ']];
	};
	
	case independent:
	{
		// Fast travel
		life_actions = life_actions + [player addAction["<t color='#FFFF33'>Voyage rapide</t>",life_fnc_spawnMenu,"",151,false,false,"",' ((player distance (getMarkerPos "medic_spawn_1") < 30) OR  (player distance (getMarkerPos "medic_spawn_2") < 30) OR  (player distance (getMarkerPos "medic_spawn_3") < 30) OR  (player distance (getMarkerPos "medic_spawn_4") < 30)) ']];

		// Entrer dans un vehicule meme verouillé
		life_actions = life_actions + [player addAction["Monter en conducteur",life_fnc_copEnter,"driver",200,false,false,"",'!isNull cursorTarget && ((cursorTarget isKindOf "Car")||(cursorTarget isKindOf "Air")||(cursorTarget isKindOf "Ship")) && (locked cursorTarget) != 0 && cursorTarget distance player < 5']];
		life_actions = life_actions + [player addAction["Monter en passager",life_fnc_copEnter,"passenger",100,false,false,"",'!isNull cursorTarget && ((cursorTarget isKindOf "Car")||(cursorTarget isKindOf "Air")||(cursorTarget isKindOf "Ship")) && (locked cursorTarget) != 0 && cursorTarget distance player < 5']];
		life_actions = life_actions + [player addAction["Descendre",life_fnc_copEnter,"exit",100,false,false,"",'(vehicle player != player) && (locked(vehicle player)==2)']];
	};
};

//S'asseoir
life_actions = life_actions + [player addAction["<t color='#0099FF'>S'asseoir</t>",life_fnc_sitDown,"",10,false,false,"",' !isNull cursorTarget && player distance cursorTarget < 3.5 && (cursorTarget isKindOf "Land_CampingChair_V2_F" OR cursorTarget isKindOf "Land_ChairWood_F" OR cursorTarget isKindOf "Land_ChairPlastic_F")']];
//Se lever
life_actions = life_actions + [player addAction["<t color='#0099FF'>Se Lever</t>",life_fnc_sitDown,"",10,false,false,"",'life_sitting']];