#define VITEMMACRO(NAME,DISPLAYNAME,VARNAME,WEIGHT,BUYPRICE,SELLPRICE,ILLEGAL,EDIBLE,ICON) class NAME { \
		variable = VARNAME; \
		weight = WEIGHT; \
		displayName = DISPLAYNAME; \
		buyPrice = BUYPRICE; \
		sellPrice = SELLPRICE; \
		illegal = ILLEGAL; \
		edible = EDIBLE; \
		icon = ICON; \
	};
	
#define LICENSEMACRO(NAME,DISPLAYNAME,VARNAME,PRICE,ILLEGAL,SIDE) class NAME { \
		variable = VARNAME; \
		displayName = DISPLAYNAME; \
		price = PRICE; \
		illegal = ILLEGAL; \
		side = SIDE; \
	};

#define true 1
#define false 0
#include "Config_Clothing.hpp"
#include "Config_Shops.hpp"


/*
	Master settings for various features and functionality	
*/
class Life_Settings {
	/* Persistent Settings */
	save_civ_weapons = true; //Allow civilians to save weapons on them?
	save_virtualItems = true; //Save Virtual items (all sides)?

	/* Revive system settings */
	revive_cops = false; //true to enable cops the ability to revive everyone or false for only medics/ems.
	revive_fee = 450; //Revive fee that players have to pay and medics / EMS are rewarded
	
	/* House related settings */
	house_limit = 4; //Maximum amount of houses a player can own.

	/* Gang related settings */
	gang_price = 15000; //Price for creating a gang, remember they are persistent so keep it reasonable to avoid millions of gangs.
	gang_upgradeBase = 5000; //The base cost for upgrading slots in a gang
	gang_upgradeMultiplier = 2.5; //Not sure if in use?

	/* Player-related systems */
	enable_fatigue = true; //Set to false to disable the ARMA 3 false system.
	total_maxWeight = 14; //Identifies the max carrying weight (gets adjusted throughout game when wearing different types of clothing).
	total_maxWeightT = 14;  //Static variable for the maximum weight allowed without having a backpack
	paycheck_period = 5; //Scaled in minutes
	
	/* Impound Variables */
	impound_car = 350; //Price for impounding cars
	impound_boat = 250; //Price for impounding boats
	impound_air = 850; //Price for impounding helicopters / planes

	/* Car-shop Settings */
	vehicleShop_rentalOnly[] = { "B_MRAP_01_hmg_F", "B_G_Offroad_01_armed_F" };
	vehicle_noAssurance[] = { "B_G_Offroad_01_armed_F", "O_MRAP_02_F","I_MRAP_03_F","Aurore_escobar_ifrit"};

	/* Job-related stuff */
	delivery_points[] = { "dp_1", "dp_2", "dp_3", "dp_4", "dp_5", "dp_6", "dp_7", "dp_8", "dp_9", "dp_10", "dp_11", "dp_12", "dp_13", "dp_14", "dp_15", "dp_15", "dp_16", "dp_17", "dp_18", "dp_19", "dp_20", "dp_21", "dp_22", "dp_23", "dp_24", "dp_25" };

	crimes[] = { 
		{"STR_Crime_1","500","1"}, 
		{"STR_Crime_2","200","2"}, 
		{"STR_Crime_3","150","3"}, 
		{"STR_Crime_4","250","4"}, 
		{"STR_Crime_5","100","5"}, 
		{"STR_Crime_6","80","6"}, 
		{"STR_Crime_7","150","7"},
		{"STR_Crime_8","5000","8"},
		{"STR_Crime_9","5000","9"},
		{"STR_Crime_10","15000","10"},
		{"STR_Crime_11","10000","11"},
		{"STR_Crime_12","2500","12"},
		{"STR_Crime_13","1500","13"},
		{"STR_Crime_14","500","14"},
		{"STR_Crime_15","2500","15"},
		{"STR_Crime_16","1500","16"},
		{"STR_Crime_17","100","17"},
		{"STR_Crime_18","1500","18"},
		{"STR_Crime_19","2500","19"},
		{"STR_Crime_20","500","20"},
		{"STR_Crime_21","500","21"},
		{"STR_Crime_22","2000","22"},
		{"STR_Crime_23","5000","23"},
		{"STR_Crime_24","10000","24"},
		{"STR_Crime_25","20000","25"}
	};
	
