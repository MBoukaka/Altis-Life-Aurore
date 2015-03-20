/*
	ARRAY FORMAT:
		0: STRING (Classname)
		1: STRING (Display Name, leave as "" for default)
		2: SCALAR (Price)
		4: ARRAY (This is for limiting items to certain things)
			0: Variable to read from
			1: Variable Value Type
			2: What to compare to
*/
class Clothing {
	class bruce {
		title = "STR_Shops_C_Bruce";
		license = "";
		side = "civ";

		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "U_C_Poloshirt_blue", "Poloshirt Blue", 165, { "", "", -1 } },
			{ "U_C_Poloshirt_burgundy", "Poloshirt Burgundy", 165, { "", "", -1 } },
			{ "U_C_Poloshirt_redwhite", "Poloshirt Red/White", 165, { "", "", -1 } },
			{ "U_C_Poloshirt_salmon", "Poloshirt Salmon", 165, { "", "", -1 } },
			{ "U_C_Poloshirt_stripped", "Poloshirt stripped", 165, { "", "", -1 } },
			{ "U_C_Poloshirt_tricolour", "Poloshirt Tricolor", 165, { "", "", -1 } },
			{ "U_C_Poor_2", "Rag tagged clothes", 165, { "", "", -1 } },
			{ "U_IG_Guerilla2_2", "Green stripped shirt & Pants", 165, { "", "", -1 } },
			{ "U_IG_Guerilla3_1", "Brown Jacket & Pants", 165, { "", "", -1 } },
			{ "U_IG_Guerilla2_3", "The Outback Rangler", 165, { "", "", -1 } },
			{ "U_C_HunterBody_grn", "The Hunters Look", 165, { "", "", -1 } },
			{ "U_C_WorkerCoveralls", "Mechanic Coveralls", 165, { "", "", -1 } },
			{ "U_OrestesBody", "Surfing On Land", 250, { "", "", -1 } },
			{ "cl3_c_poloshirt_funk_co_uniform", "Tenue Funk", 165, { "", "", -1 } },
			{ "cl3_c_poloshirt_gravity_co_uniform", "Tenue Gravity", 165, { "", "", -1 } },
			{ "cl3_citizen2_1_uniform", "Jean Chemise Verte", 165, { "", "", -1 } },
			{ "cl3_citizen2_2_uniform", "Jean Chemise Grise", 165, { "", "", -1 } },
			{ "cl3_citizen2_3_uniform", "Jean Chemise Rose", 165, { "", "", -1 } },
			{ "cl3_citizen2_4_uniform", "Jean Chemise Orange", 165, { "", "", -1 } },
			{ "cl3_citizen2_5_uniform", "Jean Chemise Bleue", 165, { "", "", -1 } },
			{ "cl3_citizen2_6_uniform", "Camo et Chemise Verte", 165, { "", "", -1 } },
			{ "cl3_citizen2_7_uniform", "Camo et Chemise Grise", 165, { "", "", -1 } },
			{ "cl3_citizen2_8_uniform", "Camo et Chemise Rose", 165, { "", "", -1 } },
			{ "cl3_citizen2_9_uniform", "Camo et Chemise Orange", 165, { "", "", -1 } },
			{ "cl3_citizen2_10_uniform", "Camo et Chemise Bleue", 165, { "", "", -1 } },
			{ "cl3_citizen2_11_uniform", "Jean Vert et Chemise Verte", 165, { "", "", -1 } },
			{ "cl3_citizen2_12_uniform", "Jean Vert et Chemise Grise", 165, { "", "", -1 } },
			{ "cl3_citizen2_13_uniform", "Jean Vert et Chemise Rose", 165, { "", "", -1 } },
			{ "cl3_citizen2_14_uniform", "Jean Vert et Chemise Orange", 165, { "", "", -1 } },
			{ "cl3_citizen2_15_uniform", "Jean Vert et Chemise Bleue", 165, { "", "", -1 } },
			{ "cl3_citizen2_16_uniform", "Jean Rouge et Chemise Verte", 165, { "", "", -1 } },
			{ "cl3_citizen2_17_uniform", "Jean Rouge et Chemise Grise", 165, { "", "", -1 } },
			{ "cl3_citizen2_18_uniform", "Jean Rouge et Chemise Rose", 165, { "", "", -1 } },
			{ "cl3_citizen2_19_uniform", "Jean Rouge et Chemise Orange", 165, { "", "", -1 } },
			{ "cl3_citizen2_20_uniform", "Jean Rouge et Chemise Bleue", 165, { "", "", -1 } },
			{ "cl3_citizen2_21_uniform", "Jean Rose et Chemise Verte", 165, { "", "", -1 } },
			{ "cl3_citizen2_22_uniform", "Jean Rose et Chemise Grise", 165, { "", "", -1 } },
			{ "cl3_citizen2_23_uniform", "Jean Rose et Chemise Rose", 165, { "", "", -1 } },
			{ "cl3_citizen2_24_uniform", "Jean Rose et Chemise Orange", 165, { "", "", -1 } },
			{ "cl3_citizen2_25_uniform", "Jean Rose et Chemise Bleue", 165, { "", "", -1 } },
			{ "cl3_citizen3_1_uniform", "Tenue Forêt", 165, { "", "", -1 } },
			{ "cl3_citizen3_2_uniform", "Tenue Sable Bleue", 165, { "", "", -1 } },
			{ "cl3_citizen3_3_uniform", "Tenue Disco", 165, { "", "", -1 } },
			{ "cl3_citizen3_4_uniform", "Tenue de Laurent", 165, { "", "", -1 } },
			{ "cl3_citizen3_5_uniform", "Le Lorenzo", 165, { "", "", -1 } },
			{ "cl3_citizen3_6_uniform", "Le Tams", 165, { "", "", -1 } },
			{ "cl3_citizen3_7_uniform", "Le Dragueur 1", 165, { "", "", -1 } },
			{ "cl3_citizen3_8_uniform", "Le Dragueur 2", 165, { "", "", -1 } },
			{ "cl3_citizen3_9_uniform", "Le Dragueur 3", 165, { "", "", -1 } },
			{ "cl3_citizen3_10_uniform", "Le Dragueur 4", 165, { "", "", -1 } },
			{ "cl3_citizen3_11_uniform", "Le Dragueur 5", 165, { "", "", -1 } },
			{ "cl3_citizen3_12_uniform", "Le Dragueur 6", 165, { "", "", -1 } },
			{ "cl3_citizen3_13_uniform", "Le Dragueur 7", 165, { "", "", -1 } },
			{ "cl3_citizen3_14_uniform", "Le Dragueur 8", 165, { "", "", -1 } },
			{ "cl3_citizen3_15_uniform", "Le Dragueur 9", 165, { "", "", -1 } },
			{ "cl3_citizen3_16_uniform", "Le Dragueur 10", 165, { "", "", -1 } },
			{ "cl3_citizen3_17_uniform", "Le Dragueur 11", 165, { "", "", -1 } },
			{ "cl3_citizen3_18_uniform", "Le Dragueur 12", 165, { "", "", -1 } },
			{ "cl3_citizen3_19_uniform", "Le Dragueur 13", 165, { "", "", -1 } },
			{ "cl3_citizen3_20_uniform", "Le Dragueur 14", 165, { "", "", -1 } },
			{ "cl3_citizen3_21_uniform", "Le Dragueur 15", 165, { "", "", -1 } },
			{ "cl3_citizen3_22_uniform", "Le Dragueur 16", 165, { "", "", -1 } },
			{ "cl3_citizen3_23_uniform", "Le Dragueur 17", 165, { "", "", -1 } },
			{ "cl3_citizen3_24_uniform", "Le Dragueur 18", 165, { "", "", -1 } },
			{ "cl3_citizen3_25_uniform", "Le Dragueur 19", 165, { "", "", -1 } },
			{ "cl3_citizen4_1_uniform", "Mec Branché 1", 165, { "", "", -1 } },
			{ "cl3_citizen4_2_uniform", "Mec Branché 2", 165, { "", "", -1 } },
			{ "cl3_citizen4_3_uniform", "Mec Branché 3", 165, { "", "", -1 } },
			{ "cl3_citizen4_4_uniform", "Mec Branché 4", 165, { "", "", -1 } },
			{ "cl3_citizen4_5_uniform", "Mec Branché 5", 165, { "", "", -1 } },
			{ "cl3_citizen4_6_uniform", "Mec Branché 6", 165, { "", "", -1 } },
			{ "cl3_citizen4_7_uniform", "Mec Branché 7", 165, { "", "", -1 } },
			{ "cl3_citizen4_8_uniform", "Mec Branché 8", 165, { "", "", -1 } },
			{ "cl3_citizen4_9_uniform", "Mec Branché 9", 165, { "", "", -1 } },
			{ "cl3_citizen4_10_uniform", "Mec Branché 10", 165, { "", "", -1 } },
			{ "cl3_citizen4_11_uniform", "Mec Branché 11", 165, { "", "", -1 } },
			{ "cl3_citizen4_12_uniform", "Mec Branché 12", 165, { "", "", -1 } },
			{ "cl3_citizen4_13_uniform", "Mec Branché 13", 165, { "", "", -1 } },
			{ "cl3_citizen4_14_uniform", "Mec Branché 14", 165, { "", "", -1 } },
			{ "cl3_citizen4_15_uniform", "Mec Branché 15", 165, { "", "", -1 } },
			{ "cl3_citizen4_16_uniform", "Mec Branché 16", 165, { "", "", -1 } },
			{ "cl3_citizen4_17_uniform", "Mec Branché 17", 165, { "", "", -1 } },
			{ "cl3_citizen4_18_uniform", "Mec Branché 18", 165, { "", "", -1 } },
			{ "cl3_citizen4_19_uniform", "Mec Branché 19", 165, { "", "", -1 } },
			{ "cl3_citizen4_20_uniform", "Mec Branché 20", 165, { "", "", -1 } },
			{ "cl3_citizen4_21_uniform", "Le Lorenzo", 165, {"", "", -1 } },
			{ "cl3_citizen4_22_uniform", "Le Tams", 165, { "", "", -1 } },
			{ "cl3_citizen4_23_uniform", "Mec Branché 21", 165, { "", "", -1 } },
			{ "cl3_citizen4_24_uniform", "Mec Branché 22", 165, { "", "", -1 } },
			{ "cl3_citizen4_25_uniform", "Mec Branché 23", 165, { "", "", -1 } },
			{ "cl3_hunter_bushman_hunter1_uniform", "Tenue de Chasse", 165, { "", "", -1 } },
			{ "cl3_hunter_bushman_hunter2_uniform", "Tenue de Chasse 2", 165, { "", "", -1 } },
			{ "cl3_hunter_bushman_hunter3_uniform", "Tenue de Chasse Gay", 165, { "", "", -1 } },
			{ "cl3_hunter_bushman_hunter4_uniform", "Tenue de Chasse 3", 165, { "", "", -1 } },
			{ "cl3_c_poloshirt_1_uniform", "Tenue de Sport", 165, { "", "", -1 } },
			{ "cl3_c_poloshirt_2_uniform", "Adigrass", 165, { "", "", -1 } },
			{ "cl3_c_poloshirt_3_uniform", "Brony", 165, { "", "", -1 } },
			{ "cl3_c_poloshirt_4_uniform", "Brony 2", 165, { "", "", -1 } },
			{ "cl3_c_poloshirt_5_uniform", "Sport Rouge", 165, { "", "", -1 } },
			{ "cl3_c_poloshirt_6_uniform", "Sport Violet", 165, { "", "", -1 } },
			{ "cl3_c_poloshirt_7_uniform", "Sport Vert", 165, { "", "", -1 } },
			{ "cl3_c_poloshirt_8_uniform", "Sport Bleu", 165, { "", "", -1 } },
			{ "cl3_c_poloshirt_9_uniform", "Clo News", 165, { "", "", -1 } },
			{ "cl3_c_poloshirt_10_uniform", "Coca", 165, { "", "", -1 } },
			{ "cl3_c_poloshirt_11_uniform", "Cool Story Bro", 165, { "", "", -1 } },
			{ "cl3_c_poloshirt_12_uniform", "Boule", 165, { "", "", -1 } },
			{ "cl3_c_poloshirt_13_uniform", "Minette", 165, { "", "", -1 } },
			{ "cl3_c_poloshirt_14_uniform", "Gyms", 165, { "", "", -1 } },
			{ "cl3_c_poloshirt_15_uniform", "Ibea", 165, { "", "", -1 } },
			{ "cl3_c_poloshirt_16_uniform", "Mint", 165, { "", "", -1 } },
			{ "cl3_c_poloshirt_17_uniform", "Diable Blanc", 165, { "", "", -1 } },
			{ "cl3_c_poloshirt_18_uniform", "Diable Rouge", 165, { "", "", -1 } },
			{ "cl3_c_poloshirt_19_uniform", "Diable Bleu", 165, { "", "", -1 } },
			{ "cl3_c_poloshirt_20_uniform", "Say Bye Money", 165, { "", "", -1 } },
			{ "cl3_c_poloshirt_21_uniform", "Shyte", 165, { "", "", -1 } },
			{ "cl3_c_poloshirt_22_uniform", "Tennis", 165, { "", "", -1 } },
			{ "cl3_c_poloshirt_23_uniform", "Tennis Vert", 165, { "", "", -1 } },
			{ "cl3_c_poloshirtpants_1_uniform", "Jean Polo Blanc", 165, { "", "", -1 } },
			{ "cl3_c_poloshirtpants_2_uniform", "Jean Cerf Blanc", 165, { "", "", -1 } },
			{ "cl3_c_poloshirtpants_3_uniform", "Jean Cerf Jaune", 165, { "", "", -1 } },
			{ "cl3_c_poloshirtpants_4_uniform", "Jean Cerf Bleu", 165, { "", "", -1 } },
			{ "cl3_c_poloshirtpants_5_uniform", "Jean Cerf Vert", 165, { "", "", -1 } },
			{ "cl3_c_poloshirtpants_6_uniform", "Jean Cerf Rouge", 165, { "", "", -1 } },
			{ "cl3_c_poloshirtpants_7_uniform", "CL Only Blanc", 165, { "", "", -1 } },
			{ "cl3_c_poloshirtpants_8_uniform", "CL Only Noir", 165, { "", "", -1 } },
			{ "cl3_c_poloshirtpants_9_uniform", "City Life Rose", 165, { "", "", -1 } },
			{ "cl3_c_poloshirtpants_10_uniform", "Dildo", 165, { "", "", -1 } },
			{ "cl3_c_poloshirtpants_11_uniform", "Guns Kill", 165, { "", "", -1 } },
			{ "cl3_c_poloshirtpants_12_uniform", "Le Ringard", 165, { "", "", -1 } },
			{ "cl3_c_poloshirtpants_13_uniform", "Le Ringard 2", 165, { "", "", -1 } },
			{ "cl3_c_poloshirtpants_14_uniform", "Livreur de Pizza", 165, { "", "", -1 } },
			{ "cl3_c_poloshirtpants_14_uniform", "Pumba", 165, { "", "", -1} },
			{ "cl3_c_poloshirtpants_19_uniform", "Smurnoff", 165, { "", "", -1 } },
			{ "cl3_c_poloshirtpants_20_uniform", "Tino 1", 165, { "", "", -1 } },
			{ "cl3_c_poloshirtpants_21_uniform", "Tino 2", 165, { "", "", -1 } },
			{ "cl3_c_poloshirtpants_22_uniform", "Tino 3", 165, { "", "", -1 } },
			{ "cl3_c_poloshirtpants_23_uniform", "Tino 4", 165, { "", "", -1 } },
			{ "cl3_c_poloshirtpants_24_uniform", "Absolut Vomit", 165, { "", "", -1 } },
			{ "cl3_c_poloshirtpants_25_uniform", "Ayc", 165, { "", "", -1 } },
			{ "cl3_c_poloshirtpants_26_uniform", "Yolo", 165, { "", "", -1 } },
			{ "cl3_c_poloshirtpants_bus_uniform", "Bus conducteur", 165, { "", "", -1 } },
			{ "cl3_c_poloshirtpants_1_uniform", "Bus conducteur 2", 165, { "", "", -1 } }
		};

		headgear[] = {
			{ "NONE", "Remove Hat", 0, { "", "", -1 } },
			{ "H_Bandanna_camo", "Camo Bandanna", 120, { "", "", -1 } },
			{ "H_Bandanna_surfer", "Surfer Bandanna", 130, { "", "", -1 } },
			{ "H_Bandanna_gry", "Grey Bandanna", 150, { "", "", -1 } },
			{ "H_Bandanna_cbr", "", 165, { "", "", -1 } },
			{ "H_Bandanna_surfer", "", 135, { "", "", -1 } },
			{ "H_Bandanna_khk", "Khaki Bandanna", 145, { "", "", -1 } },
			{ "H_Bandanna_sgg", "Sage Bandanna", 160, { "", "", -1 } },
			{ "H_StrawHat", "Straw Fedora", 225, { "", "", -1 } },
			{ "H_BandMask_blk", "Hat & Bandanna", 300, { "", "", -1 } },
			{ "H_Booniehat_tan", "", 425, { "", "", -1 } },
			{ "H_Hat_blue", "", 310, { "", "", -1 } },
			{ "H_Hat_brown", "", 276, { "", "", -1 } },
			{ "H_Hat_checker", "", 340, { "", "", -1 } },
			{ "H_Hat_grey", "", 280, { "", "", -1 } },
			{ "H_Hat_tan", "", 265, { "", "", -1 } },
			{ "H_Cap_blu", "", 150, { "", "", -1 } },
			{ "H_Cap_grn", "", 150, { "", "", -1 } },
			{ "H_Cap_grn_BI", "", 150, { "", "", -1 } },
			{ "H_Cap_oli", "", 150, { "", "", -1 } },
			{ "H_Cap_red", "", 150, { "", "", -1 } },
			{ "H_Cap_tan", "", 150, { "", "", -1 } },
			{ "H_Orel_Casque_Chantier_Rouge", "Casque de chantier Rouge", 150, { "", "", -1 } },
			{ "H_Orel_Casque_Chantier_Jaune", "Casque de chantier Jaune", 150, { "", "", -1 } },
			{ "H_Cap_DDE", "Casquette de la DDE", 150, { "", "", -1 } },
			{ "cl3_Headgear_spliff", "Roules en une", 150, { "", "", -1 } },
			{ "cl3_Headgear_Civcap1", "Casquette Notear", 150, { "", "", -1 } },
			{ "cl3_Headgear_Civcap2", "Casquette W", 150, { "", "", -1 } },
			{ "cl3_Headgear_Civcap3", "Casquette CowBoy", 150, { "", "", -1 } },
			{ "cl3_Headgear_Civcap4", "Casquette Stella Artois", 150, { "", "", 1 } },
			{ "cl3_Headgear_bandanna", "Bandana", 150, { "", "", -1 } },
			{ "cl3_Headgear_Work_helmet", "Casque de Chantier", 150, { "", "", -1 } },
			{ "cl3_Headgear_emtcap", "Casquette Rouge", 150, { "", "", -1 } },
			{ "cl3_Headgear_emtcapsenior", "Casquette Veteran", 150, { "", "", -1 } },
			{ "cl3_Headgear_Imbatman", "", 150, { "", "", -1 } },
			{ "cl3_Headgear_helmu", "", 150, { "", "", -1 } },
			{ "cl3_Headgear_goblin", "", 150, { "", "", -1 } },
			{ "cl3_Headgear_AfricanMask", "", 150, { "", "", -1 } },
			{ "cl3_Headgear_DarthVader", "", 150, { "", "", -1 } },
			{ "cl3_Headgear_paperbaghappy", "", 150, { "", "", -1 } },
			{ "cl3_Headgear_paperbagsad", "", 150, { "", "", -1 } }
		};

		goggles[] = {
			{ "NONE", "Remove Glasses", 0, { "", "", -1 } },
			{ "G_Shades_Black", "", 25, { "", "", -1 } },
			{ "G_Shades_Blue", "", 20, { "", "", -1 } },
			{ "G_Sport_Blackred", "", 20, { "", "", -1 } },
			{ "G_Sport_Checkered", "", 20, { "", "", -1 } },
			{ "G_Sport_Blackyellow", "", 20, { "", "", -1 } },
			{ "G_Sport_BlackWhite", "", 20, { "", "", -1 } },
			{ "G_Squares", "", 10, { "", "", -1 } },
			{ "G_Aviator", "", 100, { "", "", -1 } },
			{ "G_Lady_Mirror", "", 150, { "", "", -1 } },
			{ "G_Lady_Dark", "", 150, { "", "", -1 } },
			{ "G_Lady_Blue", "", 150, { "", "", -1 } },
			{ "G_Lowprofile", "", 30, { "", "", -1 } },
			{ "G_Combat", "", 55, { "", "", -1 } }
		};

		vests[] = {
			{ "NONE", "Remove Vest", 0, { "", "", -1 } }
		};

		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, { "", "", -1 } },
			{ "B_AssaultPack_cbr", "", 30, { "", "", -1 } },
			{ "B_Kitbag_mcamo", "", 40, { "", "", -1 } },
			{ "B_TacticalPack_oli", "", 50, { "", "", -1 } },
			{ "B_FieldPack_ocamo", "", 50, { "", "", -1 } },
			{ "B_Bergen_sgg", "", 60, { "", "", -1 } },
			{ "B_Kitbag_cbr", "", 60, { "", "", -1 } },
			{ "B_Carryall_oli", "", 60, { "", "", -1 } },
			{ "B_Carryall_khk", "", 60, { "", "", -1 } },
			{ "B_Hello_Kitty", "Sac Hello Kitty", 69, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_2tone1", "", 90, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_2tone2", "", 90, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_2tone3", "", 90, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_2tone3", "", 90, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_2tone5", "", 90, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_aqua", "Sac Aqua", 90, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_baby_blue", "Sac Bleu Ciel", 90, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_baby_pink", "Sac rose sexy", 90, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_burgundy", "Sac bordeaux", 90, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_carbon", "Sac Charbon", 90, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_cardinal", "Sac Rouge Cardinal", 90, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_dark_green", "Sac Vert foncé", 90, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_green", "Sac Vert", 90, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_grey", "Sac Gris", 90, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_gold", "Sac or", 90, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_lavender", "Sac lavande", 90, { "", "", 1- } },
			{ "CL3_AssaultPack_Full_light_blue", "Sac Bleu", 90, { "", "", 1- } },
			{ "CL3_AssaultPack_Full_light_yellow", "Sac jaune", 90, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_lime", "Sac citron", 90, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_marina_blue", "Sac Bleu foncé", 90, { "", "", 1- } },
			{ "CL3_AssaultPack_Full_navy_blue", "Sac Bleu Marine", 90, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_orange", "Sac orange", 90, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_pink", "Sac rose", 90, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_purple", "Sac Violet", 90, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_red", "Sac Rouge", 90, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_sand", "Sac Sable", 90, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_silver", "Sac Argent", 90, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_skin_black", "Sac Noir", 90, { "", "", -1 } }
		};
	};

	class cop {
		title = "STR_Shops_C_Police";
		license = "";
		side = "cop";

		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "U_Rangemaster", "Cop Uniform", 25, { "", "", -1 } },
			{ "U_C_Policeman", "Uniforme Gendarme", 25, { "life_coplevel", "SCALAR", 1 } },
			{ "U_B_SpecopsUniform_sgg", "Polaire Gendarme", 25, { "life_coplevel", "SCALAR", 2 } },
			{ "U_B_CombatUniform_mcam_worn", "Grand froid Gendarme", 25, { "life_coplevel", "SCALAR", 1 } },
			{ "U_B_CombatUniform_mcam_tshirt", "", 25, { "life_coplevel", "SCALAR", 1 } },
			{ "U_O_OfficerUniform_ocamo", "Motard Gendarme", 25, { "life_coplevel", "SCALAR", 1 } },
			{ "U_C_GIGN", "Uniforme GIGN", 25, { "life_coplevel", "SCALAR", 2} }
			
		};

		headgear[] = {
			{ "NONE", "Remove Hat", 0, { "", "", -1 } },
			{ "H_HelmetB_plain_mcamo", "", 75, { "life_coplevel", "SCALAR", 1 } },
			{ "H_Booniehat_mcamo", "", 120, { "life_coplevel", "SCALAR", 1 } },
			{ "H_MilCap_mcamo", "", 100, { "life_coplevel", "SCALAR", 2 } },
			{ "H_RacingHelmet_1_blue_F", "Casque Moto", 500, { "life_coplevel", "SCALAR", 1 } }
		};

		goggles[] = {
			{ "NONE", "Remove Glasses", 0, { "", "", -1 } },
			{ "G_Shades_Black", "", 25, { "", "", -1 } },
			{ "G_Shades_Blue", "", 20, { "", "", -1 } },
			{ "G_Sport_Blackred", "", 20, { "", "", -1 } },
			{ "G_Sport_Checkered", "", 20, { "", "", -1 } },
			{ "G_Sport_Blackyellow", "", 20, { "", "", -1 } },
			{ "G_Sport_BlackWhite", "", 20, { "", "", -1 } },
			{ "G_Aviator", "", 75, { "", "", -1 } },
			{ "G_Lowprofile", "", 30, { "", "", -1 } },
			{ "G_Combat", "", 55, { "", "", -1 } },
			{ "H_Orel_Swat", "Casque du GIGN", 55, { "life_coplevel", "SCALAR", 2 } }
		};

		vests[] = {
			{ "NONE", "Remove Vest", 0, { "", "", -1 } },
			{ "V_Police_Belt", "Ceinture de Gendarme", 60, { "", "", -1 } },
			{ "GDM_Vest_Jaune", "", 60, { "", "", -1 } },
			{ "GDM_Vest_Noir", "", 60, { "", "", -1 } },
			{ "GDM_Vest_Etu", "", 60, { "", "", -1 } },
			{ "GDM_Vest_Mpg", "", 60, { "", "", -1 } },
			{ "GDM_Vest_Vert", "", 60, { "", "", -1 } },
			{ "V_TacVest_GIGN", "Veste du GIGN", 60, { "life_coplevel", "SCALAR", 2 } }
			
		};

		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, { "", "", -1 } },
			{ "B_Kitbag_cbr", "", 60, { "", "", -1 } },
			{ "B_FieldPack_cbr", "", 60, { "", "", -1 } },
			{ "B_AssaultPack_cbr", "", 60, { "", "", -1 } },
			{ "B_Bergen_sgg", "", 60, { "", "", -1 } },
			{ "B_Carryall_cbr", "", 60, { "", "", -1 } },
			{ "B_mas_Bergen_mul", "", 60, { "", "", -1 } }
		};
	};

	class dive {
		title = "STR_Shops_C_Diving";
		license = "dive";
		side = "civ";

		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "U_B_Wetsuit", "", 400, { "", "", -1 } }
		};

		headgear[] = {
			{ "NONE", "Remove Hat", 0, { "", "", -1 } }
		};

		goggles[] = {
			{ "NONE", "Remove Glasses", 0, { "", "", -1 } },
			{ "G_Diving", "", 50, { "", "", -1 } }
		};

		vests[] = {
			{ "NONE", "Remove Vest", 0, { "", "", -1 } },
			{ "V_RebreatherB", "", 450, { "", "", -1 } }
		};

		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, { "", "", -1 } }
		};
	};

	class reb {
		title = "STR_Shops_C_Rebel";
		license = "rebel";
		side = "civ";

		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "IRA_Soldier_Outfit_1", "", 50, { "", "", -1 } },
			{ "IRA_Soldier_Outfit_2", "", 50, { "", "", -1 } },
			{ "IRA_Soldier_Outfit_3", "", 50, { "", "", -1 } },
			{ "IRA_Soldier_Outfit_4", "", 50, { "", "", -1 } },
			{ "IRA_Soldier_Outfit_5", "", 50, { "", "", -1 } },
			{ "IRA_Soldier_Outfit_6", "", 50, { "", "", -1 } },
			{ "IRA_Soldier_Outfit_7", "", 50, { "", "", -1 } },
			{ "IRA_Soldier_Outfit_8", "", 50, { "", "", -1 } },
			{ "UVF_Soldier_Outfit_2", "", 50, { "", "", -1 } },
			{ "UVF_Soldier_Outfit_1", "", 50, { "", "", -1 } },
			{ "UVF_Soldier_Outfit_3", "", 50, { "", "", -1 } },
			{ "UVF_Soldier_Outfit_4", "", 50, { "", "", -1 } },
			{ "UVF_Soldier_Outfit_5", "", 50, { "", "", -1 } },
			{ "UVF_Soldier_Outfit_6", "", 50, { "", "", -1 } },
			{ "U_OG_Guerilla1_1", "Guerilla", 50, { "", "", -1 } },
			{ "U_OG_leader", "Guerilla Leader", 150, { "", "", -1 } },
			{ "U_O_SpecopsUniform_ocamo", "", 175, { "", "", -1 } },
			{ "U_O_CombatUniform_oucamo", "", 160, { "", "", -1 } },
			{ "U_O_Wetsuit", "Rebelle Plongeur", 115, { "", "", -1 } },
			{ "U_O_OfficerUniform_ocamo", "Uniforme d'officier", 70, { "", "", -1 } },
			{ "U_I_OfficerUniform", "", 120, { "", "", -1 } },
			{ "U_B_PilotCoveralls", "", 140, { "", "", -1 } },
			{ "U_B_CombatUniform_mcam_worn", "", 140, { "", "", -1 } },
			{ "U_O_GhillieSuit", "", 500, { "", "", -1 } },
			{ "Niko_USA_AOR1", "", 100, { "", "", -1 } },
			{ "Niko_USA_AOR1Tan", "", 150, { "", "", -1 } },
			{ "Niko_USA_AOR2", "", 150, { "", "", -1 } },
			{ "Niko_USA_AOR2OD", "", 150, { "", "", -1 } },
			{ "Niko_USA_Beogam", "", 150, { "", "", -1 } },
			{ "Niko_USA_DCU", "", 150, { "", "", -1 } },
			{ "Niko_USA_DCUTan", "", 150, { "", "", -1 } },
			{ "Niko_USA_DesertTiger", "", 150, { "", "", -1 } },
			{ "Niko_USA_M81", "", 150, { "", "", -1 } },
			{ "Niko_USA_M81DCU", "", 150, { "", "", -1 } },
			{ "Niko_USA_M81OD", "", 150, { "", "", -1 } },
			{ "Niko_USA_M81PCU", "", 150, { "", "", -1 } },
			{ "Niko_USA_Mcam", "", 150, { "", "", -1 } },
			{ "Niko_USA_McamArid", "", 100, { "", "", -1 } },
			{ "Niko_USA_McamAridTan", "", 150, { "", "", -1 } },
			{ "Niko_USA_McamMix", "", 150, { "", "", -1 } },
			{ "Niko_USA_McamTropic", "", 150, { "", "", -1 } },
			{ "Niko_USA_McamTropicOD", "", 150, { "", "", -1 } },
			{ "Niko_USA_Mitchell", "", 150, { "", "", -1 } },
			{ "Niko_USA_NightDesert", "", 150, { "", "", -1 } },
			{ "Niko_USA_SixDesert", "", 150, { "", "", -1 } },
			{ "Niko_USA_Tiger", "", 150, { "", "", -1 } },
			{ "Niko_USA_TigerOD", "", 150, { "", "", -1 } },
			{ "Niko_USA_UCP", "", 150, { "", "", -1 } },
			{ "Niko_USA_UCPPCU", "", 150, { "", "", -1 } },
			{ "Niko_USA_UCPDPCU", "", 150, { "", "", -1 } },
			{ "Niko_USA_UCPTan", "", 150, { "", "", -1 } },
			{ "Niko_USA_UCPD", "", 150, { "", "", -1 } },
			{ "Niko_USA_UCPDTan", "", 100, { "", "", -1 } },
			{ "Niko_USA_XCAMO", "", 150, { "", "", -1 } },
			{ "Niko_USA_AOR2PCU", "", 150, { "", "", -1 } },
			{ "Niko_USA_M81NightDesert", "", 150, { "", "", -1 } },
			{ "Niko_USA_McamAOR1", "", 100, { "", "", -1 } },
			{ "Niko_USA_McamAOR2", "", 100, { "", "", -1 } },
			{ "Niko_USA_NightDesertAOR2", "", 150, { "", "", -1 } },
			{ "Niko_USA_NightDesertDCU", "", 150, { "", "", -1 } },
			{ "Niko_USA_UCPGreen", "", 100, { "", "", -1 } },
			{ "Niko_USA_NightDesertUCPGreen", "", 150, { "", "", -1 } },
			{ "Niko_USA_NightDesertSixDesert", "", 150, { "", "", -1 } },
			{ "Niko_USA_DesertMARPAT", "", 150, { "", "", -1 } },
			{ "Niko_USA_DesertMARPATPCU", "", 150, { "", "", -1 } },
			{ "Niko_USA_DesertMARPATTan", "", 150, { "", "", -1 } },
			{ "Niko_USA_MARPAT", "", 150, { "", "", -1 } },
			{ "Niko_USA_MARPATOD", "", 100, { "", "", -1 } },
			{ "Niko_USA_MARPATPCU", "", 100, { "", "", -1 } },
			{ "cct_uniform_atirador_designado_preto", "", 100, { "", "", -1 } },
			{ "cct_uniform_atirador_designado_branco", "", 150, { "", "", -1 } },
			{ "cct_uniform_spotter_urbano", "", 150, { "", "", -1 } },
			{ "cct_uniform_spotter_deserto", "", 150, { "", "", -1 } },
			{ "cct_uniform_spotter_floresta", "", 150, { "", "", -1 } },
			{ "cct_uniform_spotter_preto", "", 150, { "", "", -1 } },
			{ "cct_uniform_spotter_branco", "", 150, { "", "", -1 } },
			{ "cct_uniform_mecanico_urbano", "", 150, { "", "", -1 } },
			{ "cct_uniform_mecanico_deserto", "", 150, { "", "", -1 } },
			{ "cct_uniform_mecanico_floresta", "", 150, { "", "", -1 } },
			{ "cct_uniform_mecanico_preto", "", 150, { "", "", -1 } },
			{ "cct_uniform_mecanico_branco", "", 150, { "", "", -1 } },
			{ "cct_uniform_esclarecedor_urbano", "", 150, { "", "", -1 } },
		    { "cct_uniform_esclarecedor_deserto", "", 150, { "", "", -1 } },
			{ "cct_uniform_esclarecedor_floresta", "", 100, { "", "", -1 } },
			{ "cct_uniform_esclarecedor_preto", "", 150, { "", "", -1 } },
			{ "cct_uniform_esclarecedor_branco", "", 150, { "", "", -1 } }
		};

		headgear[] = {
			{ "NONE", "Remove Hat", 0, { "", "", -1 } },
			{ "H_ShemagOpen_tan", "", 100, { "", "", -1 } },
			{ "H_Shemag_olive", "", 100, { "", "", -1 } },
			{ "H_ShemagOpen_khk", "", 100, { "", "", -1 } },
			{ "H_HelmetO_ocamo", "", 250, { "", "", -1 } },
			{ "H_MilCap_oucamo", "", 150, { "", "", -1 } },
			{ "H_Orel_Anonymous", "Anonymous", 120, { "", "", -1 } },
			{ "H_Bandanna_camo", "", 50, { "", "", -1 } }
		};

		goggles[] = {
			{ "NONE", "Remove Glasses", 0, { "", "", -1 } },
			{ "G_Shades_Black", "", 25, { "", "", -1 } },
			{ "G_Shades_Blue", "", 20, { "", "", -1 } },
			{ "G_Sport_Blackred", "", 20, { "", "", -1 } },
			{ "G_Sport_Checkered", "", 20, { "", "", -1 } },
			{ "G_Sport_Blackyellow", "", 20, { "", "", -1 } },
			{ "G_Sport_BlackWhite", "", 20, { "", "", -1 } },
			{ "G_Squares", "", 10, { "", "", -1 } },
			{ "G_Lowprofile", "", 30, { "", "", -1 } },
			{ "G_Combat", "", 55, { "", "", -1 } },
			{ "G_Balaclava_oli", "", 550, { "", "", -1 } },
			{ "G_Balaclava_blk", "", 550, { "", "", -1 } },
			{ "G_Balaclava_lowprofile", "", 550, { "", "", -1 } },
			{ "G_Balaclava_combat", "", 550, { "", "", -1 } },
			{ "IRA_Balaclava_Brown", "", 550, { "", "", -1 } },
			{ "G_Bandanna_beast", "", 550, { "", "", -1 } },
			{ "G_Bandanna_shades", "", 550, { "", "", -1 } }
		};

		vests[] = {
			{ "NONE", "Remove Vest", 0, { "", "", -1 } },
			{ "V_TacVest_khk", "", 100, { "", "", -1 } },
			{ "V_BandollierB_cbr", "", 20, { "", "", -1 } },
			{ "V_HarnessO_brn", "", 70, { "", "", -1 } },
			{ "Niko_USA_PlateCarrierL_Tan", "", 50, { "", "", -1 } },
			{ "Niko_USA_PlateCarrierH_Tan", "", 50, { "", "", -1 } },
			{ "Niko_USA_PlateCarrierL_CB", "", 50, { "", "", -1 } },
			{ "Niko_USA_PlateCarrierH_CB", "", 50, { "", "", -1 } },
			{ "Niko_USA_PlateCarrierL_MCam", "", 50, { "", "", -1 } },
			{ "Niko_USA_PlateCarrierH_MCam", "", 50, { "", "", -1 } },
			{ "Niko_USA_PlateCarrierL_AOR1", "", 50, { "", "", -1 } },
			{ "Niko_USA_PlateCarrierH_AOR1", "", 50, { "", "", -1 } },
			{ "Niko_USA_PlateCarrierL_AOR2", "", 50, { "", "", -1 } },
			{ "Niko_USA_PlateCarrierH_AOR2", "", 50, { "", "", -1 } },
			{ "Niko_USA_PlateCarrierL_M81", "", 50, { "", "", -1 } },
			{ "Niko_USA_PlateCarrierH_M81", "", 50, { "", "", -1 } },
			{ "Niko_USA_PlateCarrierL_UCP", "", 50, { "", "", -1 } },
			{ "Niko_USA_PlateCarrierH_UCP", "", 50, { "", "", -1 } },
			{ "cct_vest", "", 50, { "", "", -1 } },
			{ "cct_vest_d", "", 50, { "", "", -1 } },
			{ "cct_vest_f", "", 50, { "", "", -1 } },
			{ "cct_vest_b", "", 50, { "", "", -1 } },
			{ "cct_vest_p", "", 50, { "", "", -1 } }
		};

		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, { "", "", -1 } },
			{ "B_mas_AssaultPack_black", "", 20, { "", "", -1 } },
			{ "O_mas_Bergen_flo", "", 40, { "", "", -1 } },
			{ "O_mas_Bergen_blk", "", 30, { "", "", -1 } },
			{ "O_mas_Bergen_rtan", "", 30, { "", "", -1 } },
			{ "B_mas_AssaultPack_wint", "", 40, { "", "", -1 } },
			{ "B_mas_Bergen_rng", "", 40, { "", "", -1 } },
			{ "B_mas_Kitbag_black", "", 50, { "", "", -1 } },
			{ "B_AssaultPack_cbr", "", 20, { "", "", -1 } },
			{ "B_Kitbag_mcamo", "", 40, { "", "", -1 } },
			{ "B_TacticalPack_oli", "",30 , { "", "", -1 } },
			{ "B_FieldPack_ocamo", "", 30, { "", "", -1 } },
			{ "B_Bergen_sgg", "", 40, { "", "", -1 } },
			{ "B_Kitbag_cbr", "", 40, { "", "", -1 } },
			{ "B_Carryall_oli", "", 50, { "", "", -1 } },
			{ "B_Carryall_khk", "", 50, { "", "", -1 } },
			{ "B_mas_AssaultPack_mul", "", 50, { "", "", -1 } },
			{ "B_mas_Kitbag_mul", "", 50, { "", "", -1 } },
			{ "B_mas_Bergen_mul", "", 50, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_2tone5", "", 50, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_aqua", "Sac Aqua", 50, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_baby_blue", "Sac Bleu Ciel", 50, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_baby_pink", "Sac rose sexy", 50, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_burgundy", "Sac bordeaux", 50, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_carbon", "Sac Charbon", 50, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_cardinal", "Sac Rouge Cardinal", 50, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_dark_green", "Sac Vert foncé", 50, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_green", "Sac Vert", 50, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_grey", "Sac Gris", 50, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_gold", "Sac or", 50, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_lavender", "Sac lavande", 50, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_light_blue", "Sac Bleu", 50, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_light_yellow", "Sac jaune", 50, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_lime", "Sac citron", 50, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_marina_blue", "Sac Bleu foncé", 50, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_navy_blue", "Sac Bleu Marine", 50, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_orange", "Sac orange", 50, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_pink", "Sac rose", 50, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_purple", "Sac Violet", 50, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_red", "Sac Rouge", 50, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_sand", "Sac Sable", 50, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_silver", "Sac Argent", 50, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_skin_black", "Sac Noir", 50, { "", "", -1 } }
		};
	};

	class kart {
		title = "STR_Shops_C_Kart";
		license = "driver";
		side = "civ";

		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "U_C_Driver_1_black", "", 150, { "", "", -1 } },
			{ "U_C_Driver_1_blue", "", 150, { "", "", -1 } },
			{ "U_C_Driver_1_red", "", 150, { "", "", -1 } },
			{ "U_C_Driver_1_orange", "", 150, { "", "", -1 } },
			{ "U_C_Driver_1_green", "", 150, { "", "", -1 } },
			{ "U_C_Driver_1_white", "", 150, { "", "", -1 } },
			{ "U_C_Driver_1_yellow", "", 150, { "", "", -1 } },
			{ "U_C_Driver_2", "", 350, { "", "", -1 } },
			{ "U_C_Driver_1", "", 360, { "", "", -1 } },
			{ "U_C_Driver_3", "", 370, { "", "", -1 } },
			{ "U_C_Driver_4", "", 370, { "", "", -1 } },
			{ "C_Ferrari", "", 400, { "", "", -1 } },
			{ "C_Lamborghini", "", 400, { "", "", -1 } }
		};

		headgear[] = {
			{ "NONE", "Remove Hat", 0, { "", "", -1 } },
			{ "H_RacingHelmet_1_black_F", "", 70, { "", "", -1 } },
			{ "H_RacingHelmet_1_red_F", "", 70, { "", "", -1 } },
			{ "H_RacingHelmet_1_white_F", "", 70, { "", "", -1 } },
			{ "H_RacingHelmet_1_blue_F", "", 70, { "", "", -1 } },
			{ "H_RacingHelmet_1_yellow_F", "", 70, { "", "", -1 } },
			{ "H_RacingHelmet_1_green_F", "", 70, { "", "", -1 } },
			{ "H_RacingHelmet_1_F", "", 100, { "", "", -1 } },
			{ "H_RacingHelmet_2_F", "", 100, { "", "", -1 } },
			{ "H_RacingHelmet_3_F", "", 100, { "", "", -1 } },
			{ "H_RacingHelmet_4_F", "", 100, { "", "", -1 } }
		};

		goggles[] = {
			{ "NONE", "Remove Glasses", 0, { "", "", -1 } }
		};

		vests[] = {
			{ "NONE", "Remove Vest", 0, { "", "", -1 } }
		};

		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, { "", "", -1 } }
		};
	};
	
	class bandit {
		title = "tenues bandit";
		license = "bandit";
		side = "civ";
		
		uniforms[] = {
		    { "NONE", "Remove Uniform", 0, { "", "", -1 } },
		    { "U_IG_Guerilla1_1", "", 50, { "", "", -1 } },
		    { "U_I_G_Story_Protagonist_F", "", 75, { "", "", -1 } },
		    { "IRA_Soldier_Outfit_1", "", 50, { "", "", -1 } },
		    { "IRA_Soldier_Outfit_2", "", 50, { "", "", -1 } },
		    { "IRA_Soldier_Outfit_3", "", 50, { "", "", -1 } },
		    { "IRA_Soldier_Outfit_4", "", 50, { "", "", -1 } },
		    { "IRA_Soldier_Outfit_5", "", 50, { "", "", -1 } },
		    { "IRA_Soldier_Outfit_6", "", 50, { "", "", -1 } },
		    { "IRA_Soldier_Outfit_7", "", 50, { "", "", -1 } },
		    { "IRA_Soldier_Outfit_8", "", 50, { "", "", -1 } },
		    { "UVF_Soldier_Outfit_1", "", 50, { "", "", -1 } },
		    { "UVF_Soldier_Outfit_2", "", 50, { "", "", -1 } },
		    { "UVF_Soldier_Outfit_3", "", 50, { "", "", -1 } },
		    { "UVF_Soldier_Outfit_4", "", 50, { "", "", -1 } },
		    { "UVF_Soldier_Outfit_5", "", 50, { "", "", -1 } },
		    { "UVF_Soldier_Outfit_6", "", 50, { "", "", -1 } }
		};
		
		
		headgear[] = {
			{ "NONE", "Remove Hat", 0, { "", "", -1 } },
			{ "H_ShemagOpen_tan", "", 85, { "", "", -1 } },
			{ "H_Shemag_olive", "", 85, { "", "", -1 } }
		};
		
		goggles[] = {
			{ "NONE", "Remove Glasses", 0, { "", "", -1 } },
			{ "G_Shades_Black", "", 25, { "", "", -1 } },
			{ "IRA_Balaclava_Brown", "", 55, { "", "", -1 } },
			{ "G_Bandanna_beast", "", 55, { "", "", -1 } },
			{ "G_Bandanna_shades", "", 55, { "", "", -1 } }
		};
		
		vests[] = {
			{ "NONE", "Remove Vest", 0, { "", "", -1 } },
			{ "V_TacVest_khk", "", 125, { "", "", -1 } },
			{ "Niko_USA_PlateCarrierL_Tan", "", 50, { "", "", -1 } }
		};
		
		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, { "", "", -1 } },
			{ "B_AssaultPack_cbr", "", 25, { "", "", -1 } },
			{ "B_Kitbag_mcamo", "", 40, { "", "", -1 } },
			{ "B_TacticalPack_oli", "", 35, { "", "", -1 } },
			{ "B_FieldPack_ocamo", "", 30, { "", "", -1 } },
			{ "B_Bergen_sgg", "", 45, { "", "", -1 } },
			{ "B_Kitbag_cbr", "", 45, { "", "", -1 } },
			{ "B_Carryall_oli", "", 50, { "", "", -1 } },
			{ "B_Carryall_khk", "", 50, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_2one1", "", 50, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_2tone3", "", 50, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_2tone4", "", 50, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_2tone5", "", 50, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_aqua", "Sac Aqua", 50, { "", "", -1 } },
		    { "CL3_AssaultPack_Full_baby_blue", "Sac Bleu Ciel", 50, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_baby_pink", "Sac rose sexy", 50, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_burgundy", "Sac bordeaux", 50, { "", "", -1 } },
		    { "CL3_AssaultPack_Full_carbon", "Sac Charbon", 50, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_cardinal", "Sac Rouge Cardinal", 50, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_dark_green", "Sac Vert foncé", 50, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_green", "Sac Vert", 50, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_grey", "Sac Gris", 50, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_gold", "Sac or", 50, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_lavender", "Sac lavande", 50, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_light_blue", "Sac Bleu", 50, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_light_yellow", "Sac jaune", 50, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_lime", "Sac citron", 50, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_marina_blue", "Sac Bleu foncé", 50, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_navy_blue", "Sac Bleu Marine", 50, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_orange", "Sac orange", 50, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_pink", "Sac rose", 50, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_purple", "Sac Violet", 50, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_red", "Sac Rouge", 50, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_sand", "Sac Sable", 50, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_silver", "Sac Argent", 50, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_skin_black", "Sac Noir", 50, { "", "", -1 } }
		};
    };
		
    class dep {
		title = "depanneur";
		license = "dep";
		side = "civ";
		
		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "U_Rangemaster", "Depanneur", 500, { "", "", -1 } }
	    };
		
		headgear[] = {
			{ "NONE", "Remove Hat", 0, { "", "", -1 } }
		};
		
		goggles[] = {
			{ "NONE", "Remove Glasses", 0, { "", "", -1 } }
		};
		
		vests[] = {
			{ "NONE", "Remove Vest", 0, { "", "", -1 } }
		};
		
		
		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, { "", "", -1 } },
			{ "B_AssaultPack_cbr", "", 30, { "", "", -1 } },
			{ "B_Kitbag_mcamo", "", 40, { "", "", -1 } },
			{ "B_TacticalPack_oli", "", 50, { "", "", -1 } },
			{ "B_FieldPack_ocamo", "", 50, { "", "", -1 } },
			{ "B_Bergen_sgg", "", 60, { "", "", -1 } },
			{ "B_Kitbag_cbr", "", 60, { "", "", -1 } },
			{ "B_Carryall_oli", "", 60, { "", "", -1 } },
			{ "B_Carryall_khk", "", 60, { "", "", -1 } },
			{ "B_Hello_Kitty", "Sac Hello Kitty", 69, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_2tone1", "", 90, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_2tone2", "", 90, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_2tone3", "", 90, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_2tone3", "", 90, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_2tone5", "", 90, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_aqua", "Sac Aqua", 90, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_baby_blue", "Sac Bleu Ciel", 90, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_baby_pink", "Sac rose sexy", 90, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_burgundy", "Sac bordeaux", 90, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_carbon", "Sac Charbon", 90, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_cardinal", "Sac Rouge Cardinal", 90, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_dark_green", "Sac Vert foncé", 90, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_green", "Sac Vert", 90, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_grey", "Sac Gris", 90, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_gold", "Sac or", 90, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_lavender", "Sac lavande", 90, { "", "", 1- } },
			{ "CL3_AssaultPack_Full_light_blue", "Sac Bleu", 90, { "", "", 1- } },
			{ "CL3_AssaultPack_Full_light_yellow", "Sac jaune", 90, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_lime", "Sac citron", 90, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_marina_blue", "Sac Bleu foncé", 90, { "", "", 1- } },
			{ "CL3_AssaultPack_Full_navy_blue", "Sac Bleu Marine", 90, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_orange", "Sac orange", 90, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_pink", "Sac rose", 90, { "","", -1 } },
			{ "CL3_AssaultPack_Full_purple", "Sac Violet", 90, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_red", "Sac Rouge", 90, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_sand", "Sac Sable", 90, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_silver", "Sac Argent", 90, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_skin_black", "Sac Noir", 90, { "", "", -1 } }
		};
	};	
		
		
    class esco {
		title = "escobar";
		license = "esco";
		side = "civ";
		
		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "U_B_CombatUniform_mcam", "Uniform Escobar", 150, { "", "", -1 } },
			{ "U_IG_Guerilla1_1", "", 200, { "", "", -1 } }
		};
		
		headgear[] = {
			{ "NONE", "Remove Hat", 0, { "", "", -1 } },
			{ "H_Beret_blk", "", 100, { "", "", -1 } },
			{ "H_HelmetSpecO_blk", "", 85, { "", "", -1 } }
		};
		
		goggles[] = {
			{ "NONE", "Remove Glasses", 0, { "", "", -1 } },
			{ "G_Shades_Black", "", 50, { "", "", -1 } },
			{ "G_Shades_Blue", "", 50, { "", "", -1 } },
			{ "IRA_Balaclava_Brown", "", 50, { "", "", -1 } },
			{ "G_Balaclava_blk", "", 50, { "", "", -1 } },
			{ "G_Bandanna_beast", "", 50, { "", "", -1 } },
			{ "G_Aviator", "", 50, { "", "", -1 } },
			{ "G_Bandanna_shades", "", 50, { "", "", -1 } }
		};
		
		vests[] = {
			{ "NONE", "Remove Vest", 0, { "", "", -1 } },
			{ "V_PlateCarrier1_blk", "", 250, { "", "", -1 } },
			{ "cct_vest_p", "", 50, { "", "", -1 } }
		};
		
		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, { "", "", -1 } },
			{ "B_mas_AssaultPack_black", "", 20, { "", "", -1 } },
			{ "O_mas_Bergen_flo", "", 40, { "", "", -1 } },
			{ "O_mas_Bergen_blk", "", 30, { "", "", -1 } },
			{ "O_mas_Bergen_rtan", "", 30, { "", "", -1 } },
			{ "B_mas_AssaultPack_wint", "", 40, { "", "", -1 } },
			{ "B_mas_Bergen_rng", "", 40, { "", "", -1 } },
			{ "B_mas_Kitbag_black", "", 50, { "", "", -1 } },
			{ "B_AssaultPack_blk", "", 250, { "", "", -1 } },
			{ "B_FieldPack_blk", "", 400, { "", "", -1 } },
			{ "B_Bergen_blk", "", 350, { "", "", -1 } }
		};
	};
		
	class explo {
		title = "explosif";
		license = "explo";
		side = "civ";
		
		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, { "", "", -1 } }
	    };
		
		headgear[] = {
			{ "NONE", "Remove Hat", 0, { "", "", -1 } }
		};
		
		goggles[] = {
			{ "NONE", "Remove Glasses", 0, { "", "", -1 } }
		};
		
		vests[] = {
			{ "NONE", "Remove Vest", 0, { "", "", -1 } },
			{ "V_HarnessOGL_gry", "Veste Explosive", 250000, { "", "", -1 } }
		};
		
		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, { "", "", -1 } }
		};
	};
		
	class med {
		title = "Medecin";
		license = "";
		side = "med";
		
		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "U_Rangemaster", "Uniforme EMS", 35, { "", "", -1 } },
			{ "U_C_FireFighter", "Uniforme Pompier", 35, { "", "", -1 } }
			};
		
		headgear[] = {
			{ "NONE", "Remove Hat", 0, { "", "", -1 } },
			{ "H_Orel_FireFighter", "Casque Pompier", 15, { "", "", -1 } },
			{ "H_Orel_FireFighter_Gaz", "Casque Pompier Gaz", 20, { "", "", -1 } }
		};
		
		goggles[] = {
			{ "NONE", "Remove Glasses", 0, { "", "", -1 } }
		};
		
		vests[] = {
			{ "NONE", "Remove Vest", 0, { "", "", -1 } },
			{ "V_Firefighter", "Veste Pompier", 60, { "", "", -1 } }
		};
		
		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, { "", "", -1 } },
			{ "B_Kitbag_cbr", "", 10, { "", "", -1 } },
			{ "B_FieldPack_cbr", "", 15, { "", "", -1 } }
		};
	};
	
	class vente {
		title = "lenin";
		license = "vente";
		side = "civ";
		
		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "U_Rangemaster", "", 20000, { "", "", -1 } },
			{ "U_C_Policeman", "", 30000, { "", "", -1 } },
			{ "U_C_GIGN", "", 50000, { "", "", -1 } }
	    };
		
		headgear[] = {
			{ "NONE", "Remove Hat", 0, { "", "", -1 } },
			{ "H_Orel_Swat", "Casque du GIGN", 40000, { "", "", -1 } }
		};
		
		goggles[] = {
			{ "NONE", "Remove Glasses", 0, { "", "", -1 } }
		};
		
		vests[] = {
			{ "NONE", "Remove Vest", 0, { "", "", -1 } },
			{ "V_Police_Belt", "", 15000, { "", "", -1 } },
			{ "GDM_Vest_Jaune", "", 30000, { "", "", -1 } },
			{ "GDM_Vest_Noir", "", 30000, { "", "", -1 } },
			{ "GDM_Vest_Mpg", "", 30000, { "", "", -1 } },
			{ "GDM_Vest_Etu", "", 30000, { "", "", -1 } }
		};
		
		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, { "", "", -1 } },
			{ "B_AssaultPack_cbr", "", 100, { "", "", -1 } },
			{ "B_Kitbag_mcamo", "", 100, { "", "", -1 } },
			{ "B_TacticalPack_oli", "", 100, { "", "", -1 } },
			{ "B_FieldPack_ocamo", "", 100, { "", "", -1 } },
			{ "B_Bergen_sgg", "", 100, { "", "", -1 } },
			{ "B_Kitbag_cbr", "", 100, { "", "", -1 } },
			{ "B_Carryall_oli", "", 100, { "", "", -1 } },
			{ "B_Carryall_khk", "", 100, { "", "", -1 } },
			{ "B_Hello_Kitty", "Sac Hello Kitty", 100, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_2tone1", "", 100, {"", "", -1 } },
			{ "CL3_AssaultPack_Full_2tone2", "", 100, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_2tone3", "", 100, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_2tone3", "", 100, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_2tone5", "", 100, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_aqua", "Sac Aqua", 100, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_baby_blue", "Sac Bleu Ciel", 100, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_baby_pink", "Sac rose sexy", 100, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_burgundy", "Sac bordeaux", 100, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_carbon", "Sac Charbon", 100, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_cardinal", "Sac Rouge Cardinal", 100, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_dark_green", "Sac Vert foncé", 100, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_green", "Sac Vert", 100, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_grey", "Sac Gris", 100, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_gold", "Sac or", 100, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_lavender", "Sac lavande", 100, { "", "", 1- } },
			{ "CL3_AssaultPack_Full_light_blue", "Sac Bleu", 100, { "", "", 1- } },
			{ "CL3_AssaultPack_Full_light_yellow", "Sac jaune", 100, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_lime", "Sac citron", 100, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_marina_blue", "Sac Bleu foncé", 100, { "", "", 1- } },
			{ "CL3_AssaultPack_Full_navy_blue", "Sac Bleu Marine", 100, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_orange", "Sac orange", 100, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_pink", "Sac rose", 100, { "","", -1 } },
			{ "CL3_AssaultPack_Full_purple", "Sac Violet", 100, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_red", "Sac Rouge", 100, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_sand", "Sac Sable", 100, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_silver", "Sac Argent", 100, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_skin_black", "Sac Noir", 100, { "", "", -1 } }
		};
	};
	
	class wp {
		title = "worker protect";
		license = "wp";
		side = "civ";
		
		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "U_Rangemaster", "WP Tenue", 200, { "", "", -1 } }
	    };
		
		headgear[] = {
			{ "NONE", "Remove Hat", 0, { "", "", -1 } },
			{ "H_Cap_headphones", "", 85, { "", "", -1 } }
		};
		
		goggles[] = {
			{ "NONE", "Remove Glasses", 0, { "", "", -1 } },
			{ "H_Cap_blk_CMMG", "", 20, { "", "", -1 } },
			{ "H_Cap_tan", "", 20, { "", "", -1 } },
			{ "H_Cap_blk", "", 20, { "", "", -1 } },
			{ "H_MilCap_gry", "", 20, { "", "", -1 } }
		};
		
		vests[] = {
			{ "NONE", "Remove Vest", 0, { "", "", -1 } },
			{ "V_TacVestIR_blk", "WP Vest", 125, { "", "", -1 } }
		};
		
		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, { "", "", -1 } },
			{ "B_AssaultPack_cbr", "", 25, { "", "", -1 } },
			{ "B_Kitbag_mcamo", "", 45, { "", "", -1 } },
			{ "B_TacticalPack_oli", "", 35, { "", "", -1 } },
			{ "B_FieldPack_ocamo", "", 30, { "", "", -1 } },
			{ "B_Bergen_sgg", "", 45, { "", "", -1 } },
			{ "B_Kitbag_cbr", "", 45, { "", "", -1 } },
			{ "B_Carryall_oli", "", 50, { "", "", -1 } },
			{ "B_Carryall_khk", "", 50, { "", "", -1 } }
		};
	};
};