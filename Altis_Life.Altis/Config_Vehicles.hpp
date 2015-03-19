class CarShops {
	/*
		Format:
		{ Classname, rental price, license required, { varname, >= value } }

		{ varname, >= value} this is a "level" requirement mainly used by cops and rebels, do not fill this in if you are not utilizing it.
	*/
	class occ_car {
		side = "civ";
		vehicles[] = {
			{ "B_Quadbike_01_F", 650, "driver" }, 
			{ "cl3_lada_white", 750, "driver" }, 
			{ "cl3_volha_black", 950, "driver" },
			{ "cl3_golf_mk2_burgundy", 950, "driver" },
			{ "cl3_civic_vti_aqua", 950, "driver" },
			{ "cl3_polo_gti_green", 1100, "driver" },
			{ "cl3_defender_110_red", 1100, "driver" },
			{ "A3L_GrandCaravan", 3500, "driver" },
			{ "exxpensive_2cv_base", 2400, "driver" },
			{ "exxpensive_chevrolet_caprice_base", 2400, "driver" },
			{ "exxpensive_cadillac_sedan_base", 2400, "driver" },
			{ "exxpensive_volvo_242_base", 2400, "driver" },
			{ "exxpensive_mini_cooper_base", 5000, "driver" },
			{ "exxpensive_golf_IV_base", 5000, "driver" },
			{ "A3L_PuntoBlue", 5000, "driver" },
			{ "A3L_PuntoRed", 5000, "driver" },
			{ "A3L_PuntoBlack", 5000, "driver" },
			{ "A3L_PuntoWhite", 3500, "driver" },
			{ "A3L_PuntoGrey", 3500, "driver" },
			{ "A3L_VolksWagenGolfGTired", 3500, "driver" },
			{ "A3L_VolksWagenGolfGTiblack", 3500, "driver" },
			{ "A3L_VolksWagenGolfGTiblue", 4200, "driver" },
			{ "A3L_VolksWagenGolfGTiwhite", 4200, "driver" }
		};
	};
	
	class civ_car {
		side = "civ";
		vehicles[] = {
			{ "Orel_Quad", 650, "driver" }, 
			{ "C_Hatchback_01_F", 750, "driver" }, 
			{ "Monster_Offroad", 950, "driver" },
			{ "Gay_Offroad", 950, "driver" },
			{ "Licorne_Offroad", 950, "driver" },
			{ "Batman_suv", 1100, "driver" },
			{ "Carbon_suv", 1100, "driver" },
			{ "C_Van_01_transport_F", 3500, "driver" },
			{ "DAR_ChallengerCivBlack", 2400, "driver" },
			{ "DAR_ChallengerCivOrange", 2400, "driver" },
			{ "DAR_ChallengerCivRed", 2400, "driver" },
			{ "DAR_ChallengerCivWhite", 2400, "driver" },
			{ "DAR_TahoeCivBlack", 5000, "driver" },
			{ "DAR_TahoeCivBlue", 5000, "driver" },
			{ "DAR_TahoeCivRed", 5000, "driver" },
			{ "DAR_TahoeCiv", 5000, "driver" },
			{ "DAR_TahoeCivSilver", 5000, "driver" },
			{ "DAR_FusionCivBlack", 3500, "driver" },
			{ "DAR_FusionCivBlue", 3500, "driver" },
			{ "DAR_FusionCivRed", 3500, "driver" },
			{ "DAR_FusionCiv", 3500, "driver" },
			{ "SAL_AudiCiv", 4200, "driver" },
			{ "SAL_AudiCivBlack", 4200, "driver" },
			{ "DAR_M3CivGrey", 6500, "driver" },
			{ "DAR_M3CivBlack", 6500, "driver" },
			{ "DAR_M3CivWhite", 6500, "driver" },
			{ "exxpensive_BMWM3E46_base", 7050, "driver" },
			{ "exxpensive_m5_e34_base", 8050, "driver" },
			{ "civ_mondeo_Aqua", 6000, "driver" },
			{ "civ_mondeo_BabyBlue", 6000, "driver" },
			{ "civ_mondeo_Black", 6000, "driver" },
			{ "civ_mondeo_Burgundy", 6000, "driver" },
			{ "civ_mondeo_CardinalBurgundy", 6000, "driver" },
			{ "civ_mondeo_DarkGreen", 6000, "driver" },
			{ "civ_mondeo_Gold", 6000, "driver" },
			{ "civ_mondeo_Lavendel", 6000, "driver" },
			{ "civ_mondeo_LightYellow", 6000, "driver" },
			{ "civ_mondeo_MarineBlue", 6000, "driver" },
			{ "civ_mondeo_Orange", 6000, "driver" },
			{ "civ_mondeo_Pink", 6000, "driver" },
			{ "civ_mondeo_Red", 6000, "driver" },
			{ "civ_mondeo_Silver", 6000, "driver" },
			{ "civ_mondeo_Violet", 6000, "driver" },
			{ "civ_mondeo_White", 6000, "driver" },
			{ "civ_mondeo_Yellow", 6000, "driver" },
			{ "DAR_TaurusCiv", 6000, "driver" },
			{ "DAR_TaurusCivBlue", 6000, "driver" },
			{ "DAR_TaurusCivBlack", 6000, "driver" },
			{ "SAL_IROCCivBlue", 8500, "driver" },
			{ "SAL_IROCCivBlack", 8500, "driver" },
			{ "SAL_IROCCivSilver", 8500, "driver" },
			{ "SAL_IROCCivRed", 8500, "driver" },
			{ "SAL_IROCCiv", 8500, "driver" }
		};
	};
	
	class civ_luxe {
		side = "civ";
		vehicles[] = {
			{ "cl3_suv_black", 18000 , "driver" },
			{ "A3L_F350Black", 22000, "driver" },
			{ "A3L_ChargerWhite", 25000, "driver" },
			{ "A3L_ChargerBlack", 25000, "driver" },
			{ "cl3_taurus_gold", 25000, "driver" },
			{ "cl3_taurus_silver", 25000, "driver" },
			{ "cl3_taurus_black", 25000, "driver" },
			{ "cl3_taurus_babyblue", 25000, "driver" },
			{ "cl3_taurus_babypink", 25000, "driver" },
			{ "cl3_taurus_blue", 25000, "driver" },
			{ "cl3_taurus_burgundy", 25000, "driver" },
			{ "cl3_taurus_cardinal", 25000, "driver" },
			{ "cl3_taurus_dark_green", 25000, "driver" },
			{ "cl3_taurus_green", 25000, "driver" },
			{ "cl3_taurus_grey", 25000, "driver" },
			{ "cl3_taurus_lavender", 25000, "driver" },
			{ "cl3_taurus_light_blue", 25000, "driver" },
			{ "cl3_taurus_light_yellow", 25000, "driver" },
			{ "cl3_taurus_lime", 25000, "driver" },
			{ "cl3_taurus_marina_blue", 25000, "driver" },
			{ "cl3_taurus_navy_blue", 25000, "driver" },
			{ "cl3_taurus_orange", 25000, "driver" },
			{ "cl3_taurus_purple", 25000, "driver" },
			{ "cl3_taurus_red", 25000, "driver" },
			{ "cl3_taurus_sand", 25000, "driver" },
			{ "cl3_taurus_violet", 25000, "driver" },
			{ "cl3_taurus_white", 25000, "driver" },
			{ "cl3_taurus_yellow", 25000, "driver" },
			{ "cl3_impreza_road_aqua", 65000, "driver" },
			{ "cl3_impreza_road_babyblue", 65000, "driver" },
			{ "cl3_impreza_road_babypink", 65000, "driver" },
			{ "cl3_impreza_road_black", 65000, "driver" },
			{ "cl3_impreza_road_blue", 65000, "driver" },
			{ "cl3_impreza_road_cardinal", 65000, "driver" },
			{ "cl3_impreza_road_dark_green", 65000, "driver" },
			{ "cl3_impreza_road_gold", 65000, "driver" },
			{ "cl3_impreza_road_green", 65000, "driver" },
			{ "cl3_impreza_road_grey", 65000, "driver" },
			{ "cl3_impreza_road_lavender", 65000, "driver" },
			{ "cl3_impreza_road_light_blue", 65000, "driver" },
			{ "cl3_impreza_road_light_yellow", 65000, "driver" },
			{ "cl3_impreza_road_lime", 65000, "driver" },
			{ "cl3_impreza_road_marina_blue", 65000, "driver" },
			{ "cl3_impreza_road_navy_blue", 65000, "driver" },
			{ "cl3_impreza_road_orange", 65000, "driver" },
			{ "cl3_impreza_road_purple", 65000, "driver" },
			{ "cl3_impreza_road_red", 65000, "driver" },
			{ "cl3_impreza_road_sand", 65000, "driver" },
			{ "cl3_impreza_road_silver", 65000, "driver" },
			{ "cl3_impreza_road_violet", 65000, "driver" },
			{ "cl3_impreza_road_white", 65000, "driver" },
			{ "cl3_z4_2008_gold", 28000, "driver" },
			{ "cl3_z4_2008_silver", 28000, "driver" },
			{ "cl3_z4_2008_black", 28000, "driver" },
			{ "cl3_z4_2008_babyblue", 28000, "driver" },
			{ "cl3_z4_2008_babypink", 28000, "driver" },
			{ "cl3_z4_2008_blue", 28000, "driver" },
			{ "cl3_z4_2008_burgundy", 28000, "driver" },
			{ "cl3_z4_2008_cardinal", 28000, "driver" },
			{ "cl3_z4_2008_dark_green", 28000, "driver" },
			{ "cl3_z4_2008_green", 28000, "driver" },
			{ "cl3_z4_2008_grey", 28000, "driver" },
			{ "cl3_z4_2008_lavender", 28000, "driver" },
			{ "cl3_z4_2008_light_blue", 28000, "driver" },
			{ "cl3_z4_2008_light_yellow", 28000, "driver" },
			{ "cl3_z4_2008_lime", 28000, "driver" },
			{ "cl3_z4_2008_marina_blue", 28000, "driver" },
			{ "cl3_z4_2008_navy_blue", 28000, "driver" },
			{ "cl3_z4_2008_orange", 28000, "driver" },
			{ "cl3_z4_2008_purple", 28000, "driver" },
			{ "cl3_z4_2008_red", 28000, "driver" },
			{ "cl3_z4_2008_sand", 28000, "driver" },
			{ "cl3_z4_2008_violet", 28000, "driver" },
			{ "cl3_z4_2008_white", 28000, "driver" },
			{ "cl3_z4_2008_yellow", 28000, "driver" },
			{ "A3L_EvoXWhite", 28000, "driver" },
			{ "A3L_EvoXBlack", 28000, "driver" },
			{ "A3L_EvoXRed", 28000, "driver" },
			{ "cl3_dodge_chargerum_f_black", 45000, "driver" },
			{ "cl3_dodge_chargerum_f_white", 45000, "driver" },
			{ "cl3_dodge_chargerum_f_orange", 45000, "driver" },
			{ "cl3_458_gold", 65000, "driver" },
			{ "cl3_458_silver", 65000, "driver" },
			{ "cl3_458_black", 65000, "driver" },
			{ "cl3_458_babyblue", 65000, "driver" },
			{ "cl3_458_babypink", 65000, "driver" },
			{ "cl3_458_blue", 65000, "driver" },
			{ "cl3_458_burgundy", 65000, "driver" },
			{ "cl3_458_cardinal", 65000, "driver" },
			{ "cl3_458_dark_green", 65000, "driver" },
			{ "cl3_458_green", 65000, "driver" },
			{ "cl3_458_lavender", 65000, "driver" },
			{ "cl3_458_light_blue", 65000, "driver" },
			{ "cl3_458_light_yellow", 65000, "driver" },
			{ "cl3_458_lime", 65000, "driver" },
			{ "cl3_458_marina_blue", 65000, "driver" },
			{ "cl3_458_grey", 65000, "driver" },
			{ "cl3_458_navy_blue", 65000, "driver" },
			{ "cl3_458_orange", 65000, "driver" },
			{ "cl3_458_purple", 65000, "driver" },
			{ "cl3_458_red", 65000, "driver" },
			{ "cl3_458_sand", 65000, "driver" },
			{ "cl3_458_violet", 65000, "driver" },
			{ "cl3_458_white", 65000, "driver" },
			{ "cl3_458_yellow", 65000, "driver" },
			{ "cl3_murcielago_gold", 65000, "driver" },
			{ "cl3_murcielago_silver", 65000, "driver" },
			{ "cl3_murcielago_black", 65000, "driver" },
			{ "cl3_murcielago_babyblue", 65000, "driver" },
			{ "cl3_murcielago_babypink", 65000, "driver" },
			{ "cl3_murcielago_blue", 65000, "driver" },
			{ "cl3_murcielago_burgundy", 65000, "driver" },
			{ "cl3_murcielago_cardinal", 65000, "driver" },
			{ "cl3_murcielago_dark_green", 65000, "driver" },
			{ "cl3_murcielago_green", 65000, "driver" },
			{ "cl3_murcielago_lavender", 65000, "driver" },
			{ "cl3_murcielago_light_blue", 65000, "driver" },
			{ "cl3_murcielago_light_yellow", 65000, "driver" },
			{ "cl3_murcielago_lime", 65000, "driver" },
			{ "cl3_murcielago_marina_blue", 65000, "driver" },
			{ "cl3_murcielago_grey", 65000, "driver" },
			{ "cl3_murcielago_navy_blue", 65000, "driver" },
			{ "cl3_murcielago_orange", 65000, "driver" },
			{ "cl3_murcielago_purple", 65000, "driver" },
			{ "cl3_murcielago_red", 65000, "driver" },
			{ "cl3_murcielago_sand", 65000, "driver" },
			{ "cl3_murcielago_violet", 65000, "driver" },
			{ "cl3_murcielago_white", 65000, "driver" },
			{ "cl3_murcielago_yellow", 65000, "driver" },
			{ "cl3_lamborghini_gt1_gold", 65000, "driver" },
			{ "cl3_lamborghini_gt1_silver", 65000, "driver" },
			{ "cl3_lamborghini_gt1_black", 65000, "driver" },
			{ "cl3_lamborghini_gt1_babyblue", 65000, "driver" },
			{ "cl3_lamborghini_gt1_babypink", 65000, "driver" },
			{ "cl3_lamborghini_gt1_blue", 65000, "driver" },
			{ "cl3_lamborghini_gt1_burgundy", 65000, "driver" },
			{ "cl3_lamborghini_gt1_cardinal", 65000, "driver" },
			{ "cl3_lamborghini_gt1_dark_green", 65000, "driver" },
			{ "cl3_lamborghini_gt1_green", 65000, "driver" },
			{ "cl3_lamborghini_gt1_lavender", 65000, "driver" },
			{ "cl3_lamborghini_gt1_light_blue", 65000, "driver" },
			{ "cl3_lamborghini_gt1_light_yellow", 65000, "driver" },
			{ "cl3_lamborghini_gt1_lime", 65000, "driver" },
			{ "cl3_lamborghini_gt1_marina_blue", 65000, "driver" },
			{ "cl3_lamborghini_gt1_grey", 65000, "driver" },
			{ "cl3_lamborghini_gt1_navy_blue", 65000, "driver" },
			{ "cl3_lamborghini_gt1_orange", 65000, "driver" },
			{ "cl3_lamborghini_gt1_purple", 65000, "driver" },
			{ "cl3_lamborghini_gt1_red", 65000, "driver" },
			{ "cl3_lamborghini_gt1_sand", 65000, "driver" },
			{ "cl3_lamborghini_gt1_violet", 65000, "driver" },
			{ "cl3_lamborghini_gt1_white", 65000, "driver" },
			{ "cl3_lamborghini_gt1_yellow", 65000, "driver" },
			{ "cl3_reventon_gold", 65000, "driver" },
			{ "cl3_reventon_silver", 65000, "driver" },
			{ "cl3_reventon_black", 65000, "driver" },
			{ "cl3_reventon_babyblue", 65000, "driver" },
			{ "cl3_reventon_babypink", 65000, "driver" },
			{ "cl3_reventon_blue", 65000, "driver" },
			{ "cl3_reventon_burgundy", 65000, "driver" },
			{ "cl3_reventon_cardinal", 65000, "driver" },
			{ "cl3_reventon_dark_green", 65000, "driver" },
			{ "cl3_reventon_green", 65000, "driver" },
			{ "cl3_reventon_lavender", 65000, "driver" },
			{ "cl3_reventon_light_blue", 65000, "driver" },
			{ "cl3_reventon_light_yellow", 65000, "driver" },
			{ "cl3_reventon_lime", 65000, "driver" },
			{ "cl3_reventon_marina_blue", 65000, "driver" },
			{ "cl3_reventon_grey", 65000, "driver" },
			{ "cl3_reventon_navy_blue", 65000, "driver" },
			{ "cl3_reventon_orange", 65000, "driver" },
			{ "cl3_reventon_purple", 65000, "driver" },
			{ "cl3_reventon_red", 65000, "driver" },
			{ "cl3_reventon_sand", 65000, "driver" },
			{ "cl3_reventon_violet", 65000, "driver" },
			{ "cl3_reventon_white", 65000, "driver" },
			{ "cl3_reventon_yellow", 65000, "driver" },
			{ "cl3_carrera_gt_gold", 65000, "driver" },
			{ "cl3_carrera_gt_silver", 65000, "driver" },
			{ "cl3_carrera_gt_black", 65000, "driver" },
			{ "cl3_carrera_gt_babyblue", 65000, "driver" },
			{ "cl3_carrera_gt_babypink", 65000, "driver" },
			{ "cl3_carrera_gt_blue", 65000, "driver" },
			{ "cl3_carrera_gt_burgundy", 65000, "driver" },
			{ "cl3_carrera_gt_cardinal", 65000, "driver" },
			{ "cl3_carrera_gt_dark_green", 65000, "driver" },
			{ "cl3_carrera_gt_green", 65000, "driver" },
			{ "cl3_carrera_gt_lavender", 65000, "driver" },
			{ "cl3_carrera_gt_light_blue", 65000, "driver" },
			{ "cl3_carrera_gt_light_yellow", 65000, "driver" },
			{ "cl3_carrera_gt_lime", 65000, "driver" },
			{ "cl3_carrera_gt_marina_blue", 65000, "driver" },
			{ "cl3_carrera_gt_grey", 65000, "driver" },
			{ "cl3_carrera_gt_navy_blue", 65000, "driver" },
			{ "cl3_carrera_gt_orange", 65000, "driver" },
			{ "cl3_carrera_gt_purple", 65000, "driver" },
			{ "cl3_carrera_gt_red", 65000, "driver" },
			{ "cl3_carrera_gt_sand", 65000, "driver" },
			{ "cl3_carrera_gt_violet", 65000, "driver" },
			{ "cl3_carrera_gt_white", 65000, "driver" },
			{ "cl3_carrera_gt_yellow", 65000, "driver" },
			{ "cl3_q7_gold", 65000, "driver" },
			{ "cl3_q7_silver", 65000, "driver" },
			{ "cl3_q7_black", 65000, "driver" },
			{ "cl3_q7_babyblue", 65000, "driver" },
			{ "cl3_q7_babypink", 65000, "driver" },
			{ "cl3_q7_blue", 65000, "driver" },
			{ "cl3_q7_burgundy", 65000, "driver" },
			{ "cl3_q7_cardinal", 65000, "driver" },
			{ "cl3_q7_dark_green", 65000, "driver" },
			{ "cl3_q7_green", 65000, "driver" },
			{ "cl3_q7_lavender", 65000, "driver" },
			{ "cl3_q7_light_blue", 65000, "driver" },
			{ "cl3_q7_light_yellow", 65000, "driver" },
			{ "cl3_q7_lime", 65000, "driver" },
			{ "cl3_q7_marina_blue", 65000, "driver" },
			{ "cl3_q7_grey", 65000, "driver" },
			{ "cl3_q7_navy_blue", 65000, "driver" },
			{ "cl3_q7_orange", 65000, "driver" },
			{ "cl3_q7_purple", 65000, "driver" },
			{ "cl3_q7_red", 65000, "driver" },
			{ "cl3_q7_sand", 65000, "driver" },
			{ "cl3_q7_violet", 65000, "driver" },
			{ "cl3_q7_white", 65000, "driver" },
			{ "cl3_q7_yellow", 65000, "driver" },
			{ "cl3_s5_gold", 65000, "driver" },
			{ "cl3_s5_silver", 65000, "driver" },
			{ "cl3_s5_black", 65000, "driver" },
			{ "cl3_s5_babyblue", 65000, "driver" },
			{ "cl3_s5_babypink", 65000, "driver" },
			{ "cl3_s5_blue", 65000, "driver" },
			{ "cl3_s5_burgundy", 65000, "driver" },
			{ "cl3_s5_cardinal", 65000, "driver" },
			{ "cl3_s5_dark_green", 65000, "driver" },
			{ "cl3_s5_green", 65000, "driver" },
			{ "cl3_s5_lavender", 65000, "driver" },
			{ "cl3_s5_light_blue", 65000, "driver" },
			{ "cl3_s5_light_yellow", 65000, "driver" },
			{ "cl3_s5_lime", 65000, "driver" },
			{ "cl3_s5_marina_blue", 65000, "driver" },
			{ "cl3_s5_grey", 65000, "driver" },
			{ "cl3_s5_navy_blue", 65000, "driver" },
			{ "cl3_s5_orange", 65000, "driver" },
			{ "cl3_s5_purple", 65000, "driver" },
			{ "cl3_s5_red", 65000, "driver" },
			{ "cl3_s5_sand", 65000, "driver" },
			{ "cl3_s5_violet", 65000, "driver" },
			{ "cl3_s5_white", 65000, "driver" },
			{ "cl3_s5_yellow", 65000, "driver" },
			{ "cl3_dbs_volante_gold", 65000, "driver" },
			{ "cl3_dbs_volante_silver", 65000, "driver" },
			{ "cl3_dbs_volante_black", 65000, "driver" },
			{ "cl3_dbs_volante_babyblue", 65000, "driver" },
			{ "cl3_dbs_volante_babypink", 65000, "driver" },
			{ "cl3_dbs_volante_blue", 65000, "driver" },
			{ "cl3_dbs_volante_burgundy", 65000, "driver" },
			{ "cl3_dbs_volante_cardinal", 65000, "driver" },
			{ "cl3_dbs_volante_dark_green", 65000, "driver" },
			{ "cl3_dbs_volante_green", 65000, "driver" },
			{ "cl3_dbs_volante_lavender", 65000, "driver" },
			{ "cl3_dbs_volante_light_blue", 65000, "driver" },
			{ "cl3_dbs_volante_light_yellow", 65000, "driver" },
			{ "cl3_dbs_volante_lime", 65000, "driver" },
			{ "cl3_dbs_volante_marina_blue", 65000, "driver" },
			{ "cl3_dbs_volante_grey", 65000, "driver" },
			{ "cl3_dbs_volante_navy_blue", 65000, "driver" },
			{ "cl3_dbs_volante_orange", 65000, "driver" },
			{ "cl3_dbs_volante_purple", 65000, "driver" },
			{ "cl3_dbs_volante_red", 65000, "driver" },
			{ "cl3_dbs_volante_sand", 65000, "driver" },
			{ "cl3_dbs_volante_violet", 65000, "driver" },
			{ "cl3_dbs_volante_white", 65000, "driver" },
			{ "cl3_dbs_volante_yellow", 65000, "driver" },
			{ "cl3_veyron_blk_wht", 268000, "driver" },
			{ "cl3_veyron_wht_lwht", 268000, "driver" }
		
		};
	};
	
	class civ_car_luxe {
		side = "civ";
		vehicles[] = {
			{ "A3L_F350Black", 20000 , "driver" },
			{ "A3L_F350Blue", 20000, "driver" },
			{ "A3L_F350Red", 20000, "driver" },
			{ "A3L_F350White", 20000, "driver" },
			{ "A3L_F350Mex", 20000, "driver" },
			{ "S_Rangerover_Red", 22000, "driver" },
			{ "S_Rangerover_Black", 22000, "driver" },
			{ "S_Rangerover_Blue", 22000, "driver" },
			{ "S_Rangerover_Green", 22000, "driver" },
			{ "S_Rangerover_Purple", 22000, "driver" },
			{ "S_Rangerover_Grey", 22000, "driver" },
			{ "S_Rangerover_Orange", 22000, "driver" },
			{ "S_Rangerover_White", 22000, "driver" },
			{ "Orel_F308", 26000, "driver" },
			{ "exxpensive_jaguar_base", 66500, "driver" },
			{ "exxpensive_mercedes_sls_base", 65000, "driver" },
			{ "exxpensive_ford_raptor_base", 62500, "driver" },
			{ "exxpensive_Koenigsegg_base", 78500, "driver" },
			{ "exxpensive_ferrari_458_base", 78500, "driver" },
			{ "exxpensive_aventador_base", 78500, "driver" },
			{ "exxpensive_bugatti_base", 88500, "driver" },
			{ "exxpensive_audi_R8_base", 60500, "driver" },
			{ "exxpensive_chrysler_300c_base", 68500, "driver" },
			{ "exxpensive_aston_martin_v_base", 68500, "driver" },
			{ "exxpensive_Audi_q7_base", 48500, "driver" },
			{ "exxpensive_porsche_911_base", 61500, "driver" },
			{ "S_Skyline_Red", 63500, "driver" },
			{ "S_Skyline_Blue", 63500, "driver" },
			{ "S_Skyline_Black", 63500, "driver" },
			{ "S_Skyline_Yellow", 63500, "driver" },
			{ "S_Skyline_Purple", 63500, "driver" },
			{ "S_Skyline_White", 63500, "driver" },
			{ "Jonzie_Viper", 63500, "driver" },
			{ "A3L_RX7_base", 11500, "driver" }
			
			
		};
	};
	
	class AutoWP {
		side = "civ";
		vehicles[] = {
			{ "WP_SUV_01_F", 3500 , "wp" },
			{ "WP_Offroad", 4500, "wp" },
			{ "B_MRAP_01_F", 10000, "wp" },
			{ "B_Heli_Light_01_F", 30000, "wp" },
			{ "O_Heli_Light_02_unarmed_F", 100000, "wp" }
		};
	};

	class kart_shop {
		side = "civ";
		vehicles[] = {
			{ "C_Kart_01_Blu_F", 250 , "driver" },
			{ "C_Kart_01_Fuel_F", 250, "driver" },
			{ "C_Kart_01_Red_F", 250, "driver" },
			{ "C_Kart_01_Vrana_F", 250, "driver" }
		};
	};

	class med_shop {
		side = "med";
		vehicles[] = {
			{ "C_Offroad_01_F", 10000, "" },
			{ "I_Truck_02_medical_F", 25000, "" },
			{ "O_Truck_03_medical_F", 45000, "" },
			{ "B_Truck_01_medical_F", 60000, "" }
		};
	};

	class med_air_hs {
		side = "med";
		vehicles[] = {
			{ "B_Heli_Light_01_F", 50000, "mAir" },
			{ "O_Heli_Light_02_unarmed_F", 75000, "mAir" }
		};
	};

	class civ_truck {
		side = "civ";
		vehicles[] = {
			{ "C_Van_01_box_F", 4500, "truck" },
			{ "exxpensive_camion1_base", 6000, "truck" },
			{ "exxpensive_camion2_base", 6000, "truck" },
			{ "I_Truck_02_transport_F", 19000, "truck" },
			{ "I_Truck_02_covered_F", 25000, "truck" },
			{ "B_Truck_01_transport_F", 30000, "truck" },
			{ "cl3_mackr_gold", 70500, "truck" },
			{ "cl3_mackr_black", 70500, "truck" },
			{ "cl3_mackr_black_white", 70500, "truck" },
			{ "cl3_mackr_blue", 70500, "truck" },
			{ "cl3_mackr_green_white", 70500, "truck" },
			{ "cl3_mackr_multi_color", 70500, "truck" },
			{ "cl3_mackr_optimus", 70500, "truck" },
			{ "cl3_mackr_orange_white", 70500, "truck" },
			{ "cl3_mackr_flat_gold", 80500, "truck" },
			{ "cl3_mackr_flat_black", 80500, "truck" },
			{ "cl3_mackr_flat_black_white", 80500, "truck" },
			{ "cl3_mackr_flat_blue", 80500, "truck" },
			{ "cl3_mackr_flat_green_white", 80500, "truck" },
			{ "cl3_mackr_flat_multi_color", 80500, "truck" },
			{ "cl3_mackr_flat_optimus", 80500, "truck" },
			{ "cl3_mackr_flat_orange_white", 80500, "truck" },
			{ "cl3_mackr_del_gold", 200500, "truck" },
			{ "cl3_mackr_del_black_white", 200500, "truck" },
			{ "cl3_mackr_del_blue", 200500, "truck" },
			{ "cl3_mackr_del_green_white", 200500, "truck" },
			{ "cl3_mackr_del_multi_color", 200500, "truck" },
			{ "cl3_mackr_del_optimus", 200500, "truck" },
			{ "cl3_mackr_del_orange_white", 200500, "truck" }
		};
	};

	class car_taxi {
		side = "civ";
		vehicles[] = {
			{ "TAXI_SUV_01_F", 2100, "taxi" },
			{ "cl3_suv_taxi", 4000, "taxi" },
			{ "Orel_Agora", 25000, "taxi" }
		};
	};
	
	class restau_car {
		side = "civ";
		vehicles[] = {
			{ "cl3_dodge_charger_s_camourban", 45000, "restaurant" }
		};
	};
	
	class reb_car {
		side = "civ";
		vehicles[] = {
			{ "B_Quadbike_01_F", 550, "" },
			{ "Choco_suv", 3500, "" },
			{ "Neige_suv", 3500, "" },
			{ "Vert_suv", 3500, "" },
			{ "B_G_Offroad_01_F", 3500, "" },
			{ "Neige_Offroad", 3500, "" },
			{ "Vert_Offroad", 3500, "" },
			{ "Choco_Offroad", 3500, "" },
			{ "O_MRAP_02_F", 92500, "" },
			{ "B_Heli_Light_01_F", 73500, "" },
			{ "B_G_Offroad_01_armed_F", 55000, "rebel" }
		};
	};
	
	class esco_car {
		side = "civ";
		vehicles[] = {
			{ "Aurore_escobar_ifrit", 92500, "" },
			{ "ESCO_LAMBO", 85000, "" },
			{ "Aurore_escobar_hummingbird", 110000, "" }
		};
	};

	class cop_car {
		side = "cop";
		vehicles[] = {
			{ "B_Quadbike_01_F", 450, ""},
			{ "demian2435_police_car", 1500, "" },
			{ "demian2435_police_offroad", 2000, ""},
			{ "Orel_Rangoo", 2250, "" },
			{ "DAR_CVPIAux", 2500, ""},
			{ "DAR_CVPIPolice", 2500, "", { "life_coplevel", 1 } },
			{ "DAR_CVPISlick", 2500, "", { "life_coplevel", 1 } },
			{ "cl3_enduro_police", 500, "", { "life_coplevel", 1 } },
			{ "cl3_xr_1000_police", 500, "", { "life_coplevel", 1 } },
			{ "Orel_Master", 3500, "", { "life_coplevel", 1 } },
			{ "DAR_ImpalaPolice", 4000, "", { "life_coplevel", 1 } },
			{ "DAR_ImpalaPoliceSlick", 4000, "", { "life_coplevel", 1 } },
			{ "DAR_ImpalaPoliceDet", 4000, "", { "life_coplevel", 1 } },
			{ "Orel_Payenne", 5050, "", { "life_coplevel", 1 } },
			{ "DAR_TaurusPolice", 8500, "", { "life_coplevel", 2 } },
			{ "DAR_TaurusPoliceState", 8500, "", { "life_coplevel", 2 } },
			{ "DAR_TaurusPoliceStateSlick", 8500, "", { "life_coplevel", 2 } },
			{ "A3L_GrandCaravanUCBlack", 9000, "", { "life_coplevel", 2 } },
			{ "DAR_ExplorerPolice", 9500, "", { "life_coplevel", 2 } },
			{ "DAR_ExplorerPoliceStealth", 9500, "", { "life_coplevel", 2 } },
			{ "DAR_TahoePolice", 9500, "", { "life_coplevel", 2 } },
			{ "DAR_TahoePoliceSlick", 9500, "", { "life_coplevel", 2 } },
			{ "DAR_ChargerPolice", 10500, "", { "life_coplevel", 3 } },
			{ "DAR_ChargerPoliceState", 10500, "", { "life_coplevel", 3 } },
			{ "DAR_ChargerPoliceStateSlick", 10500, "", { "life_coplevel", 3 } },
			{ "REV_GDM", 20000, "", { "life_coplevel", 3 } },
			{ "Aurore_rev_gdm", 20500, "", { "life_coplevel", 3 } },
			{ "Aurore_rev_gdm1", 20500, "", { "life_coplevel", 3 } },
			{ "B_MRAP_01_F", 20000, "", { "life_coplevel", 3 } },
			{ "Aurore_q7_gdm", 12000, "", { "life_coplevel", 4 } },
			{ "B_MRAP_01_hmg_F", 20000, "", { "life_coplevel", 4 } },
			{ "Orel_Dingo", 20000, "", { "life_coplevel", 4 } },
			{ "I_MRAP_03_F", 20000, "", { "life_coplevel", 4 } }
			
		};
	};

	class civ_air {
		side = "civ";
		vehicles[] = {
			{ "B_Heli_Light_01_F", 253000, "pilot" },
			{ "O_Heli_Light_02_unarmed_F", 750000, "pilot" }
		};
	};

	class cop_air {
		side = "cop";
		vehicles[] = {
			{ "B_Heli_Light_01_F", 75000, "cAir" },
			{ "B_Heli_Transport_01_F", 200000, "cAir", { "life_coplevel", 3 } }
		};
	};

	class cop_airhq {
		side = "civ";
		vehicles[] = {
			{ "B_Heli_Light_01_F", 75000, "cAir" },
			{ "B_Heli_Transport_01_F", 200000, "cAir", { "life_coplevel", 3 } },
			{ "B_MRAP_01_hmg_F", 750000, "", { "life_coplevel", 3 } }
		};
	};

	class cop_ship {
		side = "cop";
		vehicles[] = {
			{ "B_Boat_Transport_01_F", 3000, "coastguard" },
			{ "C_Boat_Civil_01_police_F", 20000, "coastguard" },
			{ "B_Boat_Armed_01_minigun_F", 75000, "coastguard" },
			{ "B_SDV_01_F", 100000, "coastguard" }
		};
	};

	class civ_ship {
		side = "civ";
		vehicles[] = {
			{ "C_Rubberboat", 5000, "boat" },
			{ "C_Boat_Civil_01_F", 22000, "boat" },
			{ "B_SDV_01_F", 150000, "boat" }
		};
	};
};