	sellArray[] = {	};

	allowedSavedVirtualItems[] = { "double","mauer","virg","vird","cone","gpstracker","pan1","menotte","pickaxe", "fuelEmpty", "fuelFull", "spikeStrip", "lockpick", "defuseKit", "storageSmall", "storageBig", "redgull", "coffee", "waterBottle", "apple", "peach", "tbacon", "donut" };
};

//Virtual Items
class VirtualItems {
	//Misc
	VITEMMACRO(menotte, "STR_Item_Menotte", "menotte", 3, 26, 16, true, -1, "aurore_data2\icons\items\handcuffs.paa")
	VITEMMACRO(pickaxe, "STR_Item_Pickaxe", "pickaxe", 3, 15, -1, false, -1, "aurore_data2\icons\items\pickaxe.paa")
	VITEMMACRO(fuelEmpty, "STR_Item_FuelE", "fuelEmpty", 2, -1, -1, false, -1, "icons\ico_fuelempty.paa")
	VITEMMACRO(fuelFull, "STR_Item_FuelF", "fuelFull", 5, 60, -1, false, -1, "icons\ico_fuel.paa")
	VITEMMACRO(spikeStrip, "STR_Item_SpikeStrip", "spikeStrip", 4, 20, -1, false, -1, "aurore_data2\icons\items\spikestrip.paa")
	VITEMMACRO(lockpick, "STR_Item_Lockpick", "lockpick", 5, 15, -1, false, -1, "aurore_data2\icons\items\lockpick.paa")
	VITEMMACRO(goldbar, "STR_Item_GoldBar", "goldBar", 12, -1, 3500, false, -1, "aurore_data2\icons\items\goldbar.paa")
	VITEMMACRO(blastingcharge, "STR_Item_BCharge", "blastingCharge", 10, 9500, 5500, true, -1, "aurore_data2\icons\items\blastingcharge.paa")
	VITEMMACRO(boltcutter, "STR_Item_BCutter", "boltCutter", 5, 7000, 3500, true, -1, "aurore_data2\icons\items\boltcutter.paa")
	VITEMMACRO(defusekit, "STR_Item_DefuseKit", "defuseKit", 5, 1500, -1, false, -1, "aurore_data2\icons\items\defusekit.paa")
	VITEMMACRO(storagesmall, "STR_Item_StorageBS", "storageSmall", 5, 7500, -1, false, -1, "aurore_data2\icons\items\storagesmall.paa")
	VITEMMACRO(storagebig, "STR_Item_StorageBL", "storageBig", 10, 15000, -1, false, -1, "aurore_data2\icons\items\storagebig.paa")
	VITEMMACRO(pan1, "STR_Item_pan1", "pan1", 3, 29, -1, false, -1, "aurore_data2\icons\items\pan1.paa")
	VITEMMACRO(mauer, "STR_Item_mauer", "mauer", 3, 25, -1, false, -1, "aurore_data2\icons\items\mauer.paa")
	VITEMMACRO(double, "STR_Item_double", "double", 4, 30, -1, false, -1, "aurore_data2\icons\items\double.paa")
	VITEMMACRO(gpstracker, "STR_Item_gpstracker", "gpstracker", 2, 750, -1, false, -1, "aurore_data2\icons\items\gpstracker.paa")
	VITEMMACRO(cone, "STR_Item_cone", "cone", 3, 25, -1, false, -1, "aurore_data2\icons\items\cone.paa")
	VITEMMACRO(vird, "STR_Item_vird", "vird", 4, 25, -1, false, -1, "aurore_data2\icons\items\vird.paa")
	VITEMMACRO(virg, "STR_Item_virg", "virg", 4, 25, -1, false, -1, "aurore_data2\icons\items\virg.paa")
	VITEMMACRO(relique, "STR_Item_relique", "relique", 4, -1, 220, true, -1, "")
	VITEMMACRO(champ, "STR_Item_champ", "champ", 3, -1, 250, true, -1, "")
	VITEMMACRO(bottledbeer, "STR_Item_bottledbeer", "bottledbeer", 2, 520, 0, false, -1, "")
	VITEMMACRO(bottledwhiskey, "STR_Item_bottledwhiskey", "bottledwhiskey", 2, 620, 0, false, -1, "")
	VITEMMACRO(bottledshine, "STR_Item_bottledshine", "bottledshine", 2, 720, 0, false, -1, "")
	VITEMMACRO(beerp, "STR_Item_beerp", "beerp", 2, -1, 0, false, -1, "")
	VITEMMACRO(whiskey, "STR_Item_whiskey", "whiskey", 2, -1, 0, false, -1, "")

