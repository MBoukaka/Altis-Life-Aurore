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
			{ "U_C_Poloshirt_blue", "Poloshirt Blue", 100, { "", "", -1 } },
			{ "U_C_Poloshirt_burgundy", "Poloshirt Burgundy", 100, { "", "", -1 } },
			{ "U_C_Poloshirt_redwhite", "Poloshirt Red/White", 100, { "", "", -1 } },
			{ "U_C_Poloshirt_salmon", "Poloshirt Salmon", 100, { "", "", -1 } },
			{ "U_C_Poloshirt_stripped", "Poloshirt stripped", 100, { "", "", -1 } },
			{ "U_C_Poloshirt_tricolour", "Poloshirt Tricolor", 100, { "", "", -1 } },
			{ "U_C_Poor_2", "Rag tagged clothes", 100, { "", "", -1 } },
			{ "U_IG_Guerilla2_2", "Green stripped shirt & Pants", 100, { "", "", -1 } },
			{ "U_IG_Guerilla3_1", "Brown Jacket & Pants", 100, { "", "", -1 } },
			{ "U_IG_Guerilla2_3", "The Outback Rangler", 100, { "", "", -1 } },
			{ "U_C_HunterBody_grn", "The Hunters Look", 165, { "", "", -1 } },
			{ "U_C_WorkerCoveralls", "Mechanic Coveralls", 100, { "", "", -1 } },
			{ "U_OrestesBody", "Surfing On Land", 250, { "", "", -1 } },
			{ "cl3_c_poloshirt_funk_co_uniform", "Tenue Funk", 100, { "", "", -1 } },
			{ "cl3_c_poloshirt_gravity_co_uniform", "Tenue Gravity", 100, { "", "", -1 } },
			{ "cl3_citizen2_1_uniform", "Jean Chemise Verte", 125, { "", "", -1 } },
			{ "cl3_citizen2_2_uniform", "Jean Chemise Grise", 125, { "", "", -1 } },
			{ "cl3_citizen2_3_uniform", "Jean Chemise Rose", 125, { "", "", -1 } },
			{ "cl3_citizen2_4_uniform", "Jean Chemise Orange", 125, { "", "", -1 } },
			{ "cl3_citizen2_5_uniform", "Jean Chemise Bleue", 125, { "", "", -1 } },
			{ "cl3_citizen2_6_uniform", "Camo et Chemise Verte", 135, { "", "", -1 } },
			{ "cl3_citizen2_7_uniform", "Camo et Chemise Grise", 135, { "", "", -1 } },
			{ "cl3_citizen2_8_uniform", "Camo et Chemise Rose", 135, { "", "", -1 } },
			{ "cl3_citizen2_9_uniform", "Camo et Chemise Orange", 135, { "", "", -1 } },
			{ "cl3_citizen2_10_uniform", "Camo et Chemise Bleue", 135, { "", "", -1 } },
			{ "cl3_citizen2_11_uniform", "Jean Vert et Chemise Verte", 110, { "", "", -1 } },
			{ "cl3_citizen2_12_uniform", "Jean Vert et Chemise Grise", 110, { "", "", -1 } },
			{ "cl3_citizen2_13_uniform", "Jean Vert et Chemise Rose", 110, { "", "", -1 } },
			{ "cl3_citizen2_14_uniform", "Jean Vert et Chemise Orange", 110, { "", "", -1 } },
			{ "cl3_citizen2_15_uniform", "Jean Vert et Chemise Bleue", 110, { "", "", -1 } },
			{ "cl3_citizen2_16_uniform", "Jean Rouge et Chemise Verte", 110, { "", "", -1 } },
			{ "cl3_citizen2_17_uniform", "Jean Rouge et Chemise Grise", 110, { "", "", -1 } },
			{ "cl3_citizen2_18_uniform", "Jean Rouge et Chemise Rose", 110, { "", "", -1 } },
			{ "cl3_citizen2_19_uniform", "Jean Rouge et Chemise Orange", 110, { "", "", -1 } },
			{ "cl3_citizen2_20_uniform", "Jean Rouge et Chemise Bleue", 110, { "", "", -1 } },
			{ "cl3_citizen2_21_uniform", "Jean Rose et Chemise Verte", 110, { "", "", -1 } },
			{ "cl3_citizen2_22_uniform", "Jean Rose et Chemise Grise", 110, { "", "", -1 } },
			{ "cl3_citizen2_23_uniform", "Jean Rose et Chemise Rose", 110, { "", "", -1 } },
			{ "cl3_citizen2_24_uniform", "Jean Rose et Chemise Orange", 110, { "", "", -1 } },
			{ "cl3_citizen2_25_uniform", "Jean Rose et Chemise Bleue", 110, { "", "", -1 } },
			{ "cl3_citizen3_1_uniform", "Tenue Forêt", 120, { "", "", -1 } },
			{ "cl3_citizen3_2_uniform", "Tenue Sable Bleue", 120, { "", "", -1 } },
			{ "cl3_citizen3_3_uniform", "Tenue Disco", 135, { "", "", -1 } },
			{ "cl3_citizen3_4_uniform", "Tenue de Laurent", 150, { "", "", -1 } },
			{ "cl3_citizen3_5_uniform", "Le Lorenzo", 150, { "", "", -1 } },
			{ "cl3_citizen3_6_uniform", "Le Tams", 150, { "", "", -1 } },
			{ "cl3_citizen3_7_uniform", "Le Dragueur 1", 100, { "", "", -1 } },
			{ "cl3_citizen3_8_uniform", "Le Dragueur 2", 100, { "", "", -1 } },
			{ "cl3_citizen3_9_uniform", "Le Dragueur 3", 100, { "", "", -1 } },
			{ "cl3_citizen3_10_uniform", "Le Dragueur 4", 100, { "", "", -1 } },
			{ "cl3_citizen3_11_uniform", "Le Dragueur 5", 100, { "", "", -1 } },
			{ "cl3_citizen3_12_uniform", "Le Dragueur 6", 100, { "", "", -1 } },
			{ "cl3_citizen3_13_uniform", "Le Dragueur 7", 100, { "", "", -1 } },
			{ "cl3_citizen3_14_uniform", "Le Dragueur 8", 100, { "", "", -1 } },
			{ "cl3_citizen3_15_uniform", "Le Dragueur 9", 100, { "", "", -1 } },
			{ "cl3_citizen3_16_uniform", "Le Dragueur 10", 100, { "", "", -1 } },
			{ "cl3_citizen3_17_uniform", "Le Dragueur 11", 100, { "", "", -1 } },
			{ "cl3_citizen3_18_uniform", "Le Dragueur 12", 100, { "", "", -1 } },
			{ "cl3_citizen3_19_uniform", "Le Dragueur 13", 100, { "", "", -1 } },
			{ "cl3_citizen3_20_uniform", "Le Dragueur 14", 100, { "", "", -1 } },
			{ "cl3_citizen3_21_uniform", "Le Dragueur 15", 100, { "", "", -1 } },
			{ "cl3_citizen3_22_uniform", "Le Dragueur 16", 100, { "", "", -1 } },
			{ "cl3_citizen3_23_uniform", "Le Dragueur 17", 100, { "", "", -1 } },
			{ "cl3_citizen3_24_uniform", "Le Dragueur 18", 100, { "", "", -1 } },
			{ "cl3_citizen3_25_uniform", "Le Dragueur 19", 100, { "", "", -1 } },
			{ "cl3_citizen4_1_uniform", "Mec Branché 1", 115, { "", "", -1 } },
			{ "cl3_citizen4_2_uniform", "Mec Branché 2", 115, { "", "", -1 } },
			{ "cl3_citizen4_3_uniform", "Mec Branché 3", 115, { "", "", -1 } },
			{ "cl3_citizen4_4_uniform", "Mec Branché 4", 115, { "", "", -1 } },
			{ "cl3_citizen4_5_uniform", "Mec Branché 5", 115, { "", "", -1 } },
			{ "cl3_citizen4_6_uniform", "Mec Branché 6", 115, { "", "", -1 } },
			{ "cl3_citizen4_7_uniform", "Mec Branché 7", 115, { "", "", -1 } },
			{ "cl3_citizen4_8_uniform", "Mec Branché 8", 115, { "", "", -1 } },
			{ "cl3_citizen4_9_uniform", "Mec Branché 9", 115, { "", "", -1 } },
			{ "cl3_citizen4_10_uniform", "Mec Branché 10", 115, { "", "", -1 } },
			{ "cl3_citizen4_11_uniform", "Mec Branché 11", 115, { "", "", -1 } },
			{ "cl3_citizen4_12_uniform", "Mec Branché 12", 115, { "", "", -1 } },
			{ "cl3_citizen4_13_uniform", "Mec Branché 13", 115, { "", "", -1 } },
			{ "cl3_citizen4_14_uniform", "Mec Branché 14", 115, { "", "", -1 } },
			{ "cl3_citizen4_15_uniform", "Mec Branché 15", 115, { "", "", -1 } },
			{ "cl3_citizen4_16_uniform", "Mec Branché 16", 115, { "", "", -1 } },
			{ "cl3_citizen4_17_uniform", "Mec Branché 17", 115, { "", "", -1 } },
			{ "cl3_citizen4_18_uniform", "Mec Branché 18", 115, { "", "", -1 } },
			{ "cl3_citizen4_19_uniform", "Mec Branché 19", 115, { "", "", -1 } },
			{ "cl3_citizen4_20_uniform", "Mec Branché 20", 115, { "", "", -1 } },
			{ "cl3_citizen4_21_uniform", "Le Lorenzo", 150, {"", "", -1 } },
			{ "cl3_citizen4_22_uniform", "Le Tams", 150, { "", "", -1 } },
			{ "cl3_citizen4_23_uniform", "Mec Branché 21", 115, { "", "", -1 } },
			{ "cl3_citizen4_24_uniform", "Mec Branché 22", 115, { "", "", -1 } },
			{ "cl3_citizen4_25_uniform", "Mec Branché 23", 115, { "", "", -1 } },
			{ "cl3_hunter_bushman_hunter1_uniform", "Tenue de Chasse", 150, { "", "", -1 } },
			{ "cl3_hunter_bushman_hunter2_uniform", "Tenue de Chasse 2", 150, { "", "", -1 } },
			{ "cl3_hunter_bushman_hunter3_uniform", "Tenue de Chasse Gay", 150, { "", "", -1 } },
			{ "cl3_hunter_bushman_hunter4_uniform", "Tenue de Chasse 3", 150, { "", "", -1 } },
			{ "cl3_c_poloshirt_1_uniform", "Tenue de Sport", 90, { "", "", -1 } },
			{ "cl3_c_poloshirt_2_uniform", "Adigrass", 90, { "", "", -1 } },
			{ "cl3_c_poloshirt_3_uniform", "Brony", 90, { "", "", -1 } },
			{ "cl3_c_poloshirt_4_uniform", "Brony 2", 90, { "", "", -1 } },
			{ "cl3_c_poloshirt_5_uniform", "Sport Rouge", 90, { "", "", -1 } },
			{ "cl3_c_poloshirt_6_uniform", "Sport Violet", 90, { "", "", -1 } },
			{ "cl3_c_poloshirt_7_uniform", "Sport Vert", 90, { "", "", -1 } },
			{ "cl3_c_poloshirt_8_uniform", "Sport Bleu", 90, { "", "", -1 } },
			{ "cl3_c_poloshirt_9_uniform", "Clo News", 90, { "", "", -1 } },
			{ "cl3_c_poloshirt_10_uniform", "Coca", 90, { "", "", -1 } },
			{ "cl3_c_poloshirt_11_uniform", "Cool Story Bro", 90, { "", "", -1 } },
			{ "cl3_c_poloshirt_12_uniform", "Boule", 90, { "", "", -1 } },
			{ "cl3_c_poloshirt_13_uniform", "Minette", 90, { "", "", -1 } },
			{ "cl3_c_poloshirt_14_uniform", "Gyms", 90, { "", "", -1 } },
			{ "cl3_c_poloshirt_15_uniform", "Ibea", 90, { "", "", -1 } },
			{ "cl3_c_poloshirt_16_uniform", "Mint", 90, { "", "", -1 } },
			{ "cl3_c_poloshirt_17_uniform", "Diable Blanc", 90, { "", "", -1 } },
			{ "cl3_c_poloshirt_18_uniform", "Diable Rouge", 90, { "", "", -1 } },
			{ "cl3_c_poloshirt_19_uniform", "Diable Bleu", 90, { "", "", -1 } },
			{ "cl3_c_poloshirt_20_uniform", "Say Bye Money", 90, { "", "", -1 } },
			{ "cl3_c_poloshirt_21_uniform", "Shyte", 90, { "", "", -1 } },
			{ "cl3_c_poloshirt_22_uniform", "Tennis", 90, { "", "", -1 } },
			{ "cl3_c_poloshirt_23_uniform", "Tennis Vert", 90, { "", "", -1 } },
			{ "cl3_c_poloshirtpants_1_uniform", "Jean Polo Blanc", 90, { "", "", -1 } },
			{ "cl3_c_poloshirtpants_2_uniform", "Jean Cerf Blanc", 90, { "", "", -1 } },
			{ "cl3_c_poloshirtpants_3_uniform", "Jean Cerf Jaune", 90, { "", "", -1 } },
			{ "cl3_c_poloshirtpants_4_uniform", "Jean Cerf Bleu", 90, { "", "", -1 } },
			{ "cl3_c_poloshirtpants_5_uniform", "Jean Cerf Vert", 90, { "", "", -1 } },
			{ "cl3_c_poloshirtpants_6_uniform", "Jean Cerf Rouge", 90, { "", "", -1 } },
			{ "cl3_c_poloshirtpants_7_uniform", "CL Only Blanc", 90, { "", "", -1 } },
			{ "cl3_c_poloshirtpants_8_uniform", "CL Only Noir", 90, { "", "", -1 } },
			{ "cl3_c_poloshirtpants_9_uniform", "City Life Rose", 90, { "", "", -1 } },
			{ "cl3_c_poloshirtpants_10_uniform", "Dildo", 90, { "", "", -1 } },
			{ "cl3_c_poloshirtpants_11_uniform", "Guns Kill", 90, { "", "", -1 } },
			{ "cl3_c_poloshirtpants_12_uniform", "Le Ringard", 90, { "", "", -1 } },
			{ "cl3_c_poloshirtpants_13_uniform", "Le Ringard 2", 90, { "", "", -1 } },
			{ "cl3_c_poloshirtpants_14_uniform", "Livreur de Pizza", 90, { "", "", -1 } },
			{ "cl3_c_poloshirtpants_14_uniform", "Pumba", 90, { "", "", -1} },
			{ "cl3_c_poloshirtpants_19_uniform", "Smurnoff", 90, { "", "", -1 } },
			{ "cl3_c_poloshirtpants_20_uniform", "Tino 1", 90, { "", "", -1 } },
			{ "cl3_c_poloshirtpants_21_uniform", "Tino 2", 90, { "", "", -1 } },
			{ "cl3_c_poloshirtpants_22_uniform", "Tino 3", 90, { "", "", -1 } },
			{ "cl3_c_poloshirtpants_23_uniform", "Tino 4", 90, { "", "", -1 } },
			{ "cl3_c_poloshirtpants_24_uniform", "Absolut Vomit", 90, { "", "", -1 } },
			{ "cl3_c_poloshirtpants_25_uniform", "Ayc", 90, { "", "", -1 } },
			{ "cl3_c_poloshirtpants_26_uniform", "Yolo", 90, { "", "", -1 } },
			{ "cl3_c_poloshirtpants_bus_uniform", "Bus conducteur", 120, { "", "", -1 } },
			{ "cl3_c_poloshirtpants_1_uniform", "Bus conducteur 2", 120, { "", "", -1 } }
		};

		headgear[] = {
			{ "NONE", "Remove Hat", 0, { "", "", -1 } },
			{ "H_Bandanna_camo", "Camo Bandanna", 10, { "", "", -1 } },
			{ "H_Bandanna_surfer", "Surfer Bandanna", 10, { "", "", -1 } },
			{ "H_Bandanna_gry", "Grey Bandanna", 10, { "", "", -1 } },
			{ "H_Bandanna_cbr", "", 10, { "", "", -1 } },
			{ "H_Bandanna_surfer", "", 10, { "", "", -1 } },
			{ "H_Bandanna_khk", "Khaki Bandanna", 10, { "", "", -1 } },
			{ "H_Bandanna_sgg", "Sage Bandanna", 10, { "", "", -1 } },
			{ "H_StrawHat", "Straw Fedora", 20, { "", "", -1 } },
			{ "H_BandMask_blk", "Hat & Bandanna", 30, { "", "", -1 } },
			{ "H_Booniehat_tan", "", 30, { "", "", -1 } },
			{ "H_Hat_blue", "", 10, { "", "", -1 } },
			{ "H_Hat_brown", "", 10, { "", "", -1 } },
			{ "H_Hat_checker", "", 10, { "", "", -1 } },
			{ "H_Hat_grey", "", 10, { "", "", -1 } },
			{ "H_Hat_tan", "", 10, { "", "", -1 } },
			{ "H_Cap_blu", "", 10, { "", "", -1 } },
			{ "H_Cap_grn", "", 10, { "", "", -1 } },
			{ "H_Cap_grn_BI", "", 10, { "", "", -1 } },
			{ "H_Cap_oli", "", 10, { "", "", -1 } },
			{ "H_Cap_red", "", 10, { "", "", -1 } },
			{ "H_Cap_tan", "", 10, { "", "", -1 } },
			{ "H_Orel_Casque_Chantier_Rouge", "Casque de chantier Rouge", 50, { "", "", -1 } },
			{ "H_Orel_Casque_Chantier_Jaune", "Casque de chantier Jaune", 50, { "", "", -1 } },
			{ "H_Cap_DDE", "Casquette de la DDE", 25, { "", "", -1 } },
			{ "cl3_Headgear_spliff", "Roules en une", 80, { "", "", -1 } },
			{ "cl3_Headgear_Civcap1", "Casquette Notear", 10, { "", "", -1 } },
			{ "cl3_Headgear_Civcap2", "Casquette W", 10, { "", "", -1 } },
			{ "cl3_Headgear_Civcap3", "Casquette CowBoy", 10, { "", "", -1 } },
			{ "cl3_Headgear_Civcap4", "Casquette Stella Artois", 10, { "", "", 1 } },
			{ "cl3_Headgear_bandanna", "Bandana", 25, { "", "", -1 } },
			{ "cl3_Headgear_Work_helmet", "Casque de Chantier", 70, { "", "", -1 } },
			{ "cl3_Headgear_emtcap", "Casquette Rouge", 10, { "", "", -1 } },
			{ "cl3_Headgear_emtcapsenior", "Casquette Veteran", 10, { "", "", -1 } },
			{ "cl3_Headgear_Imbatman", "", 100, { "", "", -1 } },
			{ "cl3_Headgear_helmu", "", 100, { "", "", -1 } },
			{ "cl3_Headgear_goblin", "", 100, { "", "", -1 } },
			{ "cl3_Headgear_AfricanMask", "", 100, { "", "", -1 } },
			{ "cl3_Headgear_DarthVader", "", 100, { "", "", -1 } },
			{ "cl3_Headgear_paperbaghappy", "", 150, { "", "", -1 } },
			{ "cl3_Headgear_paperbagsad", "", 150, { "", "", -1 } }
		};

		goggles[] = {
			{ "NONE", "Remove Glasses", 0, { "", "", -1 } },
			{ "G_Shades_Black", "", 15, { "", "", -1 } },
			{ "G_Shades_Blue", "", 15, { "", "", -1 } },
			{ "G_Sport_Blackred", "", 15, { "", "", -1 } },
			{ "G_Sport_Checkered", "", 15, { "", "", -1 } },
			{ "G_Sport_Blackyellow", "", 15, { "", "", -1 } },
			{ "G_Sport_BlackWhite", "", 15, { "", "", -1 } },
			{ "G_Squares", "", 10, { "", "", -1 } },
			{ "G_Aviator", "", 90, { "", "", -1 } },
			{ "G_Lady_Mirror", "", 10, { "", "", -1 } },
			{ "G_Lady_Dark", "", 10, { "", "", -1 } },
			{ "G_Lady_Blue", "", 10, { "", "", -1 } },
			{ "G_Lowprofile", "", 20, { "", "", -1 } },
			{ "G_Combat", "", 60, { "", "", -1 } }
		};

		vests[] = {
			{ "NONE", "Remove Vest", 0, { "", "", -1 } }
		};

		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, { "", "", -1 } },
			{ "B_AssaultPack_cbr", "", 20, { "", "", -1 } },
			{ "B_Kitbag_mcamo", "", 20, { "", "", -1 } },
			{ "B_TacticalPack_oli", "", 30, { "", "", -1 } },
			{ "B_FieldPack_ocamo", "", 30, { "", "", -1 } },
			{ "B_Bergen_sgg", "", 50, { "", "", -1 } },
			{ "B_Kitbag_cbr", "", 50, { "", "", -1 } },
			{ "B_Carryall_oli", "", 70, { "", "", -1 } },
			{ "B_Carryall_khk", "", 70, { "", "", -1 } },
			{ "B_Hello_Kitty", "Sac Hello Kitty", 69, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_2tone1", "", 60, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_2tone2", "", 60, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_2tone3", "", 60, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_2tone3", "", 60, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_2tone5", "", 60, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_aqua", "Sac Aqua", 60, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_baby_blue", "Sac Bleu Ciel", 60, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_baby_pink", "Sac rose sexy", 60, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_burgundy", "Sac bordeaux", 60, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_carbon", "Sac Charbon", 60, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_cardinal", "Sac Rouge Cardinal", 60, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_dark_green", "Sac Vert foncé", 60, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_green", "Sac Vert", 60, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_grey", "Sac Gris", 60, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_gold", "Sac or", 60, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_lavender", "Sac lavande", 60, { "", "", 1- } },
			{ "CL3_AssaultPack_Full_light_blue", "Sac Bleu", 60, { "", "", 1- } },
			{ "CL3_AssaultPack_Full_light_yellow", "Sac jaune", 60, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_lime", "Sac citron", 60, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_marina_blue", "Sac Bleu foncé", 60, { "", "", 1- } },
			{ "CL3_AssaultPack_Full_navy_blue", "Sac Bleu Marine", 60, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_orange", "Sac orange", 60, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_pink", "Sac rose", 60, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_purple", "Sac Violet", 60, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_red", "Sac Rouge", 60, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_sand", "Sac Sable", 60, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_silver", "Sac Argent", 60, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_skin_black", "Sac Noir", 60, { "", "", -1 } }
		};
	};

	class cop {
		title = "STR_Shops_C_Police";
		license = "";
		side = "cop";

		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "U_Rangemaster", "Cop Uniform", 50, { "", "", -1 } },
			{ "U_C_Policeman", "Uniforme Gendarme", 50, { "life_coplevel", "SCALAR", 2 } },
			{ "U_B_SpecopsUniform_sgg", "Polaire Gendarme", 50, { "life_coplevel", "SCALAR", 4 } },
			{ "U_B_CombatUniform_mcam_worn", "Grand froid Gendarme", 50, { "life_coplevel", "SCALAR", 2 } },
			{ "U_O_OfficerUniform_ocamo", "Motard Gendarme", 50, { "life_coplevel", "SCALAR", 2 } },
			{ "U_OG_Guerilla2_1", "Tenue civil 1", 50, { "life_coplevel", "SCALAR", 3 } },
			{ "U_OG_Guerilla2_2", "Tenue civil 2", 50, { "life_coplevel", "SCALAR", 3 } },
			{ "U_C_GIGN", "Uniforme GIGN", 100, { "life_coplevel", "SCALAR", 4} },
			{ "U_B_Wetsuit", "Tenue de plongée", 100, { "life_coplevel", "SCALAR", 5 } }
			
		};

		headgear[] = {
			{ "NONE", "Remove Hat", 0, { "", "", -1 } },
			{ "H_HelmetB_plain_mcamo", "", 70, { "life_coplevel", "SCALAR", 2 } },
			{ "H_Booniehat_mcamo", "", 70, { "life_coplevel", "SCALAR", 3 } },
			{ "H_MilCap_mcamo", "", 70, { "life_coplevel", "SCALAR", 3 } },
			{ "H_RacingHelmet_1_blue_F", "Casque Moto", 200, { "life_coplevel", "SCALAR", 2 } },
			{ "H_Orel_Swat", "Casque du GIGN", 100, { "life_coplevel", "SCALAR", 4 } }
		};

		goggles[] = {
			{ "NONE", "Remove Glasses", 0, { "", "", -1 } },
			{ "G_Shades_Black", "", 25, { "", "", -1 } },
			{ "G_Shades_Blue", "", 20, { "", "", -1 } },
			{ "G_Sport_Blackred", "", 20, { "", "", -1 } },
			{ "G_Sport_Checkered", "", 20, { "", "", -1 } },
			{ "G_Sport_Blackyellow", "", 20, { "", "", -1 } },
			{ "G_Sport_BlackWhite", "", 20, { "", "", -1 } },
			{ "G_Aviator", "", 50, { "", "", -1 } },
			{ "G_Lowprofile", "", 30, { "", "", -1 } },
			{ "G_Combat", "", 60, { "", "", -1 } }
		};

		vests[] = {
			{ "NONE", "Remove Vest", 0, { "", "", -1 } },
			{ "V_Police_Belt", "Ceinture de Gendarme", 50, { "", "", -1 } },
			{ "GDM_Vest_Jaune", "", 20, { "", "", -1 } },
			{ "GDM_Vest_Noir", "", 20, { "", "", -1 } },
			{ "GDM_Vest_Etu", "", 20, { "", "", -1 } },
			{ "GDM_Vest_Mpg", "", 20, { "", "", -1 } },
			{ "GDM_Vest_Vert", "", 20, { "", "", -1 } },
			{ "V_TacVest_GIGN", "Veste du GIGN", 100, { "life_coplevel", "SCALAR", 3 } },
			{ "V_PlateCarrier1_blk", "Benji Balistique", 130, { "life_coplevel", "SCALAR", 4 } }
			
		};

		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, { "", "", -1 } },
			{ "B_Kitbag_cbr", "", 50, { "", "", -1 } },
			{ "B_FieldPack_cbr", "", 50, { "", "", -1 } },
			{ "B_AssaultPack_cbr", "", 50, { "", "", -1 } },
			{ "B_Bergen_sgg", "", 50, { "", "", -1 } },
			{ "B_Carryall_cbr", "", 50, { "", "", -1 } },
			{ "B_mas_Bergen_mul", "", 200, { "", "", -1 } }
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
			{ "IRA_Soldier_Outfit_1", "", 400, { "", "", -1 } },
			{ "IRA_Soldier_Outfit_2", "", 400, { "", "", -1 } },
			{ "IRA_Soldier_Outfit_3", "", 400, { "", "", -1 } },
			{ "IRA_Soldier_Outfit_4", "", 400, { "", "", -1 } },
			{ "IRA_Soldier_Outfit_5", "", 400, { "", "", -1 } },
			{ "IRA_Soldier_Outfit_6", "", 400, { "", "", -1 } },
			{ "IRA_Soldier_Outfit_7", "", 400, { "", "", -1 } },
			{ "IRA_Soldier_Outfit_8", "", 400, { "", "", -1 } },
			{ "UVF_Soldier_Outfit_2", "", 400, { "", "", -1 } },
			{ "UVF_Soldier_Outfit_1", "", 400, { "", "", -1 } },
			{ "UVF_Soldier_Outfit_3", "", 400, { "", "", -1 } },
			{ "UVF_Soldier_Outfit_4", "", 400, { "", "", -1 } },
			{ "UVF_Soldier_Outfit_5", "", 400, { "", "", -1 } },
			{ "UVF_Soldier_Outfit_6", "", 400, { "", "", -1 } },
			{ "U_OG_Guerilla1_1", "Guerilla", 400, { "", "", -1 } },
			{ "U_OG_leader", "Guerilla Leader", 450, { "", "", -1 } },
			{ "U_O_SpecopsUniform_ocamo", "", 450, { "", "", -1 } },
			{ "U_O_CombatUniform_oucamo", "", 450, { "", "", -1 } },
			{ "U_O_Wetsuit", "Rebelle Plongeur", 500, { "", "", -1 } },
			{ "U_O_OfficerUniform_ocamo", "Uniforme d'officier", 420, { "", "", -1 } },
			{ "U_I_OfficerUniform", "", 420, { "", "", -1 } },
			{ "U_B_PilotCoveralls", "", 420, { "", "", -1 } },
			{ "U_B_CombatUniform_mcam_worn", "", 420, { "", "", -1 } },
			{ "U_O_GhillieSuit", "", 1250, { "", "", -1 } },
			{ "U_O_FullGhillie_lsh", "", 2500, { "", "", -1 } },
			{ "Niko_USA_AOR1", "", 400, { "", "", -1 } },
			{ "Niko_USA_AOR1Tan", "", 400, { "", "", -1 } },
			{ "Niko_USA_AOR2", "", 400, { "", "", -1 } },
			{ "Niko_USA_AOR2OD", "", 400, { "", "", -1 } },
			{ "Niko_USA_Beogam", "", 400, { "", "", -1 } },
			{ "Niko_USA_DCU", "", 400, { "", "", -1 } },
			{ "Niko_USA_DCUTan", "", 400, { "", "", -1 } },
			{ "Niko_USA_DesertTiger", "", 400, { "", "", -1 } },
			{ "Niko_USA_M81", "", 400, { "", "", -1 } },
			{ "Niko_USA_M81DCU", "", 400, { "", "", -1 } },
			{ "Niko_USA_M81OD", "", 400, { "", "", -1 } },
			{ "Niko_USA_M81PCU", "", 400, { "", "", -1 } },
			{ "Niko_USA_Mcam", "", 400, { "", "", -1 } },
			{ "Niko_USA_McamArid", "", 400, { "", "", -1 } },
			{ "Niko_USA_McamAridTan", "", 400, { "", "", -1 } },
			{ "Niko_USA_McamMix", "", 400, { "", "", -1 } },
			{ "Niko_USA_McamTropic", "", 400, { "", "", -1 } },
			{ "Niko_USA_McamTropicOD", "", 400, { "", "", -1 } },
			{ "Niko_USA_Mitchell", "", 400, { "", "", -1 } },
			{ "Niko_USA_NightDesert", "", 400, { "", "", -1 } },
			{ "Niko_USA_SixDesert", "", 400, { "", "", -1 } },
			{ "Niko_USA_Tiger", "", 400, { "", "", -1 } },
			{ "Niko_USA_TigerOD", "", 400, { "", "", -1 } },
			{ "Niko_USA_UCP", "", 400, { "", "", -1 } },
			{ "Niko_USA_UCPPCU", "", 400, { "", "", -1 } },
			{ "Niko_USA_UCPDPCU", "", 400, { "", "", -1 } },
			{ "Niko_USA_UCPTan", "", 400, { "", "", -1 } },
			{ "Niko_USA_UCPD", "", 400, { "", "", -1 } },
			{ "Niko_USA_UCPDTan", "", 400, { "", "", -1 } },
			{ "Niko_USA_XCAMO", "", 400, { "", "", -1 } },
			{ "Niko_USA_AOR2PCU", "", 400, { "", "", -1 } },
			{ "Niko_USA_M81NightDesert", "", 400, { "", "", -1 } },
			{ "Niko_USA_McamAOR1", "", 400, { "", "", -1 } },
			{ "Niko_USA_McamAOR2", "", 400, { "", "", -1 } },
			{ "Niko_USA_NightDesertAOR2", "", 400, { "", "", -1 } },
			{ "Niko_USA_NightDesertDCU", "", 400, { "", "", -1 } },
			{ "Niko_USA_UCPGreen", "", 400, { "", "", -1 } },
			{ "Niko_USA_NightDesertUCPGreen", "", 400, { "", "", -1 } },
			{ "Niko_USA_NightDesertSixDesert", "", 400, { "", "", -1 } },
			{ "Niko_USA_DesertMARPAT", "", 400, { "", "", -1 } },
			{ "Niko_USA_DesertMARPATPCU", "", 400, { "", "", -1 } },
			{ "Niko_USA_DesertMARPATTan", "", 400, { "", "", -1 } },
			{ "Niko_USA_MARPAT", "", 400, { "", "", -1 } },
			{ "Niko_USA_MARPATOD", "", 400, { "", "", -1 } },
			{ "Niko_USA_MARPATPCU", "", 400, { "", "", -1 } },
			{ "cct_uniform_atirador_designado_preto", "", 400, { "", "", -1 } },
			{ "cct_uniform_atirador_designado_branco", "", 400, { "", "", -1 } },
			{ "cct_uniform_spotter_urbano", "", 400, { "", "", -1 } },
			{ "cct_uniform_spotter_deserto", "", 400, { "", "", -1 } },
			{ "cct_uniform_spotter_floresta", "", 400, { "", "", -1 } },
			{ "cct_uniform_spotter_preto", "", 400, { "", "", -1 } },
			{ "cct_uniform_spotter_branco", "", 400, { "", "", -1 } },
			{ "cct_uniform_mecanico_urbano", "", 400, { "", "", -1 } },
			{ "cct_uniform_mecanico_deserto", "", 400, { "", "", -1 } },
			{ "cct_uniform_mecanico_floresta", "", 400, { "", "", -1 } },
			{ "cct_uniform_mecanico_preto", "", 400, { "", "", -1 } },
			{ "cct_uniform_mecanico_branco", "", 400, { "", "", -1 } },
			{ "cct_uniform_esclarecedor_urbano", "", 400, { "", "", -1 } },
		    { "cct_uniform_esclarecedor_deserto", "", 400, { "", "", -1 } },
			{ "cct_uniform_esclarecedor_floresta", "", 400, { "", "", -1 } },
			{ "cct_uniform_esclarecedor_preto", "", 400, { "", "", -1 } },
			{ "cct_uniform_esclarecedor_branco", "", 400, { "", "", -1 } }
		};

		headgear[] = {
			{ "NONE", "Remove Hat", 0, { "", "", -1 } },
			{ "H_ShemagOpen_tan", "", 200, { "", "", -1 } },
			{ "H_Shemag_olive", "", 200, { "", "", -1 } },
			{ "H_ShemagOpen_khk", "", 200, { "", "", -1 } },
			{ "H_HelmetO_ocamo", "", 200, { "", "", -1 } },
			{ "H_MilCap_oucamo", "", 200, { "", "", -1 } },
			{ "H_Orel_Anonymous", "Anonymous", 100, { "", "", -1 } },
			{ "H_Bandanna_camo", "", 100, { "", "", -1 } }
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
			{ "V_TacVest_khk", "", 150, { "", "", -1 } },
			{ "V_BandollierB_cbr", "", 70, { "", "", -1 } },
			{ "V_HarnessO_brn", "", 70, { "", "", -1 } },
			{ "Niko_USA_PlateCarrierL_Tan", "", 150, { "", "", -1 } },
			{ "Niko_USA_PlateCarrierH_Tan", "", 150, { "", "", -1 } },
			{ "Niko_USA_PlateCarrierL_CB", "", 150, { "", "", -1 } },
			{ "Niko_USA_PlateCarrierH_CB", "", 150, { "", "", -1 } },
			{ "Niko_USA_PlateCarrierL_MCam", "", 150, { "", "", -1 } },
			{ "Niko_USA_PlateCarrierH_MCam", "", 150, { "", "", -1 } },
			{ "Niko_USA_PlateCarrierL_AOR1", "", 150, { "", "", -1 } },
			{ "Niko_USA_PlateCarrierH_AOR1", "", 150, { "", "", -1 } },
			{ "Niko_USA_PlateCarrierL_AOR2", "", 150, { "", "", -1 } },
			{ "Niko_USA_PlateCarrierH_AOR2", "", 150, { "", "", -1 } },
			{ "Niko_USA_PlateCarrierL_M81", "", 150, { "", "", -1 } },
			{ "Niko_USA_PlateCarrierH_M81", "", 150, { "", "", -1 } },
			{ "Niko_USA_PlateCarrierL_UCP", "", 150, { "", "", -1 } },
			{ "Niko_USA_PlateCarrierH_UCP", "", 150, { "", "", -1 } },
			{ "cct_vest", "", 100, { "", "", -1 } },
			{ "cct_vest_d", "", 100, { "", "", -1 } },
			{ "cct_vest_f", "", 100, { "", "", -1 } },
			{ "cct_vest_b", "", 100, { "", "", -1 } },
			{ "cct_vest_p", "", 100, { "", "", -1 } }
		};

		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, { "", "", -1 } },
			{ "B_mas_AssaultPack_black", "", 50, { "", "", -1 } },
			{ "O_mas_Bergen_flo", "", 100, { "", "", -1 } },
			{ "O_mas_Bergen_blk", "", 100, { "", "", -1 } },
			{ "O_mas_Bergen_rtan", "", 100, { "", "", -1 } },
			{ "B_mas_AssaultPack_wint", "", 100, { "", "", -1 } },
			{ "B_mas_Bergen_rng", "", 100, { "", "", -1 } },
			{ "B_mas_Kitbag_black", "", 100, { "", "", -1 } },
			{ "B_AssaultPack_cbr", "", 100, { "", "", -1 } },
			{ "B_Kitbag_mcamo", "", 100, { "", "", -1 } },
			{ "B_TacticalPack_oli", "", 100, { "", "", -1 } },
			{ "B_FieldPack_ocamo", "", 100, { "", "", -1 } },
			{ "B_Bergen_sgg", "", 100, { "", "", -1 } },
			{ "B_Kitbag_cbr", "", 100, { "", "", -1 } },
			{ "B_Carryall_oli", "", 100, { "", "", -1 } },
			{ "B_Carryall_khk", "", 100, { "", "", -1 } },
			{ "B_mas_AssaultPack_mul", "", 100, { "", "", -1 } },
			{ "B_mas_Kitbag_mul", "", 500, { "", "", -1 } },
			{ "B_mas_Bergen_mul", "", 500, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_2tone5", "", 60, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_aqua", "Sac Aqua", 60, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_baby_blue", "Sac Bleu Ciel", 60, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_baby_pink", "Sac rose sexy", 60, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_burgundy", "Sac bordeaux", 60, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_carbon", "Sac Charbon", 60, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_cardinal", "Sac Rouge Cardinal", 60, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_dark_green", "Sac Vert foncé", 60, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_green", "Sac Vert", 60, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_grey", "Sac Gris", 60, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_gold", "Sac or", 60, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_lavender", "Sac lavande", 60, { "", "", 1- } },
			{ "CL3_AssaultPack_Full_light_blue", "Sac Bleu", 60, { "", "", 1- } },
			{ "CL3_AssaultPack_Full_light_yellow", "Sac jaune", 60, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_lime", "Sac citron", 60, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_marina_blue", "Sac Bleu foncé", 60, { "", "", 1- } },
			{ "CL3_AssaultPack_Full_navy_blue", "Sac Bleu Marine", 60, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_orange", "Sac orange", 60, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_pink", "Sac rose", 60, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_purple", "Sac Violet", 60, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_red", "Sac Rouge", 60, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_sand", "Sac Sable", 60, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_silver", "Sac Argent", 60, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_skin_black", "Sac Noir", 60, { "", "", -1 } }
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
			{ "U_C_Driver_2", "", 180, { "", "", -1 } },
			{ "U_C_Driver_1", "", 180, { "", "", -1 } },
			{ "U_C_Driver_3", "", 180, { "", "", -1 } },
			{ "U_C_Driver_4", "", 180, { "", "", -1 } },
			{ "C_Ferrari", "", 190, { "", "", -1 } },
			{ "C_Lamborghini", "", 190, { "", "", -1 } }
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
		    { "U_I_G_Story_Protagonist_F", "", 125, { "", "", -1 } },
		    { "IRA_Soldier_Outfit_1", "", 200, { "", "", -1 } },
		    { "IRA_Soldier_Outfit_2", "", 200, { "", "", -1 } },
		    { "IRA_Soldier_Outfit_3", "", 200, { "", "", -1 } },
		    { "IRA_Soldier_Outfit_4", "", 200, { "", "", -1 } },
		    { "IRA_Soldier_Outfit_5", "", 200, { "", "", -1 } },
		    { "IRA_Soldier_Outfit_6", "", 200, { "", "", -1 } },
		    { "IRA_Soldier_Outfit_7", "", 200, { "", "", -1 } },
		    { "IRA_Soldier_Outfit_8", "", 200, { "", "", -1 } },
		    { "UVF_Soldier_Outfit_1", "", 200, { "", "", -1 } },
		    { "UVF_Soldier_Outfit_2", "", 200, { "", "", -1 } },
		    { "UVF_Soldier_Outfit_3", "", 200, { "", "", -1 } },
		    { "UVF_Soldier_Outfit_4", "", 200, { "", "", -1 } },
		    { "UVF_Soldier_Outfit_5", "", 200, { "", "", -1 } },
		    { "UVF_Soldier_Outfit_6", "", 200, { "", "", -1 } }
		};
		
		
		headgear[] = {
			{ "NONE", "Remove Hat", 0, { "", "", -1 } },
			{ "H_ShemagOpen_tan", "", 120, { "", "", -1 } },
			{ "H_Shemag_olive", "", 120, { "", "", -1 } }
		};
		
		goggles[] = {
			{ "NONE", "Remove Glasses", 0, { "", "", -1 } },
			{ "G_Shades_Black", "", 75, { "", "", -1 } },
			{ "IRA_Balaclava_Brown", "", 75, { "", "", -1 } },
			{ "G_Bandanna_beast", "", 75, { "", "", -1 } },
			{ "G_Bandanna_shades", "", 75, { "", "", -1 } }
		};
		
		vests[] = {
			{ "NONE", "Remove Vest", 0, { "", "", -1 } },
			{ "V_TacVest_khk", "", 120, { "", "", -1 } },
			{ "Niko_USA_PlateCarrierL_Tan", "", 190, { "", "", -1 } }
		};
		
		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, { "", "", -1 } },
			{ "B_AssaultPack_cbr", "", 20, { "", "", -1 } },
			{ "B_Kitbag_mcamo", "", 20, { "", "", -1 } },
			{ "B_TacticalPack_oli", "", 30, { "", "", -1 } },
			{ "B_FieldPack_ocamo", "", 30, { "", "", -1 } },
			{ "B_Bergen_sgg", "", 50, { "", "", -1 } },
			{ "B_Kitbag_cbr", "", 50, { "", "", -1 } },
			{ "B_Carryall_oli", "", 70, { "", "", -1 } },
			{ "B_Carryall_khk", "", 70, { "", "", -1 } },
			{ "B_Hello_Kitty", "Sac Hello Kitty", 69, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_2tone1", "", 60, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_2tone2", "", 60, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_2tone3", "", 60, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_2tone3", "", 60, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_2tone5", "", 60, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_aqua", "Sac Aqua", 60, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_baby_blue", "Sac Bleu Ciel", 60, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_baby_pink", "Sac rose sexy", 60, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_burgundy", "Sac bordeaux", 60, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_carbon", "Sac Charbon", 60, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_cardinal", "Sac Rouge Cardinal", 60, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_dark_green", "Sac Vert foncé", 60, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_green", "Sac Vert", 60, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_grey", "Sac Gris", 60, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_gold", "Sac or", 60, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_lavender", "Sac lavande", 60, { "", "", 1- } },
			{ "CL3_AssaultPack_Full_light_blue", "Sac Bleu", 60, { "", "", 1- } },
			{ "CL3_AssaultPack_Full_light_yellow", "Sac jaune", 60, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_lime", "Sac citron", 60, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_marina_blue", "Sac Bleu foncé", 60, { "", "", 1- } },
			{ "CL3_AssaultPack_Full_navy_blue", "Sac Bleu Marine", 60, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_orange", "Sac orange", 60, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_pink", "Sac rose", 60, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_purple", "Sac Violet", 60, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_red", "Sac Rouge", 60, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_sand", "Sac Sable", 60, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_silver", "Sac Argent", 60, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_skin_black", "Sac Noir", 60, { "", "", -1 } }
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
			{ "B_AssaultPack_cbr", "", 20, { "", "", -1 } },
			{ "B_Kitbag_mcamo", "", 20, { "", "", -1 } },
			{ "B_TacticalPack_oli", "", 30, { "", "", -1 } },
			{ "B_FieldPack_ocamo", "", 30, { "", "", -1 } },
			{ "B_Bergen_sgg", "", 50, { "", "", -1 } },
			{ "B_Kitbag_cbr", "", 50, { "", "", -1 } },
			{ "B_Carryall_oli", "", 70, { "", "", -1 } },
			{ "B_Carryall_khk", "", 70, { "", "", -1 } },
			{ "B_Hello_Kitty", "Sac Hello Kitty", 69, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_2tone1", "", 60, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_2tone2", "", 60, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_2tone3", "", 60, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_2tone3", "", 60, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_2tone5", "", 60, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_aqua", "Sac Aqua", 60, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_baby_blue", "Sac Bleu Ciel", 60, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_baby_pink", "Sac rose sexy", 60, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_burgundy", "Sac bordeaux", 60, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_carbon", "Sac Charbon", 60, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_cardinal", "Sac Rouge Cardinal", 60, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_dark_green", "Sac Vert foncé", 60, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_green", "Sac Vert", 60, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_grey", "Sac Gris", 60, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_gold", "Sac or", 60, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_lavender", "Sac lavande", 60, { "", "", 1- } },
			{ "CL3_AssaultPack_Full_light_blue", "Sac Bleu", 60, { "", "", 1- } },
			{ "CL3_AssaultPack_Full_light_yellow", "Sac jaune", 60, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_lime", "Sac citron", 60, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_marina_blue", "Sac Bleu foncé", 60, { "", "", 1- } },
			{ "CL3_AssaultPack_Full_navy_blue", "Sac Bleu Marine", 60, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_orange", "Sac orange", 60, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_pink", "Sac rose", 60, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_purple", "Sac Violet", 60, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_red", "Sac Rouge", 60, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_sand", "Sac Sable", 60, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_silver", "Sac Argent", 60, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_skin_black", "Sac Noir", 60, { "", "", -1 } }
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
			{ "G_Shades_Black", "", 100, { "", "", -1 } },
			{ "G_Shades_Blue", "", 100, { "", "", -1 } },
			{ "IRA_Balaclava_Brown", "", 100, { "", "", -1 } },
			{ "G_Balaclava_blk", "", 100, { "", "", -1 } },
			{ "G_Bandanna_beast", "", 100, { "", "", -1 } },
			{ "G_Aviator", "", 100, { "", "", -1 } },
			{ "G_Bandanna_shades", "", 100, { "", "", -1 } }
		};
		
		vests[] = {
			{ "NONE", "Remove Vest", 0, { "", "", -1 } },
			{ "V_PlateCarrier1_blk", "", 250, { "", "", -1 } },
			{ "cct_vest_p", "", 250, { "", "", -1 } }
		};
		
		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, { "", "", -1 } },
			{ "B_mas_AssaultPack_black", "", 20, { "", "", -1 } },
			{ "O_mas_Bergen_flo", "", 70, { "", "", -1 } },
			{ "O_mas_Bergen_blk", "", 70, { "", "", -1 } },
			{ "O_mas_Bergen_rtan", "", 70, { "", "", -1 } },
			{ "B_mas_AssaultPack_wint", "", 40, { "", "", -1 } },
			{ "B_mas_Bergen_rng", "", 70, { "", "", -1 } },
			{ "B_mas_Kitbag_black", "", 70, { "", "", -1 } },
			{ "B_AssaultPack_blk", "", 300, { "", "", -1 } },
			{ "B_FieldPack_blk", "", 500, { "", "", -1 } },
			{ "B_Bergen_blk", "", 500, { "", "", -1 } }
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
			{ "U_Rangemaster", "Uniforme EMS", 10, { "", "", -1 } },
			{ "U_C_FireFighter", "Uniforme Pompier", 10, { "", "", -1 } }
			};
		
		headgear[] = {
			{ "NONE", "Remove Hat", 0, { "", "", -1 } },
			{ "H_Orel_FireFighter", "Casque Pompier", 10, { "", "", -1 } },
			{ "H_Orel_FireFighter_Gaz", "Casque Pompier Gaz", 10, { "", "", -1 } }
		};
		
		goggles[] = {
			{ "NONE", "Remove Glasses", 0, { "", "", -1 } }
		};
		
		vests[] = {
			{ "NONE", "Remove Vest", 0, { "", "", -1 } },
			{ "V_Firefighter", "Veste Pompier", 30, { "", "", -1 } }
		};
		
		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, { "", "", -1 } },
			{ "B_Kitbag_cbr", "", 10, { "", "", -1 } },
			{ "B_FieldPack_cbr", "", 10, { "", "", -1 } },
			{ "CL3_AssaultPack_Full_skin_black", "Sac Noir", 10, { "", "", -1 } }
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
			{ "U_B_SpecopsUniform_sgg", "Polaire Gendarme", 30000, { "", "", -1 } },
			{ "U_B_CombatUniform_mcam_worn", "Grand froid Gendarme", 30000, { "", "", -1 } },
			{ "U_O_OfficerUniform_ocamo", "Motard Gendarme", 30000, { "", "", -1 } },
			{ "U_B_Wetsuit", "Tenue de plongée", 30000, { "", "", -1 } },
			{ "U_C_GIGN", "", 50000, { "", "", -1 } }
	    };
		
		headgear[] = {
			{ "NONE", "Remove Hat", 0, { "", "", -1 } },
			{ "H_Orel_Swat", "Casque du GIGN", 40000, { "", "", -1 } },
			{ "H_HelmetB_plain_mcamo", "", 40000, { "", "", -1 } },
			{ "H_RacingHelmet_1_blue_F", "Casque Moto", 40000, { "", "", -1 } },
			{ "H_Booniehat_mcamo", "", 40000, { "", "", -1 } },
			{ "H_MilCap_mcamo", "", 40000, { "", "", -1 } }
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
			{ "GDM_Vest_Mpg", "", 30000, { "", "", -1 } },
			{ "V_TacVest_GIGN", "Veste du GIGN", 30000, { "", "", -1 } },
			{ "V_PlateCarrier1_blk", "Benji Balistique", 30000, { "", "", -1 } }
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
	
	class pca {
		title = "Groupe PCA";
		license = "pca";
		side = "cop";
		
		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "U_Rangemaster", "PCA Tenue", 200, { "", "", -1 } }
	    };
		
		headgear[] = {
			{ "NONE", "Remove Hat", 0, { "", "", -1 } },
			{ "H_Cap_headphones", "", 100, { "", "", -1 } }
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
			{ "V_TacVestIR_blk", "PCA Vest", 125, { "", "", -1 } }
		};
		
		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, { "", "", -1 } },
			{ "B_AssaultPack_cbr", "", 30, { "", "", -1 } },
			{ "B_Kitbag_mcamo", "", 40, { "", "", -1 } },
			{ "B_TacticalPack_oli", "", 40, { "", "", -1 } },
			{ "B_FieldPack_ocamo", "", 70, { "", "", -1 } },
			{ "B_Bergen_sgg", "", 70, { "", "", -1 } },
			{ "B_Kitbag_cbr", "", 70, { "", "", -1 } },
			{ "B_Carryall_oli", "", 70, { "", "", -1 } },
			{ "B_Carryall_khk", "", 70, { "", "", -1 } }
		};
	};
};