/*
	Vehicle Configs (Contains textures and other stuff)

	storageFee (Getting vehicles out of garage) format:
		INDEX 0: Civilian Price
		INDEX 1: Cop Price
		INDEX 3: EMS Price
		INDEX 4: OPFOR Price (Not implemented in vanilla but still leaving support

	Textures config follows { Texture Name, side, {texture(s)path}}
	Texture(s)path follows this format:
		INDEX 0: Texture Layer 0
		INDEX 1: Texture Layer 1
		INDEX 2: Texture Layer 2
		etc etc etc
*/
class CfgVehicles {
	class Default {
		vItemSpace = -1;
		storageFee[] = { 100, 100, 100, 100 };
		garageSell[] = { 0, 0, 0, 0 };
		insurance = 2500;
		chopShop = 1200;
		textures[] = {};
	};
	
//////////////////////////////////////////////////////////////////////////////////	occ_car
	class cl3_lada_white {
        vItemSpace = 55;
        storageFee[] = { 50, 0, 0, 0 };
		garageSell[] = { 350, 0, 0, 0 };
        insurance = 600;
        chopShop = 300;
        textures[] = { };
    };
	class cl3_volha_black {
        vItemSpace = 55;
        storageFee[] = { 50, 0, 0, 0 };
		garageSell[] = { 450, 0, 0, 0 };
        insurance = 700;
        chopShop = 350;
        textures[] = { };
    };
	class cl3_golf_mk2_burgundy {
        vItemSpace = 55;
        storageFee[] = { 55, 0, 0, 0 };
		garageSell[] = { 550, 0, 0, 0 };
        insurance = 800;
        chopShop = 450;
        textures[] = { };
    };
	class cl3_civic_vti_aqua {
        vItemSpace = 55;
        storageFee[] = { 55, 0, 0, 0 };
		garageSell[] = { 550, 0, 0, 0 };
        insurance = 800;
        chopShop = 450;
        textures[] = { };
    };
	class cl3_polo_gti_green {
        vItemSpace = 55;
        storageFee[] = { 60, 0, 0, 0 };
		garageSell[] = { 600, 0, 0, 0 };
        insurance = 850;
        chopShop = 500;
        textures[] = { };
    };
	class cl3_defender_110_red {
        vItemSpace = 75;
        storageFee[] = { 65, 0, 0, 0 };
		garageSell[] = { 650, 0, 0, 0 };
        insurance = 600;
        chopShop = 500;
        textures[] = { };
    };
	class A3L_GrandCaravan {
        vItemSpace = 75;
        storageFee[] = { 70, 0, 0, 0 };
		garageSell[] = { 1300, 0, 0, 0 };
        insurance = 1000;
        chopShop = 600;
        textures[] = { };
    };
	class exxpensive_2cv_base {
        vItemSpace = 55;
        storageFee[] = { 60, 0, 0, 0 };
		garageSell[] = { 800, 0, 0, 0 };
        insurance = 700;
        chopShop = 550;
        textures[] = { };
    };
	class exxpensive_chevrolet_caprice_base {
        vItemSpace = 60;
        storageFee[] = { 65, 0, 0, 0 };
		garageSell[] = { 810, 0, 0, 0 };
        insurance = 710;
        chopShop = 560;
        textures[] = { };
    };
	class exxpensive_cadillac_sedan_base {
        vItemSpace = 55;
        storageFee[] = { 65, 0, 0, 0 };
		garageSell[] = { 500, 0, 0, 0 };
        insurance = 450;
        chopShop = 350;
        textures[] = { };
    };
	class exxpensive_volvo_242_base {
        vItemSpace = 60;
        storageFee[] = { 70, 0, 0, 0 };
		garageSell[] = { 650, 0, 0, 0 };
        insurance = 500;
        chopShop = 350;
        textures[] = { };
    };
	class exxpensive_mini_cooper_base {
        vItemSpace = 60;
        storageFee[] = { 70, 0, 0, 0 };
		garageSell[] = { 800, 0, 0, 0 };
        insurance = 700;
        chopShop = 450;
        textures[] = { };
    };
	class exxpensive_golf_IV_base {
        vItemSpace = 55;
        storageFee[] = { 75, 0, 0, 0 };
		garageSell[] = { 1500, 0, 0, 0 };
        insurance = 1250;
        chopShop = 750;
        textures[] = { };
    };
	class A3L_PuntoBlue {
        vItemSpace = 60;
        storageFee[] = { 80, 0, 0, 0 };
		garageSell[] = { 850, 0, 0, 0 };
        insurance = 750;
        chopShop = 400;
        textures[] = { };
    };
	class A3L_PuntoRed : A3L_PuntoBlue {};
	class A3L_PuntoBlack : A3L_PuntoBlue {};
	class A3L_PuntoWhite : A3L_PuntoBlue {};
	class A3L_PuntoGrey : A3L_PuntoBlue {};
	class A3L_VolksWagenGolfGTired {
        vItemSpace = 55;
        storageFee[] = { 75, 0, 0, 0 };
		garageSell[] = { 850, 0, 0, 0 };
        insurance = 750;
        chopShop = 400;
        textures[] = { };
    };
	class A3L_VolksWagenGolfGTiblack : A3L_VolksWagenGolfGTired {};
	class A3L_VolksWagenGolfGTiblue : A3L_VolksWagenGolfGTired {};
	class A3L_VolksWagenGolfGTiwhite : A3L_VolksWagenGolfGTired {};
	
//////////////////////////////////////////////////////////////////////////////////	civ_car