	//Mined Items
	VITEMMACRO(oil_unprocessed, "STR_Item_OilU", "oilUnprocessed", 7, -1, -1, false, -1, "icons\ico_oilu.paa")
	VITEMMACRO(oil_processed, "STR_Item_OilP", "oilProcessed", 6, -1, 0, false, -1, "icons\ico_oilp.paa")
	VITEMMACRO(copper_unrefined, "STR_Item_CopperOre", "copperUnrefined", 4, -1, -1, false, -1, "aurore_data2\icons\items\copper_ore.paa")
	VITEMMACRO(copper_refined, "STR_Item_CopperIngot", "copperRefined", 3, -1, 0, false, -1, "aurore_data2\icons\items\copper.paa")
	VITEMMACRO(iron_unrefined, "STR_Item_IronOre", "ironUnrefined", 5, -1, -1, false, -1, "aurore_data2\icons\items\iron_ore.paa")
	VITEMMACRO(iron_refined, "STR_Item_IronIngot", "ironRefined", 3, -1, 0, false, -1, "aurore_data2\icons\items\iron.paa")
	VITEMMACRO(salt_unrefined, "STR_Item_Salt", "saltUnrefined", 3, -1, -1, false, -1, "aurore_data2\icons\items\salt_unprocessed.paa")
	VITEMMACRO(salt_refined, "STR_Item_SaltR", "saltRefined", 2, -1, 0, false, -1, "aurore_data2\icons\items\salt.paa")
	VITEMMACRO(sand, "STR_Item_Sand", "sand", 3, -1, -1, false, -1, "aurore_data2\icons\items\sand.paa")
	VITEMMACRO(glass, "STR_Item_Glass", "glass", 2, -1, 0, false, -1, "aurore_data2\icons\items\glass.paa")
	VITEMMACRO(diamond_uncut, "STR_Item_DiamondU", "diamondUncut", 4, -1, 0, false, -1, "aurore_data2\icons\items\diamond_unprocessed.paa")
	VITEMMACRO(diamond_cut, "STR_Item_DiamondC", "diamondCut", 2, -1, 0, false, -1, "aurore_data2\icons\items\diamond.paa")
	VITEMMACRO(rock, "STR_Item_Rock", "rock", 6, -1, -1, false, -1, "aurore_data2\icons\items\rock.paa")
	VITEMMACRO(cement, "STR_Item_CementBag", "cement", 5, -1, 0, false, -1, "aurore_data2\icons\items\cement.paa")
	VITEMMACRO(poudre, "STR_Item_poudre", "poudre", 5, -1, -1, false, -1, "")
	VITEMMACRO(explo, "STR_Item_explo", "explo", 3, -1, 150, true, -1, "")
	VITEMMACRO(bois, "STR_Item_bois", "bois", 4, -1, 0, false, -1, "")
	VITEMMACRO(papier, "STR_Item_papier", "papier", 2, -1, 0, false, -1, "")
	VITEMMACRO(billet, "STR_Item_billet", "billet", 2, -1, 268, true, -1, "icons\ico_fbillet.paa")
	VITEMMACRO(rye, "STR_Item_rye", "rye", 3, -1, 0, false, -1, "")
	VITEMMACRO(hops, "STR_Item_hops", "hops", 3, -1, 0, false, -1, "")

	//Drugs
	VITEMMACRO(heroin_unprocessed, "STR_Item_HeroinU", "heroinUnprocessed", 6, -1, 149, true, -1, "")
	VITEMMACRO(heroin_processed, "STR_Item_HeroinP", "heroinProcessed", 4, -1, 249, true, -1, "icons\ico_herop.paa")
	VITEMMACRO(cannabis, "STR_Item_Cannabis", "cannabis", 4, -1, 115, true, -1, "aurore_data2\icons\items\cannabis.paa")
	VITEMMACRO(marijuana, "STR_Item_Marijuana", "marijuana", 2, -1, 215, true, -1, "icons\ico_marijuana.paa")
	VITEMMACRO(resine, "STR_Item_resine", "resine", 2, -1, 293, true, -1, "aurore_data2\icons\items\ico_resine.paa")
	VITEMMACRO(cocaine_unprocessed, "STR_Item_CocaineU", "cocaineUnprocessed", 6, -1, 130, true, -1, "aurore_data2\icons\items\cocain_unprocessed.paa")
	VITEMMACRO(cocaine_processed, "STR_Item_CocaineP", "cocaineProcessed", 4, -1, 340, true, -1, "icons\ico_cocainep.paa")

	//Drink
	VITEMMACRO(redgull, "STR_Item_RedGull", "redgull", 3, 32, -1, false, 100, "aurore_data2\icons\items\redgull.paa")
	VITEMMACRO(coffee, "STR_Item_Coffee", "coffee", 2, 10, -1, false, 100, "aurore_data2\icons\items\coffee.paa")
	VITEMMACRO(waterBottle, "STR_Item_WaterBottle", "waterBottle", 1, 10, -1, false, 100, "aurore_data2\icons\items\water.paa")

	//Food
	VITEMMACRO(apple, "STR_Item_Apple", "apple", 2, 6, 0, false, 15, "aurore_data2\icons\items\apple.paa")
	VITEMMACRO(peach, "STR_Item_Peach", "peach", 2, 7, 0, false, 20, "aurore_data2\icons\items\peach.paa")
	VITEMMACRO(tbacon, "STR_Item_TBacon", "tbacon", 2, 8, -1, false, 40, "icons\ico_tbacon.paa")
	VITEMMACRO(kebab, "STR_Item_kebab", "kebab", 2, 8, -1, false, 40, "")
	VITEMMACRO(donut, "STR_Item_Donuts", "donut", 2, 10, -1, false, 30, "aurore_data2\icons\items\donuts.paa")
	VITEMMACRO(rabbit_raw, "STR_Item_Rabbit", "rabbitRaw", 5, -1, -1, false, -1, "icons\food.paa")
	VITEMMACRO(rabbit_grilled, "STR_Item_RabbitGrilled", "rabbitGrilled", 4, -1, 0, false, 20, "icons\ico_cookedMeat.paa")
	VITEMMACRO(salema_raw, "STR_Item_Salema", "salemaRaw", 3, -1, -1, false, -1, "aurore_data2\icons\items\fish.paa")
	VITEMMACRO(salema_grilled, "STR_Item_SalemaGrilled", "salemaGrilled", 2, 6, 0, false, 30, "icons\ico_cookedMeat.paa")
	VITEMMACRO(ornate_raw, "STR_Item_OrnateMeat", "ornateRaw", 3, -1, -1, false, -1, "aurore_data2\icons\items\fish.paa")
	VITEMMACRO(ornate_grilled, "STR_Item_OrnateGrilled", "ornateGrilled", 2, 6, 0, false, 25, "icons\ico_cookedMeat.paa")
	VITEMMACRO(mackerel_raw, "STR_Item_MackerelMeat", "mackerelRaw", 4, -1, -1, false, -1, "aurore_data2\icons\items\fish.paa")
	VITEMMACRO(mackerel_grilled, "STR_Item_MackerelGrilled", "mackerelGrilled", 2, 20, 0, false, 30, "icons\ico_cookedMeat.paa")
	VITEMMACRO(tuna_raw, "STR_Item_TunaMeat", "tunaRaw", 6, -1, -1, false, -1, "aurore_data2\icons\items\fish.paa")
	VITEMMACRO(tuna_grilled, "STR_Item_TunaGrilled", "tunaGrilled", 3, 150, 0, false, 100, "icons\ico_cookedMeat.paa")
	VITEMMACRO(mullet_raw, "STR_Item_MulletMeat", "mulletRaw", 4, -1, -1, false, -1, "icons\food.paa")
	VITEMMACRO(mullet_fried, "STR_Item_MulletFried", "mulletFried", 2, 60, 0, false, 80, "icons\ico_cookedMeat.paa")
	VITEMMACRO(catshark_raw, "STR_Item_CatSharkMeat", "catsharkRaw", 6, -1, -1, false, -1, "icons\ico_catshark.paa")
	VITEMMACRO(catshark_fried, "STR_Item_CatSharkFried", "catsharkFried", 3, 75, 50, false, 100, "icons\ico_cookedMeat.paa")
	VITEMMACRO(turtle_raw, "STR_Item_TurtleMeat", "turtleRaw", 6, -1, 1500, true, -1, "aurore_data2\icons\items\turtle.paa")
	VITEMMACRO(turtle_soup, "STR_Item_TurtleSoup", "turtleSoup", 2, -1, -1, false, 100, "aurore_data2\icons\items\turtle_soup.paa")