	class Orel_Quad {
        vItemSpace = 35;
        storageFee[] = { 55, 0, 0, 0 };
		garageSell[] = { 500, 0, 0, 0 };
        insurance = 450;
        chopShop = 200;
        textures[] = { };
    };
	class C_Hatchback_01_F {
        vItemSpace = 55;
        storageFee[] = { 55, 0, 0, 0 };
		garageSell[] = { 700, 0, 0, 0 };
        insurance = 500;
        chopShop = 350;
        textures[] = { 
        	{ "Beige", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base01_co.paa"
            } },
			{ "Green", "civ", {
	                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base02_co.paa"
            } },
			{ "Blue", "civ", {
	                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base03_co.paa"
            } },
			{ "Dark Blue", "civ", {
	                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base04_co.paa"
            } },
			{ "Yellow", "civ", {
	                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base06_co.paa"
            } },
			{ "White", "civ", {
	                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base07_co.paa"
            } },
			{ "Grey", "civ", {
	                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base08_co.paa"
            } },
            { "Black", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base09_co.paa"
            } }
         };
    };
	class Monster_Offroad {
        vItemSpace = 60;
        storageFee[] = { 55, 0, 0, 0 };
		garageSell[] = { 800, 0, 0, 0 };
        insurance = 650;
        chopShop = 400;
        textures[] = { };
    };
	class Gay_Offroad : Monster_Offroad {};
	class Licorne_Offroad : Monster_Offroad {};
	class Batman_suv {
        vItemSpace = 60;
        storageFee[] = { 55, 0, 0, 0 };
		garageSell[] = { 950, 0, 0, 0 };
        insurance = 850;
        chopShop = 450;
        textures[] = { };
    };
	class Carbon_suv : Batman_suv {};
	class C_Van_01_transport_F {
        vItemSpace = 85;
        storageFee[] = { 75, 0, 0, 0 };
		garageSell[] = { 1500, 0, 0, 0 };
        insurance = 3000;
        chopShop = 800;
        textures[] = { 
        	{ "White", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
            } },
            { "Red", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"
            } }
         };
    };
	class DAR_ChallengerCivBlack {
        vItemSpace = 65;
        storageFee[] = { 70, 0, 0, 0 };
		garageSell[] = { 1200, 0, 0, 0 };
        insurance = 1900;
        chopShop = 750;
        textures[] = { };
    };
	class DAR_ChallengerCivOrange : DAR_ChallengerCivBlack {};
	class DAR_ChallengerCivRed : DAR_ChallengerCivBlack {};
	class DAR_ChallengerCivWhite : DAR_ChallengerCivBlack {};
	class DAR_TahoeCivBlack {
        vItemSpace = 75;
        storageFee[] = { 70, 0, 0, 0 };
		garageSell[] = { 3500, 0, 0, 0 };
        insurance = 4200;
        chopShop = 1500;
        textures[] = { };
    };
	class DAR_TahoeCivBlue : DAR_TahoeCivBlack {};
	class DAR_TahoeCivRed : DAR_TahoeCivBlack {};
	class DAR_TahoeCiv : DAR_TahoeCivBlack {};
	class DAR_TahoeCivSilver : DAR_TahoeCivBlack {};
	class DAR_FusionCivBlack {
        vItemSpace = 75;
        storageFee[] = { 70, 0, 0, 0 };
		garageSell[] = { 1600, 0, 0, 0 };
        insurance = 2450;
        chopShop = 950;
        textures[] = { };
    };
	class DAR_FusionCivBlue : DAR_FusionCivBlack {};
	class DAR_FusionCivRed : DAR_FusionCivBlack {};
	class DAR_FusionCiv : DAR_FusionCivBlack {};
	class SAL_AudiCiv {
        vItemSpace = 55;
        storageFee[] = { 70, 0, 0, 0 };
		garageSell[] = { 2500, 0, 0, 0 };
        insurance = 3500;
        chopShop = 1000;
        textures[] = { };
    };
	class SAL_AudiCivBlack : SAL_AudiCiv {};
	class DAR_M3CivGrey {
        vItemSpace = 55;
        storageFee[] = { 70, 0, 0, 0 };
		garageSell[] = { 3500, 0, 0, 0 };
        insurance = 4800;
        chopShop = 2150;
        textures[] = { };
    };
	class DAR_M3CivBlack : DAR_M3CivGrey {};
	class DAR_M3CivWhite : DAR_M3CivGrey {};
	class exxpensive_BMWM3E46_base {
        vItemSpace = 55;
        storageFee[] = { 70, 0, 0, 0 };
		garageSell[] = { 4500, 0, 0, 0 };
        insurance = 6500;
        chopShop = 2500;
        textures[] = { };
    };
	class exxpensive_m5_e34_base {
        vItemSpace = 55;
        storageFee[] = { 80, 0, 0, 0 };
		garageSell[] = { 5000, 0, 0, 0 };
        insurance = 7500;
        chopShop = 2600;
        textures[] = { };
    };
	class civ_mondeo_Aqua {
        vItemSpace = 50;
        storageFee[] = { 65, 0, 0, 0 };
		garageSell[] = { 4500, 0, 0, 0 };
        insurance = 5000;
        chopShop = 2100;
        textures[] = { };
    };
	class civ_mondeo_BabyBlue : civ_mondeo_Aqua {};
	class civ_mondeo_Black : civ_mondeo_Aqua {};
	class civ_mondeo_Burgundy : civ_mondeo_Aqua {};
	class civ_mondeo_CardinalBurgundy : civ_mondeo_Aqua {};
	class civ_mondeo_DarkGreen : civ_mondeo_Aqua {};
	class civ_mondeo_Gold : civ_mondeo_Aqua {};
	class civ_mondeo_Lavendel : civ_mondeo_Aqua {};
	class civ_mondeo_LightYellow : civ_mondeo_Aqua {};
	class civ_mondeo_MarineBlue : civ_mondeo_Aqua {};
	class civ_mondeo_Orange : civ_mondeo_Aqua {};
	class civ_mondeo_Pink : civ_mondeo_Aqua {};
	class civ_mondeo_Silver : civ_mondeo_Aqua {};
	class civ_mondeo_Violet : civ_mondeo_Aqua {};
	class civ_mondeo_White : civ_mondeo_Aqua {};
	class civ_mondeo_Yellow : civ_mondeo_Aqua {};
	class DAR_TaurusCiv {
        vItemSpace = 55;
        storageFee[] = { 70, 0, 0, 0 };
		garageSell[] = { 4500, 0, 0, 0 };
        insurance = 5000;
        chopShop = 2100;
        textures[] = { };
    };
	class DAR_TaurusCivBlue : DAR_TaurusCiv {};
	class DAR_TaurusCivBlack : DAR_TaurusCiv {};
	class SAL_IROCCiv {
        vItemSpace = 55;
        storageFee[] = { 70, 0, 0, 0 };
		garageSell[] = { 5500, 0, 0, 0 };
        insurance = 6000;
        chopShop = 3100;
        textures[] = { };
    };
	class SAL_IROCCivBlue : SAL_IROCCiv {};
	class SAL_IROCCivBlack : SAL_IROCCiv {};
	class SAL_IROCCivSilver : SAL_IROCCiv {};
	class SAL_IROCCivRed : SAL_IROCCiv {};
	