	VITEMMACRO(sheep_raw, "STR_Item_SheepRaw", "sheepRaw", 4, -1, 0, false, -1, "icons\ico_sheepRaw.paa")
	VITEMMACRO(sheep_peau, "STR_Item_SheepPeau", "sheepPeau", 3, -1, 500, true, -1, "icons\ico_sheepPeau.paa")
	VITEMMACRO(goat_raw, "STR_Item_GoatRaw", "goatRaw", 4, -1, 0, false, -1, "icons\ico_goatRaw.paa")
	VITEMMACRO(goat_peau, "STR_Item_GoatPeau", "goatPeau", 3, -1, 500, true, -1, "icons\ico_goatPeau.paa")
	
	VITEMMACRO(cacahuete, "STR_Item_cacahuete", "cacahuete", 2, 35, -1, false, 10, "icons\ico_ccht.paa")
	VITEMMACRO(burger, "STR_Item_burger", "burger", 2, 75, -1, false, 40, "icons\ico_burger.paa")
	VITEMMACRO(blanquette, "STR_Item_blanquette", "blanquette", 2, 75, 0, false, 50, "")
	VITEMMACRO(redwine, "STR_Item_redwine", "redwine", 2, 75, -1, false, 30, "")
	VITEMMACRO(frite, "STR_Item_frite", "frite", 2, 75, -1, false, 40, "icons\ico_frite.paa")
	VITEMMACRO(coca, "STR_Item_coca", "coca", 2, 75, -1, false, 50, "icons\ico_coca.paa")
	VITEMMACRO(pizza, "STR_Item_pizza", "pizza", 2, 75, -1, false, 50, "icons\ico_pizza.paa")
};


/*
	Licenses
	
	Params:
	CLASS ENTRY,DisplayName,VariableName,price,illegal,side indicator
*/
class Licenses {

	//Default
	LICENSEMACRO(copdonator,"STR_License_CopDonator","copdonator",10000,false,"cop")
	LICENSEMACRO(civdonator,"STR_License_CivDonator","civdonator",10000,false,"civ")
	LICENSEMACRO(driver,"STR_License_Driver","driver",150,false,"civ")
	LICENSEMACRO(boat,"STR_License_Boat","boat",300,false,"civ")
	LICENSEMACRO(pilot,"STR_License_Pilot","pilot",6500,false,"civ")
	LICENSEMACRO(dive,"STR_License_Diving","dive",350,false,"civ")
	LICENSEMACRO(gun,"STR_License_Firearm","gun",4000,false,"civ")
	LICENSEMACRO(coastguard,"STR_License_CG","cg",800,false,"cop")
	LICENSEMACRO(cAir,"STR_License_Pilot","cAir",1500,false,"cop")
	LICENSEMACRO(rebel,"STR_License_Rebel","rebel",750000,true,"civ")
	LICENSEMACRO(bandit,"STR_License_Bandit","bandit",100000,true,"civ")
	LICENSEMACRO(trucking,"STR_License_Truck","trucking",2000,false,"civ")
	LICENSEMACRO(mAir,"STR_License_Pilot","mAir",1500,false,"med")
	LICENSEMACRO(home,"STR_License_Home","home",7500,false,"civ")
	LICENSEMACRO(moto,"STR_License_Moto","moto",425,false,"civ")
	
	//Items
	LICENSEMACRO(bombe,"STR_License_bombe","bombe",5600,false,"civ")
	LICENSEMACRO(papier,"STR_License_papier","papier",600,false,"civ")
	LICENSEMACRO(explo,"STR_License_explo","explo",7500,false,"civ")
	LICENSEMACRO(diamond,"STR_License_Diamond","diamond",3500,false,"civ")
	LICENSEMACRO(salt,"STR_License_Salt","salt",1200,false,"civ")
	LICENSEMACRO(cocaine,"STR_License_Cocaine","cocaine",10500,false,"civ")
	LICENSEMACRO(sand,"STR_License_Sand","sand",1450,false,"civ")
	LICENSEMACRO(iron,"STR_License_Iron","iron",950,false,"civ")
	LICENSEMACRO(copper,"STR_License_Copper","copper",800,false,"civ")
	LICENSEMACRO(cement,"STR_License_Cement","cement",650,false,"civ")
	LICENSEMACRO(heroin,"STR_License_Heroin","heroin",7500,true,"civ")
	LICENSEMACRO(marijuana,"STR_License_Marijuana","marijuana",5550,true,"civ")
	LICENSEMACRO(medmarijuana,"STR_License_Medmarijuana","medmarijuana",3500,false,"civ")
	LICENSEMACRO(oil,"STR_License_Oil","oil",1000,false,"civ")
	
	//Entreprises
	LICENSEMACRO(dep,"STR_License_Dep","dep",2500,false,"civ")
	LICENSEMACRO(taxi,"STR_License_Taxi","taxi",2500,false,"civ")
	LICENSEMACRO(chasse,"STR_License_Chasse","chasse",15000,false,"civ")
	LICENSEMACRO(restaurant,"STR_License_restaurant","restaurant",750,false,"civ")
	LICENSEMACRO(macumba,"STR_License_macumba","macumba",750,false,"civ")
	LICENSEMACRO(papy,"STR_License_papy","papy",750,false,"civ")
	LICENSEMACRO(vente,"STR_License_vente","vente",750,false,"civ")
	
	//Familles
	LICENSEMACRO(esco,"STR_License_esco","esco",750,false,"civ")
	LICENSEMACRO(anisimov,"STR_License_anisimov","anisimov",750,false,"civ")
	LICENSEMACRO(parrain,"STR_License_parrain","parrain",750,false,"civ")
	LICENSEMACRO(fal,"STR_License_fal","fal",750,false,"civ")
	LICENSEMACRO(hool,"STR_License_hool","hool",750,false,"civ")
	LICENSEMACRO(tchong,"STR_License_tchong","tchong",750,false,"civ")
	LICENSEMACRO(nostra,"STR_License_nostra","nostra",750,false,"civ")
	LICENSEMACRO(scarface,"STR_License_scarface","scarface",750,false,"civ")
	LICENSEMACRO(gambino,"STR_License_gambino","gambino",750,false,"civ")
	LICENSEMACRO(zagaria,"STR_License_zagaria","zagaria",750,false,"civ")
	
};

class VirtualShops {
	class market {
		name = "STR_Shops_Market";
		items[] = { "waterBottle", "rabbit_grilled", "apple", "redgull", "tbacon", "lockpick", "pickaxe", "fuelFull", "peach", "boltcutter", "storagesmall", "storagebig", "kebab" };
	};