//////////////////////////////////////////////////////////////////////////////////	civ_aurore_luxe

	class cl3_suv_black {
        vItemSpace = 95;
        storageFee[] = { 75, 0, 0, 0 };
		garageSell[] = { 12500, 0, 0, 0 };
        insurance = 15000;
        chopShop = 7500;
        textures[] = { };
    };
	class A3L_F350Black {
        vItemSpace = 95;
        storageFee[] = { 85, 0, 0, 0 };
		garageSell[] = { 13500, 0, 0, 0 };
        insurance = 16000;
        chopShop = 7600;
        textures[] = { };
    };
	class A3L_ChargerWhite {
        vItemSpace = 65;
        storageFee[] = { 85, 0, 0, 0 };
		garageSell[] = { 15000, 0, 0, 0 };
        insurance = 19500;
        chopShop = 8000;
        textures[] = { };
    };
	class A3L_ChargerBlack : A3L_ChargerWhite {};
	class cl3_taurus_gold {
        vItemSpace = 65;
        storageFee[] = { 85, 0, 0, 0 };
		garageSell[] = { 15000, 0, 0, 0 };
        insurance = 19500;
        chopShop = 8000;
        textures[] = { };
    };
	class cl3_taurus_silver : cl3_taurus_gold {};
	class cl3_taurus_black : cl3_taurus_gold {};
	class cl3_taurus_babyblue : cl3_taurus_gold {};
	class cl3_taurus_babypink : cl3_taurus_gold {};
	class cl3_taurus_blue : cl3_taurus_gold {};
	class cl3_taurus_burgundy : cl3_taurus_gold {};
	class cl3_taurus_cardinal : cl3_taurus_gold {};
	class cl3_taurus_dark_green : cl3_taurus_gold {};
	class cl3_taurus_green : cl3_taurus_gold {};
	class cl3_taurus_grey : cl3_taurus_gold {};
	class cl3_taurus_lavender : cl3_taurus_gold {};
	class cl3_taurus_light_blue : cl3_taurus_gold {};
	class cl3_taurus_light_yellow : cl3_taurus_gold {};
	class cl3_taurus_lime : cl3_taurus_gold {};
	class cl3_taurus_marina_blue : cl3_taurus_gold {};
	class cl3_taurus_navy_blue : cl3_taurus_gold {};
	class cl3_taurus_orange : cl3_taurus_gold {};
	class cl3_taurus_purple : cl3_taurus_gold {};
	class cl3_taurus_red : cl3_taurus_gold {};
	class cl3_taurus_sand : cl3_taurus_gold {};
	class cl3_taurus_violet : cl3_taurus_gold {};
	class cl3_taurus_white : cl3_taurus_gold {};
	class cl3_taurus_yellow : cl3_taurus_gold {};
	class cl3_impreza_road_aqua {
        vItemSpace = 65;
        storageFee[] = { 150, 0, 0, 0 };
		garageSell[] = { 30000, 0, 0, 0 };
        insurance = 55000;
        chopShop = 25000;
        textures[] = { };
    };
	class cl3_impreza_road_babyblue : cl3_impreza_road_aqua {};
	class cl3_impreza_road_babypink : cl3_impreza_road_aqua {};
	class cl3_impreza_road_black : cl3_impreza_road_aqua {};
	class cl3_impreza_road_blue : cl3_impreza_road_aqua {};
	class cl3_impreza_road_cardinal : cl3_impreza_road_aqua {};
	class cl3_impreza_road_dark_green : cl3_impreza_road_aqua {};
	class cl3_impreza_road_gold : cl3_impreza_road_aqua {};
	class cl3_impreza_road_green : cl3_impreza_road_aqua {};
	class cl3_impreza_road_grey : cl3_impreza_road_aqua {};
	class cl3_impreza_road_lavender : cl3_impreza_road_aqua {};
	class cl3_impreza_road_light_blue : cl3_impreza_road_aqua {};
	class cl3_impreza_road_light_yellow : cl3_impreza_road_aqua {};
	class cl3_impreza_road_lime : cl3_impreza_road_aqua {};
	class cl3_impreza_road_marina_blue : cl3_impreza_road_aqua {};
	class cl3_impreza_road_navy_blue : cl3_impreza_road_aqua {};
	class cl3_impreza_road_orange : cl3_impreza_road_aqua {};
	class cl3_impreza_road_purple : cl3_impreza_road_aqua {};
	class cl3_impreza_road_red : cl3_impreza_road_aqua {};
	class cl3_impreza_road_sand : cl3_impreza_road_aqua {};
	class cl3_impreza_road_silver : cl3_impreza_road_aqua {};
	class cl3_impreza_road_violet : cl3_impreza_road_aqua {};
	class cl3_impreza_road_white : cl3_impreza_road_aqua {};
	class cl3_z4_2008_gold {
        vItemSpace = 65;
        storageFee[] = { 125, 0, 0, 0 };
		garageSell[] = { 15000, 0, 0, 0 };
        insurance = 22500;
        chopShop = 11000;
        textures[] = { };
    };
	class cl3_z4_2008_silver : cl3_z4_2008_gold {};
	class cl3_z4_2008_black : cl3_z4_2008_gold {};
	class cl3_z4_2008_babyblue : cl3_z4_2008_gold {};
	class cl3_z4_2008_babypink : cl3_z4_2008_gold {};
	class cl3_z4_2008_blue : cl3_z4_2008_gold {};
	class cl3_z4_2008_burgundy : cl3_z4_2008_gold {};
	class cl3_z4_2008_cardinal : cl3_z4_2008_gold {};
	class cl3_z4_2008_dark_green : cl3_z4_2008_gold {};
	class cl3_z4_2008_green : cl3_z4_2008_gold {};
	class cl3_z4_2008_grey : cl3_z4_2008_gold {};
	class cl3_z4_2008_lavender : cl3_z4_2008_gold {};
	class cl3_z4_2008_light_blue : cl3_z4_2008_gold {};
	class cl3_z4_2008_light_yellow : cl3_z4_2008_gold {};
	class cl3_z4_2008_lime : cl3_z4_2008_gold {};
	class cl3_z4_2008_marina_blue : cl3_z4_2008_gold {};
	class cl3_z4_2008_navy_blue : cl3_z4_2008_gold {};
	class cl3_z4_2008_orange : cl3_z4_2008_gold {};
	class cl3_z4_2008_purple : cl3_z4_2008_gold {};
	class cl3_z4_2008_red : cl3_z4_2008_gold {};
	class cl3_z4_2008_sand : cl3_z4_2008_gold {};
	class cl3_z4_2008_violet : cl3_z4_2008_gold {};
	class cl3_z4_2008_white : cl3_z4_2008_gold {};
	class cl3_z4_2008_yellow : cl3_z4_2008_gold {};
	class A3L_EvoXWhite {
        vItemSpace = 65;
        storageFee[] = { 115, 0, 0, 0 };
		garageSell[] = { 12000, 0, 0, 0 };
        insurance = 19500;
        chopShop = 7500;
        textures[] = { };
    };
	class A3L_EvoXBlack : A3L_EvoXWhite {};
	class A3L_EvoXRed : A3L_EvoXWhite {};
	class cl3_dodge_chargerum_f_black {
        vItemSpace = 65;
        storageFee[] = { 135, 0, 0, 0 };
		garageSell[] = { 25000, 0, 0, 0 };
        insurance = 35000;
        chopShop = 12500;
        textures[] = { };
    };
	class cl3_dodge_chargerum_f_white : cl3_dodge_chargerum_f_black {};
	class cl3_dodge_chargerum_f_orange : cl3_dodge_chargerum_f_black {};
	class cl3_458_gold {
        vItemSpace = 65;
        storageFee[] = { 175, 0, 0, 0 };
		garageSell[] = { 45000, 0, 0, 0 };
        insurance = 56000;
        chopShop = 18500;
        textures[] = { };
    };
	class cl3_458_silver : cl3_458_gold {};
	class cl3_458_black : cl3_458_gold {};
	class cl3_458_babyblue : cl3_458_gold {};
	class cl3_458_babypink : cl3_458_gold {};
	class cl3_458_blue : cl3_458_gold {};
	class cl3_458_burgundy : cl3_458_gold {};
	class cl3_458_cardinal : cl3_458_gold {};
	class cl3_458_dark_green : cl3_458_gold {};
	class cl3_458_green : cl3_458_gold {};
	class cl3_458_lavender : cl3_458_gold {};
	class cl3_458_light_blue : cl3_458_gold {};
	class cl3_458_light_yellow : cl3_458_gold {};
	class cl3_458_lime : cl3_458_gold {};
	class cl3_458_marina_blue : cl3_458_gold {};
	class cl3_458_grey : cl3_458_gold {};
	class cl3_458_navy_blue : cl3_458_gold {};
	class cl3_458_orange : cl3_458_gold {};
	class cl3_458_purple : cl3_458_gold {};
	class cl3_458_red : cl3_458_gold {};
	class cl3_458_sand : cl3_458_gold {};
	class cl3_458_violet : cl3_458_gold {};
	class cl3_458_white : cl3_458_gold {};
	class cl3_458_yellow : cl3_458_gold {};
	class cl3_murcielago_gold : cl3_458_gold {};
	class cl3_murcielago_silver : cl3_458_gold {};
	class cl3_murcielago_black : cl3_458_gold {};
	class cl3_murcielago_babyblue : cl3_458_gold {};
	class cl3_murcielago_babypink : cl3_458_gold {};
	class cl3_murcielago_blue : cl3_458_gold {};
	class cl3_murcielago_burgundy : cl3_458_gold {};
	class cl3_murcielago_cardinal : cl3_458_gold {};
	class cl3_murcielago_dark_green : cl3_458_gold {};
	class cl3_murcielago_green : cl3_458_gold {};
	class cl3_murcielago_lavender : cl3_458_gold {};
	class cl3_murcielago_light_blue : cl3_458_gold {};
	class cl3_murcielago_light_yellow : cl3_458_gold {};
	class cl3_murcielago_lime : cl3_458_gold {};
	class cl3_murcielago_marina_blue : cl3_458_gold {};
	class cl3_murcielago_grey : cl3_458_gold {};
	class cl3_murcielago_navy_blue : cl3_458_gold {};
	class cl3_murcielago_orange : cl3_458_gold {};
	class cl3_murcielago_purple : cl3_458_gold {};
	class cl3_murcielago_red : cl3_458_gold {};
	class cl3_murcielago_sand : cl3_458_gold {};
	class cl3_murcielago_violet : cl3_458_gold {};
	class cl3_murcielago_white : cl3_458_gold {};
	class cl3_murcielago_yellow : cl3_458_gold {};
	class cl3_lamborghini_gt1_gold : cl3_458_gold {};
	class cl3_lamborghini_gt1_silver : cl3_458_gold {};
	class cl3_lamborghini_gt1_black : cl3_458_gold {};
	class cl3_lamborghini_gt1_babyblue : cl3_458_gold {};
	class cl3_lamborghini_gt1_babypink : cl3_458_gold {};
	class cl3_lamborghini_gt1_blue : cl3_458_gold {};
	class cl3_lamborghini_gt1_burgundy : cl3_458_gold {};
	class cl3_lamborghini_gt1_cardinal : cl3_458_gold {};
	class cl3_lamborghini_gt1_dark_green : cl3_458_gold {};
	class cl3_lamborghini_gt1_green : cl3_458_gold {};
	class cl3_lamborghini_gt1_lavender : cl3_458_gold {};
	class cl3_lamborghini_gt1_light_blue : cl3_458_gold {};
	class cl3_lamborghini_gt1_light_yellow : cl3_458_gold {};
	class cl3_lamborghini_gt1_lime : cl3_458_gold {};
	class cl3_lamborghini_gt1_marina_blue : cl3_458_gold {};
	class cl3_lamborghini_gt1_grey : cl3_458_gold {};
	class cl3_lamborghini_gt1_navy_blue : cl3_458_gold {};
	class cl3_lamborghini_gt1_orange : cl3_458_gold {};
	class cl3_lamborghini_gt1_purple : cl3_458_gold {};
	class cl3_lamborghini_gt1_red : cl3_458_gold {};
	class cl3_lamborghini_gt1_sand : cl3_458_gold {};
	class cl3_lamborghini_gt1_violet : cl3_458_gold {};
	class cl3_lamborghini_gt1_white : cl3_458_gold {};
	class cl3_lamborghini_gt1_yellow : cl3_458_gold {};
	class cl3_reventon_gold : cl3_458_gold {};
	class cl3_reventon_silver : cl3_458_gold {};
	class cl3_reventon_black : cl3_458_gold {};
	class cl3_reventon_babyblue : cl3_458_gold {};
	class cl3_reventon_babypink : cl3_458_gold {};
	class cl3_reventon_blue : cl3_458_gold {};
	class cl3_reventon_burgundy : cl3_458_gold {};
	class cl3_reventon_cardinal : cl3_458_gold {};
	class cl3_reventon_dark_green : cl3_458_gold {};
	class cl3_reventon_green : cl3_458_gold {};
	class cl3_reventon_lavender : cl3_458_gold {};
	class cl3_reventon_light_blue : cl3_458_gold {};
	class cl3_reventon_light_yellow : cl3_458_gold {};
	class cl3_reventon_lime : cl3_458_gold {};
	class cl3_reventon_marina_blue : cl3_458_gold {};
	class cl3_reventon_grey : cl3_458_gold {};
	class cl3_reventon_navy_blue : cl3_458_gold {};
	class cl3_reventon_orange : cl3_458_gold {};
	class cl3_reventon_purple : cl3_458_gold {};
	class cl3_reventon_red : cl3_458_gold {};
	class cl3_reventon_sand : cl3_458_gold {};
	class cl3_reventon_violet : cl3_458_gold {};
	class cl3_reventon_white : cl3_458_gold {};
	class cl3_reventon_yellow : cl3_458_gold {};
	class cl3_carrera_gt_gold : cl3_458_gold {};
	class cl3_carrera_gt_silver : cl3_458_gold {};
	class cl3_carrera_gt_black : cl3_458_gold {};
	class cl3_carrera_gt_babyblue : cl3_458_gold {};
	class cl3_carrera_gt_babypink : cl3_458_gold {};
	class cl3_carrera_gt_blue : cl3_458_gold {};
	class cl3_carrera_gt_burgundy : cl3_458_gold {};
	class cl3_carrera_gt_cardinal : cl3_458_gold {};
	class cl3_carrera_gt_dark_green : cl3_458_gold {};
	class cl3_carrera_gt_green : cl3_458_gold {};
	class cl3_carrera_gt_lavender : cl3_458_gold {};
	class cl3_carrera_gt_light_blue : cl3_458_gold {};
	class cl3_carrera_gt_light_yellow : cl3_458_gold {};
	class cl3_carrera_gt_lime : cl3_458_gold {};
	class cl3_carrera_gt_marina_blue : cl3_458_gold {};
	class cl3_carrera_gt_grey : cl3_458_gold {};
	class cl3_carrera_gt_navy_blue : cl3_458_gold {};
	class cl3_carrera_gt_orange : cl3_458_gold {};
	class cl3_carrera_gt_purple : cl3_458_gold {};
	class cl3_carrera_gt_red : cl3_458_gold {};
	class cl3_carrera_gt_sand : cl3_458_gold {};
	class cl3_carrera_gt_violet : cl3_458_gold {};
	class cl3_carrera_gt_white : cl3_458_gold {};
	class cl3_carrera_gt_yellow : cl3_458_gold {};
	class cl3_q7_gold : cl3_458_gold {};
	class cl3_q7_silver : cl3_458_gold {};
	class cl3_q7_black : cl3_458_gold {};
	class cl3_q7_babyblue : cl3_458_gold {};
	class cl3_q7_babypink : cl3_458_gold {};
	class cl3_q7_blue : cl3_458_gold {};
	class cl3_q7_burgundy : cl3_458_gold {};
	class cl3_q7_cardinal : cl3_458_gold {};
	class cl3_q7_dark_green : cl3_458_gold {};
	class cl3_q7_green : cl3_458_gold {};
	class cl3_q7_lavender : cl3_458_gold {};
	class cl3_q7_light_blue : cl3_458_gold {};
	class cl3_q7_light_yellow : cl3_458_gold {};
	class cl3_q7_lime : cl3_458_gold {};
	class cl3_q7_marina_blue : cl3_458_gold {};
	class cl3_q7_grey : cl3_458_gold {};
	class cl3_q7_navy_blue : cl3_458_gold {};
	class cl3_q7_orange : cl3_458_gold {};
	class cl3_q7_purple : cl3_458_gold {};
	class cl3_q7_red : cl3_458_gold {};
	class cl3_q7_sand : cl3_458_gold {};
	class cl3_q7_violet : cl3_458_gold {};
	class cl3_q7_white : cl3_458_gold {};
	class cl3_q7_yellow : cl3_458_gold {};
	class cl3_s5_gold : cl3_458_gold {};
	class cl3_s5_silver : cl3_458_gold {};
	class cl3_s5_black : cl3_458_gold {};
	class cl3_s5_babyblue : cl3_458_gold {};
	class cl3_s5_babypink : cl3_458_gold {};
	class cl3_s5_blue : cl3_458_gold {};
	class cl3_s5_burgundy : cl3_458_gold {};
	class cl3_s5_cardinal : cl3_458_gold {};
	class cl3_s5_dark_green : cl3_458_gold {};
	class cl3_s5_green : cl3_458_gold {};
	class cl3_s5_lavender : cl3_458_gold {};
	class cl3_s5_light_blue : cl3_458_gold {};
	class cl3_s5_light_yellow : cl3_458_gold {};
	class cl3_s5_lime : cl3_458_gold {};
	class cl3_s5_marina_blue : cl3_458_gold {};
	class cl3_s5_grey : cl3_458_gold {};
	class cl3_s5_navy_blue : cl3_458_gold {};
	class cl3_s5_orange : cl3_458_gold {};
	class cl3_s5_purple : cl3_458_gold {};
	class cl3_s5_red : cl3_458_gold {};
	class cl3_s5_sand : cl3_458_gold {};
	class cl3_s5_violet : cl3_458_gold {};
	class cl3_s5_white : cl3_458_gold {};
	class cl3_s5_yellow : cl3_458_gold {};
	class cl3_dbs_volante_gold : cl3_458_gold {};
	class cl3_dbs_volante_silver : cl3_458_gold {};
	class cl3_dbs_volante_black : cl3_458_gold {};
	class cl3_dbs_volante_babyblue : cl3_458_gold {};
	class cl3_dbs_volante_babypink : cl3_458_gold {};
	class cl3_dbs_volante_blue : cl3_458_gold {};
	class cl3_dbs_volante_burgundy : cl3_458_gold {};
	class cl3_dbs_volante_cardinal : cl3_458_gold {};
	class cl3_dbs_volante_dark_green : cl3_458_gold {};
	class cl3_dbs_volante_green : cl3_458_gold {};
	class cl3_dbs_volante_lavender : cl3_458_gold {};
	class cl3_dbs_volante_light_blue : cl3_458_gold {};
	class cl3_dbs_volante_light_yellow : cl3_458_gold {};
	class cl3_dbs_volante_lime : cl3_458_gold {};
	class cl3_dbs_volante_marina_blue : cl3_458_gold {};
	class cl3_dbs_volante_grey : cl3_458_gold {};
	class cl3_dbs_volante_navy_blue : cl3_458_gold {};
	class cl3_dbs_volante_orange : cl3_458_gold {};
	class cl3_dbs_volante_purple : cl3_458_gold {};
	class cl3_dbs_volante_red : cl3_458_gold {};
	class cl3_dbs_volante_sand : cl3_458_gold {};
	class cl3_dbs_volante_violet : cl3_458_gold {};
	class cl3_dbs_volante_white : cl3_458_gold {};
	class cl3_dbs_volante_yellow : cl3_458_gold {};
	class cl3_veyron_blk_wht : cl3_458_gold {};
	class cl3_veyron_wht_lwht : cl3_458_gold {};