	class rebmarket {
		name = "STR_Shops_Rebel";
		items[] = { "menotte","waterBottle", "rabbit_grilled", "apple", "redgull", "tbacon", "lockpick", "pickaxe", "fuelFull", "peach", "boltcutter", "kebab" };
	};
	
	class escomarket {
		name = "STR_Shops_Rebel";
		items[] = { "menotte","waterBottle", "rabbit_grilled", "apple", "redgull", "tbacon", "lockpick", "pickaxe", "fuelFull", "peach", "boltcutter", "kebab" };
	};

	class gang {
		name = "STR_Shops_Gang";
		items[] = { "waterBottle", "rabbit_grilled", "apple", "redgull", "tbacon", "lockpick", "pickaxe", "fuelFull", "peach", "boltcutter", "kebab" };
	};
	
	class resine {
		name = "STR_Shops_resine";
		items[] = { "resine" };
	};

	class explo {
		name = "STR_Shops_explo";
		items[] = { "explo" };
	};
	
	class wongs {
		name = "STR_Shops_Wongs";
		items[] = { "turtle_soup", "turtle_raw" };
	};

	class esco {
		name = "STR_Shops_esco";
		items[] = { "resine" };
	};
	
	class barman {
		name = "STR_Shops_barman";
		items[] = { "bottledbeer", "bottledwhiskey", "bottledshine" };
	};
	
	class barlegal {
		name = "STR_Shops_barlegal";
		items[] = { "bottledbeer", "bottledwhiskey" };
	};
	
	class papier {
		name = "STR_Shops_papier";
		items[] = { "papier" };
	};
	
	class billet {
		name = "STR_Shops_billet";
		items[] = { "billet" };
	};
	
	class coffee {
		name = "STR_Shops_Coffee";
		items[] = { "coffee", "donut" };
	};
	
	class drugdealer {
		name = "STR_Shops_DrugDealer";
		items[] = { "cocaine_processed", "heroin_processed", "marijuana" };
	};

	class restau {
		name = "STR_Shops_restau";
		items[] = { "waterBottle", "cacahuete", "redgull", "tbacon", "burger", "blanquette", "redwine", "frite", "coca", "pizza", "kebab" };
	};
	
	class oil {
		name = "STR_Shops_Oil";
		items[] = { "oil_processed", "pickaxe", "fuelFull" };
	};
	
	class relique {
		name = "STR_Shops_relique";
		items[] = { "relique" };
	};
	
	class champ {
		name = "STR_Shops_champ";
		items[] = { "champ" };
	};

	class fishmarket {
		name = "STR_Shops_FishMarket";
		items[] = { "salema_raw", "salema_grilled", "ornate_raw", "ornate_grilled", "mackerel_raw", "mackerel_grilled", "tuna_raw", "tuna_grilled", "mullet_raw", "mullet_fried", "catshark_raw", "catshark_fried" };
	};

	class glass {
		name = "STR_Shops_Glass";
		items[] = { "glass" };
	};

	class iron  {
		name = "STR_Shops_Minerals";
		items[] = { "iron_refined", "copper_refined" };
	};

	class diamond {
		name = "STR_Shops_Diamond";
		items[] = { "diamond_cut" };
	};

	class salt {
		name = "STR_Shops_Salt";
		items[] = { "salt_refined" };
	};

	class cop {
		name = "STR_Shops_Cop";
		items[] = { "pan1","double","mauer","gpstracker","donut", "coffee", "spikeStrip", "waterBottle", "apple", "redgull", "fuelFull", "defusekit" };
	};

	class cement {
		name = "STR_Shops_Cement";
		items[] = { "cement" };
	};

	class gold {
		name = "STR_Shops_Gold";
		items[] = { "goldbar" };
	};
	
	class chasse {
		name = "STR_Shops_Chasse";
		items[] = { "sheep_raw","goat_raw","sheep_peau","goat_peau" };
	};
};

#include "Config_Vehicles.hpp"
#include "Config_Houses.hpp"