//////////////////////////////////////////////////////////////////////////////////	civ_exxp_luxe
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	class I_Truck_02_medical_F : Default {
		vItemSpace = 150;
		storageFee[] = { 0, 0, 1500, 0 };
		garageSell[] = { 0, 0, 5000, 0 };
		chopShop = 3000;
	};

	class O_Truck_03_medical_F : Default {
		vItemSpace = 200;
		storageFee[] = { 0, 0, 3000, 0 };
		garageSell[] = { 0, 0, 10000, 0 };
		chopShop = 7500;
	};

	class B_Truck_01_medical_F : Default {
		vItemSpace = 250;
		storageFee[] = { 0, 0, 6500, 0 };
		garageSell[] = { 0, 0, 25000, 0 };
		chopShop = 12500;
	};

	class C_Rubberboat {
        vItemSpace = 45;
        storageFee[] = { 400, 300, 0, 0 };
		garageSell[] = { 950, 350, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class B_Heli_Transport_01_F {
		vItemSpace = 200;
		storageFee[] = { 0, 50000, 0, 0 };
		garageSell[] = { 0, 85000, 0, 0 };
		insurance = 16000;
		chopShop = 45000;
		textures[] = {};
	};

	class B_MRAP_01_hmg_F : Default {
		vItemSpace = 100;
	};

	class O_Boat_Armed_01_hmg_F {
        vItemSpace = 175;
        storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 21000, 21000, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class B_Boat_Armed_01_minigun_F {
        vItemSpace = 175;
        storageFee[] = { 0, 16500, 0, 0 };
		garageSell[] = { 0, 21000, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class I_Boat_Armed_01_minigun_F {
        vItemSpace = 175;
        storageFee[] = { 1000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class B_G_Boat_Transport_01_F {
        vItemSpace = 45;
        storageFee[] = { 1000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class B_Boat_Transport_01_F {
        vItemSpace = 45;
        storageFee[] = { 0, 450, 0, 0 };
		garageSell[] = { 0, 850, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class O_Truck_03_transport_F {
        vItemSpace = 285;
        storageFee[] = { 1000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class O_Truck_03_device_F {
        vItemSpace = 350;
        storageFee[] = { 95000, 0, 0, 0 };
		garageSell[] = { 185000, 0, 0, 0 };
        insurance = 25000;
        chopShop = 125000;
        textures[] = { };
    };

	class Land_CargoBox_V1_F : Default {
        vItemSpace = 5000;
    };

	class Box_IND_Grenades_F : Default {
        vItemSpace = 350;
    };

	class B_supplyCrate_F {
        vItemSpace = 700;
    };

	class B_G_Offroad_01_F {
        vItemSpace = 65;
        storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 3500, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class B_G_Offroad_01_armed_F : B_G_Offroad_01_F {};

	class I_G_Van_01_transport_F {
        vItemSpace = 100;
        storageFee[] = { 1000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class C_Boat_Civil_01_F {
        vItemSpace = 85;
        storageFee[] = { 4500, 2500, 0, 0 };
		garageSell[] = { 6800, 3500, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class C_Boat_Civil_01_police_F {
        vItemSpace = 85;
        storageFee[] = { 0, 3500, 0, 0 };
		garageSell[] = { 0, 4950, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class C_Boat_Civil_01_rescue_F {
        vItemSpace = 85;
        storageFee[] = { 1000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class B_Truck_01_box_F {
        vItemSpace = 450;
        storageFee[] = { 35000, 0, 0, 0 };
		garageSell[] = { 150000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class B_Truck_01_transport_F {
        vItemSpace = 325;
        storageFee[] = { 25650, 0, 0, 0 };
		garageSell[] = { 135000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class O_MRAP_02_F {
        vItemSpace = 60;
        storageFee[] = { 45000, 0, 0, 0 };
		garageSell[] = { 65000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class I_MRAP_03_F {
        vItemSpace = 58;
        storageFee[] = { 1000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class C_Offroad_01_F {
        vItemSpace = 65;
        storageFee[] = { 1000, 500, 650, 1000 };
		garageSell[] = { 6500, 2500, 0, 0 };
        insurance = 2500;
        chopShop = 2500;
        textures[] = {
        	{ "Red", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa"
            } },
			{ "Yellow", "civ", {
	                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa",
	                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa"
            } },
			{ "White", "civ", {
	                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa",
	                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa"
            } },
			{ "Blue", "civ", {
	                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa",
	                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa"
            } },
			{ "Dark Red", "civ", {
	                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa",
	                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa"
            } },
			{ "Blue / White", "civ", {
	                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa",
	                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa"
            } },
            { "Fed", "fed", {
	                "#(ai,64,64,1)Fresnel(0.3,3)"
            } },
			{ "Police", "cop", {
	                "#(ai,64,64,1)Fresnel(1.3,7)"
            } },
            { "Taxi", "civ", {
	                "#(argb,8,8,3)color(0.6,0.3,0.01,1)"
            } }
	    };
    };

	class C_Kart_01_Blu_F {
		vItemSpace = 20;
		storageFee[] = { 1500, 0, 0, 0 };
		garageSell[] = { 3500, 0, 0, 0 };
		inusrance = 1650;
		chopShop = 3500;
		textures[] = {};
	};

	class C_Kart_01_Fuel_F : C_Kart_01_Blu_F {}; //Inherits everything from the above class
	class C_Kart_01_Red_F : C_Kart_01_Blu_F {}; //Inherits everything from the above class
	class C_Kart_01_Vrana_F : C_Kart_01_Blu_F {}; //Inherits everything from the above class

	class C_Hatchback_01_sport_F {
        vItemSpace = 45;
        storageFee[] = { 2500, 1000, 0, 0 };
		garageSell[] = { 15000, 7500, 0, 0 };
        insurance = 5500;
        chopShop = 4500;
        textures[] = {
        	{ "Red", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport01_co.paa"
            } },
			{ "Dark Blue", "civ", {
	                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport02_co.paa"
            } },
			{ "Orange", "civ", {
	                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport03_co.paa"
            } },
			{ "Black / White", "civ", {
	                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport04_co.paa"
            } },
			{ "Beige", "civ", {
	                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport05_co.paa"
            } },
			{ "Green", "civ", {
	                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport06_co.paa"
            } },
            { "Police", "cop", {
                "#(ai,64,64,1)Fresnel(1.3,7)"
            } }
        };
    };

	class B_Quadbike_01_F {
        vItemSpace = 25;
        storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 950, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = {
        	{ "Brown", "cop", {
                "\A3\Soft_F\Quadbike_01\Data\Quadbike_01_co.paa"
            } },
			{ "Digi Desert", "reb", {
	                "\A3\Soft_F\Quadbike_01\Data\quadbike_01_opfor_co.paa"
	        } },
			{ "Black", "civ", {
	                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_black_co.paa"
	        } },
			{ "Blue", "civ", {
	                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_blue_co.paa"
	        } },
			{ "Red", "civ", {
	                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_red_co.paa"
	        } },
			{ "White", "civ", {
	                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_white_co.paa"
	        } },
			{ "Digi Green", "civ", {
	                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_indp_co.paa"
	        } },
			{ "Hunter Camo", "civ", {
	                "\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa"
	        } },
	        { "Rebel Camo", "reb", {
                "\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa"
            } }
        };
    };

	class I_Truck_02_covered_F {
        vItemSpace = 250;
        storageFee[] = { 14500, 0, 0, 0 };
		garageSell[] = { 62000, 0, 0, 0 };
        insurance = 6500;
        chopShop = 20000;
        textures[] = {
        	{ "Orange", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"
            } },
            { "Black", "fed", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } }
        };
    };

	class I_Truck_02_transport_F : I_Truck_02_covered_F {
        vItemSpace = 200;
        storageFee[] = { 12000, 0, 0, 0 };
		garageSell[] = { 49800, 3500, 0, 0 };
    };

	class O_Truck_03_covered_F {
		vItemSpace = 300;
		storageFee[] = { 25000, 0, 0, 0 };
		garageSell[] = { 65000, 0, 0, 0 };
		insurance = 2500;
		chopShop = 5000;
		textures[] = {};
	};

	class C_SUV_01_F {
        vItemSpace = 50;
        storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 15000, 7500, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = {
        	{ "Dark Red", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_co.paa"
            } },
			{ "Black", "cop", {
	                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_02_co.paa"
            } },
			{ "Silver", "civ", {
	                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_03_co.paa"
            } },
			{ "Orange", "civ", {
	                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_04_co.paa"
            } },
            { "Cop", "cop", {
                "#(ai,64,64,1)Fresnel(1.3,7)"
            } }
	        };
    };

	class B_MRAP_01_F {
        vItemSpace = 65;
        storageFee[] = { 0, 7500, 0, 0 };
		garageSell[] = { 0, 10000, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = {
        	{ "Regular", "cop", {
                "\A3\Soft_F\MRAP_01\Data\mrap_01_base_co.paa"
            } },
            { "Black", "fed", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } }
        };
    };

	class B_Heli_Light_01_F {
        vItemSpace = 90;
        storageFee[] = { 45000, 19500, 0, 0 };
		garageSell[] = { 57000, 35000, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = {
        	{ "Sheriff", "cop", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sheriff_co.paa"
            } },
			{ "Black", "fed", {
	                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_ion_co.paa"
            } },
			{ "Civ Blue", "civ", {
	                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_blue_co.paa"
            } },
			{ "Civ Red", "civ", {
	                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_co.paa"
            } },
			{ "Digi Green", "donate", {
	                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_indp_co.paa"
            } },
			{ "Blueline", "civ", {
	                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_blueline_co.paa"
            } },
			{ "Elliptical", "civ", {
	                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_elliptical_co.paa"
            } },
			{ "Furious", "civ", {
	                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_furious_co.paa"
            } },
			{ "Jeans Blue", "civ", {
	                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_jeans_co.paa"
            } },
			{ "Speedy Redline", "civ", {
	                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_speedy_co.paa"
            } },
			{ "Sunset", "civ", {
	                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sunset_co.paa"
            } },
			{ "Vrana", "civ", {
	                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_vrana_co.paa"
            } },
			{ "Waves Blue", "civ", {
	                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_wave_co.paa"
            } },
			{ "Rebel Digital", "reb", {
	                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"
            } },
            { "EMS White", "med", {
                "#(argb,8,8,3)color(1,1,1,0.8)"
            } }
        };
    };

	class O_Heli_Light_02_unarmed_F {
        vItemSpace = 210;
        storageFee[] = { 55000, 0, 22000, 0 };
		garageSell[] = { 72500, 0, 35000, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = {
        	{ "Black", "fed", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_co.paa"
            } },
			{ "White / Blue", "civ", {
	                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_civilian_co.paa"   
            } },
			{ "Digi Green", "donate", {
	                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_indp_co.paa"
            } },
			{ "Desert Digi", "reb", {
	                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_opfor_co.paa" 
            } },
            { "EMS White", "med", {
                "#(argb,8,8,3)color(1,1,1,0.8)"
            } }
        };
    };

	class I_Heli_Transport_02_F {
        vItemSpace = 375;
        storageFee[] = { 75000, 0, 0, 0 };
		garageSell[] = { 125000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = {
        	{ "Ion", "civ", {
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_1_ion_co.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_2_ion_co.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_3_ion_co.paa"
            } },
            { "Dahoman", "civ", {
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_1_dahoman_co.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_2_dahoman_co.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_3_dahoman_co.paa"
            } }
        };
    };
};