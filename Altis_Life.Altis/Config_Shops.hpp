class WeaponShops {
    //Armory Shops
	class donator {
        name = "Armes donateur";
        side = "civ";
        license = "civdonator";
        level = -1;
        msg = "";
        items[] = {
			{ "srifle_LRR_SOS_F","",30000 },
			{ "7Rnd_408_Mag","",600 },
			{ "srifle_mas_m107","M107",40000 },
			{ "srifle_mas_m107_v","M107 Camo Wood",42000 },
			{ "srifle_mas_m107_d","M107 Camo Desert",42000 },
			{ "5Rnd_mas_127x99_Stanag","Munitions M107",5000 },
			{ "mas_launch_RPG7_F","",65000 },
			{ "mas_PG7V","",100000 },
			{ "srifle_mas_vss_h","VSS Vintorez",35000 },
			{ "20Rnd_mas_9x39_mag","Munitions Vintorez",3000 },
			{ "hgun_Rook40_F","",100 },
			{ "hgun_PDW2000_F","",600 },
			{ "hgun_pistol_heavy_01_F","",250 },
			{ "arifle_Mk20C_plain_F","",1500 },
			{ "LMG_Mk200_F","",2400 },
			{ "arifle_MX_SW_F","",2100 },
			{ "optic_ACO_grn_smg","",75 },
			{ "optic_MRCO","",1000 },
			{ "optic_SOS","",500 },
			{ "optic_NVS","",2000 },
			{ "NVGoggles","",35 },
			{ "ToolKit","",5 },
			{ "ItemGPS","",5 },
			{ "FirstAidKit","",25 },
			{ "16Rnd_9x21_Mag","",25 },
			{ "30Rnd_9x21_Mag","",75 },
			{ "11Rnd_45ACP_Mag","",85 },
			{ "30Rnd_556x45_Stanag","",125 },
			{ "100Rnd_65x39_caseless_mag_Tracer","",125 },
			{ "200Rnd_65x39_cased_Box_Tracer","",125 }
        };
    };
    class gun {
        name = "Billy Joe's Firearms";
        side = "civ";
        license = "gun";
        level = -1;
        msg = "";
        items[] = {
            { "hgun_Rook40_F", "", 1000 },
            { "hgun_Pistol_heavy_02_F", "", 1200 },
            { "hgun_ACPC2_F", "", 1200 },
            { "hgun_PDW2000_F", "", 2000 },
			{ "arifle_SDAR_F","",4000 },
            { "optic_ACO_grn_smg", "", 200 },
            { "V_Rangemaster_belt", "", 350 },
			{ "20Rnd_556x45_UW_mag","",200 },
            { "16Rnd_9x21_Mag", "", 100 },
            { "9Rnd_45ACP_Mag", "", 100 },
            { "6Rnd_45ACP_Cylinder", "", 100 },
            { "30Rnd_9x21_Mag", "", 100 }
        };
    };
	class vente {
        name = "Altis Gendarmerie";
        side = "civ";
        license = "vente";
        level = -1;
        msg = "";
        items[] = {
		{ "DDOPP_X26_b","Tazer",30000 },
		{ "DDOPP_1Rnd_X26","16 Volts Tazer",300 },
		{ "prpl_famas","Famas",25000 },
		{ "prpl_25Rnd_556x45_famas","Munitions Famas",1000 },
		{ "arifle_sdar_F","Taser Rifle",200000 },
		{ "30Rnd_556x45_Stanag","Taser Rifle Magazine",1500 },
		{ "HandGrenade_Stone","Flashbang",7000 },
		{ "gign_shield","Bouclier",60000 },
		{ "H_Beret_Colonel","",50000 },
		{ "H_Beret_blk","",30000 },
		{ "Rangefinder","",5000 },
		{ "SmokeShell","",200 },
		{ "SmokeShellRed","",200 },
		{ "SmokeShellGreen","",200 },
		{ "SmokeShellYellow","",200 },
		{ "SmokeShellPurple","",200 },
		{ "SmokeShellBlue","",200 },
		{ "SmokeShellOrange","",200 },
		{ "muzzle_snds_H_MG","",2000 }
		};
	};
	class wp {
        name = "Les Armes WP";
        side = "civ";
        license = "wp";
        level = -1;
        msg = "";
        items[] = {
        { "DDOPP_X26_b","Tazer",2000 },
		{ "DDOPP_1Rnd_X26","16 Volts Tazer",30 },
		{ "arifle_MX_F","",2100 },
		{ "30Rnd_65x39_caseless_mag","",15 },
		{ "arifle_MXM_F",",""",2100 },
		{ "30Rnd_65x39_caseless_mag","",50 },
		{ "arifle_mas_m4","M4",6000 },
		{ "30Rnd_mas_556x45_Stanag","Munitions M4",10 },
		{ "arifle_SDAR_F","",4000 },
		{ "20Rnd_556x45_UW_mag","",200 },
		{ "arifle_Mk20_F","",6000 },
		{ "30Rnd_556x45_Stanag_Tracer_Green","",15 },
		{ "arifle_mas_m1014","Fusil à Pompe",3250 },
		{ "7Rnd_mas_12Gauge_Slug","Munitions Pompes",10 },
		{ "arifle_mas_mp5","MP5",2100 },
		{ "arifle_mas_mp5_v","MP5 Camo",2100 },
		{ "arifle_mas_mp5_d","MP5 Desert",2100 },
		{ "30Rnd_mas_9x21_Stanag","Munitions MP5",10 },
		{ "srifle_EBR_F","",8500 },
		{ "20Rnd_762x51_Mag","",20 },
		{ "LMG_Mk200_F","",2400 },
		{ "200Rnd_65x39_cased_Box_Tracer","",15 },
		{ "arifle_mas_fal","FN Fal",8000 },
		{ "20Rnd_mas_762x51_Stanag","Munitions FN Fal",10 },
		{ "srifle_mas_sr25","Fusil SR25",8000 },
		{ "srifle_mas_sr25_v","Fusil SR25 Camo",8000 },
		{ "srifle_mas_sr25_d","Fusil SR25 Desert",8000 },
		{ "20Rnd_mas_762x51_Stanag","Munitions SR25",10 },
		{ "arifle_mas_hk417c","HK417",8000 },
		{ "20Rnd_mas_762x51_Stanag","Munitions HK417",10 },
		{ "srifle_mas_svd","Sniper SVD",16000 },
		{ "10Rnd_mas_762x54_mag","Munitions SVD",200 },
		{ "muzzle_mas_snds_SH","Silencieux SVD",800 },
		{ "muzzle_mas_snds_SM","Silencieux HK417 - SR25",120 },
		{ "muzzle_mas_snds_M","Silencieux M4 - M16 - HK14",120 },
		{ "optic_mas_zeiss_eo","",50 },
		{ "optic_ACO_grn","",200 },
		{ "optic_Aco","",200 },
		{ "optic_Hamr","",300 },
		{ "optic_Holosight","",300 },
		{ "optic_SOS","",1000 },
		{ "optic_MRD","",250 },
		{ "muzzle_snds_M","",500 },
		{ "muzzle_snds_H","",500 },
		{ "muzzle_snds_B","",500 },		
		{ "muzzle_snds_acp","",500 },
		{ "acc_flashlight","",50}
        };
    };
	class restaurant {
        name = "Restaurant le Groschandais";
        side = "civ";
        license = "restaurant";
        level = -1;
        msg = "";
        items[] = {
			{ "arifle_mas_m1014","Fusil à Pompe",4500 },
			{ "7Rnd_mas_12Gauge_Slug","Munitions Pompes",2 },
			{ "arifle_mas_m4_d","M4A1 7.62 Desert",3405 },
			{ "30Rnd_556x45_Stanag_Tracer_Red","Munitions ROUGES",2 },
			{ "30Rnd_mas_556x45_Stanag","Munitions M4A1",2 },
			{ "srifle_mas_svd","Sniper SVD",9600 },
			{ "10Rnd_mas_762x54_mag","Munitions SVD",20 },
			{ "HandGrenade_Stone","Flashbang",60 },
			{ "prpl_famas_tan","Famas Camo",26000 },
			{ "prpl_25Rnd_556x45_famas","Munitions Famas",20 },
			{ "hgun_mas_glocksf_F","45 Glock 21SF",100 },
			{ "12Rnd_mas_45acp_Mag","Munitions Guns",1 },
			{ "arifle_mas_mp5_d","MP5 Desert",1250 },
			{ "30Rnd_mas_9x21_Stanag","Munitions MP5",1 },
			{ "srifle_mas_ksvk","Sniper KSVK",6900 },
			{ "srifle_mas_ksvk_c","Sniper KSVK Camo",6900 },
			{ "5Rnd_mas_127x108_mag","Munitions KSVK",20 },
			{ "srifle_mas_m24_d","Sniper M24 Desert",18600 },
			{ "5Rnd_mas_762x51_Stanag","Munitions M24",2000 },
			{ "arifle_Mk20_F","",950 },
			{ "30Rnd_556x45_Stanag_Tracer_Green","",10 },
			{ "muzzle_mas_snds_L","Silencieu Pistolet",8 },
			{ "muzzle_mas_snds_LM","Silencieux Makarov",8 },
			{ "muzzle_mas_snds_C","Silencieux MP5",10 },
			{ "muzzle_mas_snds_M","Silencieux M4 - M16 - HK14",12 },
			{ "muzzle_mas_snds_SM","Silencieux HK417 - SR25",12 },
			{ "muzzle_mas_snds_AK","Silencieux AK",12 },
			{ "muzzle_mas_snds_SH","Silencieux SVD",80 },
			{ "arifle_mas_m70","Zastava",4000 },
			{ "30Rnd_mas_762x39_mag","Munitions Zastava",10 },
			{ "LMG_mas_m72_F","Zastava M72",5000 },
			{ "30Rnd_mas_762x39_mag","Munitions M72 x30",10 },
			{ "100Rnd_mas_762x39_mag","Munitions M72 x100",100 },
			{ "arifle_mas_akm","AKM",3350 },
			{ "30Rnd_mas_762x39_mag","Munitions AKM",10 },
			{ "optic_mas_zeiss","",5 },
			{ "optic_mas_zeiss_eo","",5 },
			{ "optic_mas_acog","",5 },
			{ "optic_mas_acog_eo","",5 },
			{ "optic_mas_acog","",5 },
			{ "optic_mas_handle","",5 },
			{ "optic_mas_aim","",5 },
			{ "optic_mas_pso","",5 },
			{ "optic_mas_pso_eo","",5 },
			{ "optic_ACO_grn","",20 },
			{ "optic_Aco","",20 },
			{ "optic_Hamr","",30 },
			{ "optic_Holosight","",30 },
			{ "optic_SOS","",100 },
			{ "muzzle_snds_M","",50 },
			{ "muzzle_snds_acp","",50 },
			{ "muzzle_snds_H","",50 },
			{ "muzzle_snds_B","",50 },							
			{ "acc_flashlight","",5 }
        };
    };
	class bandit {
        name = "Shop Bandit";
        side = "civ";
        license = "bandit";
        level = -1;
        msg = "";
        items[] = {
        { "arifle_Mk20_F","",4250 },
		{ "30Rnd_556x45_Stanag_Tracer_Green","",200 },
		{ "arifle_mas_arx","ARX160",5350 },
		{ "arifle_mas_arx_l","ARX160 Black",5500 },
		{ "30Rnd_mas_556x45_Stanag","Munitions ARX160",200 },
		{ "hgun_mas_mp7p_F","MP7",2000 },
		{ "40Rnd_mas_46x30_Mag","Munitions MP7",80 },
		{ "arifle_mas_mp5","MP5",3600 },
		{ "arifle_mas_mp5_v","MP5 Camo",4000 },
		{ "arifle_mas_mp5_d","MP5 Desert",4000 },
		{ "30Rnd_mas_9x21_Stanag","Munitions MP5",150 },
		{ "hgun_mas_uzi_F","Uzi",4000 },
		{ "25Rnd_mas_9x19_Mag","Munitions UZI",150 },
		{ "hgun_mas_sa61_F","Skorpion",4000 },
		{ "20Rnd_mas_765x17_Mag","Munitions Skorpion",150 },
		{ "arifle_SDAR_F","",4000 },
		{ "20Rnd_556x45_UW_mag","",200 },
		{ "hgun_Rook40_F","",900 },
		{ "16Rnd_9x21_Mag","",100 },
        { "hgun_ACPC2_F","",1200 },
		{ "9Rnd_45ACP_Mag","",130 },
        { "hgun_Pistol_heavy_01_F","",2200 },
		{ "11Rnd_45ACP_Mag","",120 },
		{ "hgun_Pistol_heavy_02_F","",2200 },
		{ "6Rnd_45ACP_Cylinder","",120 },
		{ "optic_ACO_grn","",200 },
		{ "optic_Aco","",200 },
		{ "optic_Hamr","",300 },
		{ "optic_Holosight","",300 },
		{ "optic_SOS","",1000 },
		{ "optic_MRD","",250 },
		{ "muzzle_snds_M","",500 },
		{ "muzzle_snds_H","",500 },
		{ "muzzle_snds_B","",500 },		
		{ "muzzle_snds_acp","",500 },
		{ "acc_flashlight","",50 }
        };
    };
	
    class rebel {
        name = "Mohammed's Jihadi Shop";
        side = "civ";
        license = "rebel";
        level = -1;
        msg = "";
        items[] = {
		{ "ItemRadio","Carte SIM",100 },
		{"ItemGPS","Positionnement",50 },
		{ "hgun_mas_m9_F","9mm Browning",1200 },
		{ "hgun_mas_bhp_F","Berretta M9",1200 },
		{ "hgun_mas_glock_F","Glock 17",1200 },
		{ "12Rnd_mas_45acp_Mag","Munitions Guns",100 },
		{ "hgun_mas_acp_F","M1911 ACP",1200 },
		{ "hgun_mas_usp_l_F","USP",1200 },
		{ "hgun_mas_glocksf_F","45 Glock 21SF",1200 },
		{ "12Rnd_mas_45acp_Mag","Munitions Guns",120 },
		{ "hgun_mas_mak_F","Makarov",1200 },
		{ "8Rnd_mas_9x18_Mag","Munitions Makarov",100 },
		{ "SMG_01_F","",4500 },
		{ "30Rnd_45ACP_Mag_SMG_01","",200 },
		{ "arifle_mas_mp5","MP5",5000 },
		{ "arifle_mas_mp5_v","MP5 Camo",5100 },
		{ "arifle_mas_mp5_d","MP5 Desert",5100 },
		{ "30Rnd_mas_9x21_Stanag","Munitions MP5",300 },
		{ "arifle_TRG21_F","",7000 },
		{ "30Rnd_556x45_Stanag","",400 },
		{ "arifle_SDAR_F","",4000 },
		{ "20Rnd_556x45_UW_mag","",200 },
		{ "LMG_Mk200_F","",11000 },
		{ "200Rnd_65x39_cased_Box","",550 },
		{ "LMG_Zafir_F","",20000 },
		{ "150Rnd_762x51_Box_Tracer","",700 },
		{ "arifle_Mk20_F","",6000 },
		{ "30Rnd_556x45_Stanag_Tracer_Green","",400 },
		{ "arifle_MXC_F","",6500 },
		{ "30Rnd_65x39_caseless_mag_Tracer","",300 },
        { "arifle_Katiba_F","",9000 },
		{ "30Rnd_65x39_caseless_green_mag_Tracer","",450 },
		{ "arifle_mas_m4","M4A1 7.62",7000 },
		{ "arifle_mas_m4_v","M4A1 7.62 Camo",7100 },
		{ "arifle_mas_m4_d","M4A1 7.62 Desert",7100 },
		{ "30Rnd_556x45_Stanag_Tracer_Red","Munitions ROUGES",200 },
		{ "30Rnd_mas_556x45_Stanag","Munitions M4A1",400 },
		{ "arifle_mas_hk416","HK416",8000 },
		{ "arifle_mas_hk416_v","HK416 Camo",8100 },
		{ "arifle_mas_hk416_d","HK416 Desert",8100 },
		{ "30Rnd_556x45_Stanag_Tracer_Green","Munitions VERTES",200 },
		{ "arifle_mas_hk417_m203c","HK417 M203",13200 },
		{ "arifle_mas_hk417_m203c_v","HK417 M203 Camo",13500 },
		{ "arifle_mas_hk417_m203c_d","HK417 M203 Desert",13500 },
		{ "20Rnd_762x51_Mag","Munitions HK417 M203",600 },
		{ "20Rnd_mas_762x51_T_Stanag","Munitions HK417 M203",600 },
		{ "arifle_mas_hk417c","HK417",13000 },
		{ "arifle_mas_hk417c_v","HK417 Camo",13200 },
		{ "arifle_mas_hk417c_d","HK417 Desert",13200 },
		{ "20Rnd_mas_762x51_Stanag","Munitions HK417",600 },
		{ "arifle_mas_m16","M16",6000 },
		{ "30Rnd_mas_556x45_Stanag","Munitions M16",350 },
		{ "30Rnd_556x45_Stanag_Tracer_Yellow","Munitions JAUNES",150 },
		{ "arifle_mas_g3","Fusil G3",14000 },
		{ "20Rnd_mas_762x51_Stanag","Munitions G3",550 },
		{ "arifle_mas_lee","Lee Einfield",11000 },
		{ "5Rnd_mas_762x51_Stanag","Munitions Lee Einfield",300 },
		{ "arifle_mas_l119","L119A1",11000 },
		{ "arifle_mas_l119_v","L119A1 Camo",11200 },
		{ "arifle_mas_l119_d","L119A1 Desert",11200 },
		{ "30Rnd_mas_556x45_Stanag","Munitions L119A1",300 },
		{ "arifle_mas_fal","FN Fal",14000 },
		{ "20Rnd_mas_762x51_Stanag","Munitions FN Fal",600 },
		{ "srifle_mas_hk417","HK417 Heimdall",15000 },
		{ "srifle_mas_hk417_v","HK417 Camo",15200 },
		{ "srifle_mas_hk417_d","HK417 Desert",15200 },
		{ "20Rnd_mas_762x51_Stanag","Munitions HK417",600 },
		{ "srifle_mas_sr25","Fusil SR25",11000 },
		{ "srifle_mas_sr25_v","Fusil SR25 Camo",11200 },
		{ "srifle_mas_sr25_d","Fusil SR25 Desert",11200 },
		{ "20Rnd_mas_762x51_Stanag","Munitions SR25",350 },
		{ "arifle_mas_mk16","SCAR-L canon court",7250 },
		{ "arifle_mas_mk16_l","SCAR-L canon long",7500 },
		{ "30Rnd_mas_556x45_Stanag","Munitions SCAR-L",400 },
		{ "arifle_mas_mk17","SCAR H",15250 },
		{ "20Rnd_mas_762x51_Stanag","Munitions SCAR-L",600 },
		{ "arifle_mas_m1014","Fusil à Pompe",6500 },
		{ "7Rnd_mas_12Gauge_Slug","Munitions Pompes",200 },
		{ "LMG_mas_Mk48_F","MK248",15800 },
		{ "LMG_mas_Mk48_F_v","MK248 Camo",15800 },
		{ "LMG_mas_Mk48_F_d","MK248 Desert",15800 },
		{ "LMG_mas_M240_F","MK240",15800 },
		{ "100Rnd_mas_762x51_Stanag","Munitions MK",600 },
		{ "150Rnd_762x51_Box_Tracer","Munitions MK VERTES",300 },
		{"arifle_mas_ak_74m","AK74M",6500 },
		{ "arifle_mas_ak_74m_c","AK74M Camo",6600 },
		{ "arifle_mas_aks74","AKS74",6600 },
		{ "arifle_mas_ak_74m_sf","AK74M + Poignée",7000 },
		{ "30Rnd_mas_545x39_mag","Munitions AK74M + AKS74",400 },
		{ "arifle_mas_akms","AKMS",14000 },
		{ "arifle_mas_akms_c","AKMS Camo",14200 },
		{ "arifle_mas_akm","AKM",15000 },
		{ "30Rnd_mas_762x39_mag","Munitions AKM",600 },
		{ "arifle_mas_aks74u","AKS 74 U",7021 },
		{ "arifle_mas_aks74u_c","AKS 74 U Camo",7112 },
		{ "30Rnd_mas_545x39_mag","Munitions AKS 74 U",350 },
		{ "arifle_mas_bizon","Bizon",6200 },
		{ "64Rnd_mas_9x18_mag","Munitions Bizon",100 },
		{ "arifle_mas_saiga","Fusil à Pompe SAIGA",5000 },
		{ "10Rnd_mas_12Gauge_Slug","Munitions SAIGA",165 },
		{ "LMG_mas_rpk_F","RPK",9800 },
		{ "30Rnd_mas_545x39_mag","Munitions RPK x30",100 },
		{ "100Rnd_mas_545x39_mag","Munitions RPK x100",500 },
		{ "LMG_mas_pkm_F","PKM",15600 },
		{ "100Rnd_mas_762x54_mag","Munitions PKM",700 },
		{ "srifle_mas_m24","Sniper M24",12600 },
		{ "srifle_mas_m24_v","Sniper M24 Camo",12600 },
		{ "srifle_mas_m24_d","Sniper M24 Desert",12600 },
		{ "5Rnd_mas_762x51_Stanag","Munitions M24",300 },
		{ "srifle_mas_svd","Sniper SVD",13600 },
		{ "10Rnd_mas_762x54_mag","Munitions SVD",200 },
		{ "srifle_mas_m91","Sniper Zastava M91",20600 },
		{ "10Rnd_mas_762x54_mag","Munitions M91",200 },
		{ "HandGrenade_Stone","Flashbang",500 },
		{ "srifle_EBR_F","",12500 },
		{ "20Rnd_762x51_Mag","",350 },
		{ "srifle_DMR_01_SOS_F","",18500 },
		{ "10Rnd_762x51_Mag","",630 },
        { "hgun_ACPC2_F","",1300 },
		{ "9Rnd_45ACP_Mag","",150 },
        { "hgun_Pistol_heavy_01_F","",1500 },
		{ "11Rnd_45ACP_Mag","",100 },
		{ "hgun_Pistol_heavy_02_F","",1500 },
		{ "6Rnd_45ACP_Cylinder","",70 },
		{ "muzzle_mas_snds_L","Silencieu Pistolet",80 },
		{ "muzzle_mas_snds_LM","Silencieux Makarov",80 },
		{ "muzzle_mas_snds_C","Silencieux MP5",400 },
		{ "muzzle_mas_snds_M","Silencieux M4 - M16 - HK14",600 },
		{ "muzzle_mas_snds_SM","Silencieux HK417 - SR25",760 },
		{ "muzzle_mas_snds_AK","Silencieux AK",300 },
		{ "muzzle_mas_snds_SH","Silencieux SVD",800 },
		{ "optic_mas_zeiss","",1000 },
		{ "optic_mas_zeiss_eo","",1250 },
		{ "optic_mas_acog","",100 },
		{ "optic_mas_acog_eo","",150 },
		{ "optic_mas_acog","",100 },
		{ "optic_mas_handle","",50 },
		{ "optic_mas_aim","",50 },
		{ "optic_mas_pso","",150 },
		{ "optic_mas_pso_eo","",250 },
		{ "optic_ACO_grn","",200 },
		{ "optic_Aco","",200 },
		{ "optic_Hamr","",300 },
		{ "optic_Holosight","",300 },
		{ "optic_SOS","",1000 },
		{ "muzzle_snds_M","",500 },
		{ "muzzle_snds_acp","",500 },
		{ "muzzle_snds_H","",500 },
		{ "muzzle_snds_B","",500 },							
		{ "acc_flashlight","",200 }
        };
    };
    class gang {
        name = "Hideout Armament";
        side = "civ";
        license = "";
        level = -1;
        msg = "";
        items[] = {
            { "hgun_Rook40_F", "", 1000 },
            { "hgun_Pistol_heavy_02_F", "", 1200 },
            { "hgun_ACPC2_F", "", 1200 },
            { "hgun_PDW2000_F", "", 2000 },
            { "optic_ACO_grn_smg", "", 200 },
            { "V_Rangemaster_belt", "", 350 },
            { "16Rnd_9x21_Mag", "", 100 },
            { "9Rnd_45ACP_Mag", "", 100 },
            { "6Rnd_45ACP_Cylinder", "", 100 },
            { "30Rnd_9x21_Mag", "", 100 }
        };
    };
	class escobar {
        name = "Escobar";
        side = "civ";
        license = "esco";
        level = -1;
        msg = "";
        items[] = {	
		{ "NVGoggles_OPFOR","",50 },
		{ "srifle_EBR_F","",11520 },
		{ "20Rnd_762x51_Mag","",300 },
		{ "arifle_mas_fal","FN Fal",10050 },
		{ "20Rnd_mas_762x51_Stanag","Munitions FN Fal",500 },
		{ "arifle_mas_mp5","MP5",6200 },
		{ "arifle_mas_mp5_v","MP5 Camo",6250 },
		{ "arifle_mas_mp5_d","MP5 Desert",6250 },
		{ "30Rnd_mas_9x21_Stanag","Munitions MP5",110 },
		{ "arifle_mas_ak_74m_c","AK74M Camo",5075 },
		{ "arifle_mas_aks74","AKS74",5075 },
		{ "30Rnd_mas_545x39_mag","Munitions AK74M + AKS74",280 },
		{ "arifle_mas_arx_l","ARX160 Black",5450 },
		{ "30Rnd_mas_556x45_Stanag","Munitions ARX160",200 },
		{ "arifle_mas_bizon","Bizon",6200 },
		{ "64Rnd_mas_9x18_mag","Munitions Bizon",200 },
		{ "arifle_mas_hk417c","HK417",13500 },
		{ "20Rnd_mas_762x51_Stanag","Munitions HK417",550 },
		{ "arifle_mas_hk416","HK416",7650 },
		{ "arifle_mas_hk416_v","HK416 Camo",7720 },
		{ "arifle_mas_hk416_d","HK416 Desert",7720 },
		{ "30Rnd_556x45_Stanag_Tracer_Green","Munitions VERTES",150 },
		{ "arifle_mas_l119","L119A1",7550 },
		{ "arifle_mas_l119_v","L119A1 Camo",7550 },
		{ "arifle_mas_l119_d","L119A1 Desert",7550 },
		{ "30Rnd_mas_556x45_Stanag","Munitions L119A1",200 },
		{ "arifle_mas_m16","M16",6895 },
		{ "30Rnd_556x45_Stanag_Tracer_Red","Munitions ROUGES",150 },
		{ "30Rnd_mas_556x45_Stanag","Munitions M16",400 },
		{ "arifle_SDAR_F","",5000 },
		{ "20Rnd_556x45_UW_mag","",200 },
		{ "LMG_Mk200_F","",9150 },
		{ "200Rnd_65x39_cased_Box_Tracer","",150 },
		{ "hgun_Rook40_F","",1100 },
		{ "16Rnd_9x21_Mag","",100 },
        { "hgun_ACPC2_F","",1200 },
		{ "9Rnd_45ACP_Mag","",150 },
        { "hgun_Pistol_heavy_01_F","",1500 },
		{ "11Rnd_45ACP_Mag","",120 },
		{ "hgun_Pistol_heavy_02_F","",1500 },
		{ "6Rnd_45ACP_Cylinder","",110 },
		{ "optic_ACO_grn","",200 },
		{ "optic_Aco","",200 },
		{ "optic_Hamr","",300 },
		{ "optic_Holosight","",300 },
		{ "optic_SOS","",1000 },
		{ "optic_MRD","",250 },
		{ "muzzle_snds_M","",500 },
		{ "muzzle_snds_H","",500 },
		{ "muzzle_snds_B","",500 },		
		{ "muzzle_snds_acp","",500 },
		{ "muzzle_mas_snds_L","Silencieu Pistolet",80 },
		{ "muzzle_mas_snds_LM","Silencieux Makarov",80 },
		{ "muzzle_mas_snds_C","Silencieux MP5",100 },
		{ "muzzle_mas_snds_M","Silencieux M4 - M16 - HK14",600 },
		{ "muzzle_mas_snds_SM","Silencieux HK417 - SR25",760 },
		{ "muzzle_mas_snds_AK","Silencieux AK",300 },
		{ "muzzle_mas_snds_SH","Silencieux SVD",800 },
		{ "acc_flashlight","",200 },
		{ "Rangefinder","",5000 },
		{ "SmokeShell","",200 },
		{ "SmokeShellRed","",200 },
		{ "SmokeShellGreen","",200 },
		{ "SmokeShellYellow","",200 },
		{ "SmokeShellPurple","",200 },
		{ "SmokeShellBlue","",200 },
		{ "SmokeShellOrange","",200 },
		{ "muzzle_snds_H_MG","",2500 }
		};
	};
	class hunting_shop {
        name = "Chasseur D'Aurore";
        side = "civ";
        license = "chasse";
        level = -1;
        msg = "";
        items[] = {	
		{ "cl3_crossbow","Arbalete",5500 },
		{ "4Rnd_crossbow_mag","Lot de 4 flèches",75 },
		{ "ItemRadio","Carte SIM",50 },
		{ "Binocular","",15 },
		{ "ItemGPS","",10 },
		{ "ToolKit","",25 },
		{ "FirstAidKit","",15 },
		{ "NVGoggles","",200 }
		};
	};
    //Basic Shops
    class genstore {
        name = "Altis General Store";
        side = "civ";
        license = "";
        level = -1;
        msg = "";
        items[] = {
			{ "ItemRadio", "Carte SIM", 50 },
        	{ "Binocular", "", 150 },
			{ "ItemGPS", "", 100 },
			{ "ToolKit", "", 250 },
			{ "FirstAidKit", "", 150 },
			{ "NVGoggles", "", 1250 },
			{ "Chemlight_red", "", 100 },
			{ "Chemlight_yellow", "", 100 },
			{ "Chemlight_green", "", 100 },
			{ "Chemlight_blue", "", 100 }
        };
    };
    //Cop Shops
	class cop_donateur {
        name = "Gendarme Donateur";
        side = "cop";
        license = "copdonator";
        level = -1;
        msg = "";
        items[] = {
			{ "ItemRadio", "Carte SIM", 10 },
        	{ "srifle_LRR_SOS_F","",100 },
			{ "7Rnd_408_Mag","",10 },
			{ "srifle_mas_m107","M107",35000 },
			{ "5Rnd_mas_127x99_Stanag","Munitions M107",5000 },
			{ "srifle_mas_m24","Sniper M24",6000 },
			{ "5Rnd_mas_762x51_Stanag","Munitions M24",100 },
			{ "mas_launch_RPG7_F","",20000 },
			{ "mas_PG7V","",50000 },
			{ "srifle_mas_vss_h","VSS Vintorez",15000 },
			{ "20Rnd_mas_9x39_mag","Munitions Vintorez",450 },
			{ "hgun_Rook40_F","",50 },
			{ "hgun_PDW2000_F","",650 },
			{ "hgun_pistol_heavy_01_F","",585 },
			{ "arifle_Mk20C_plain_F","",900 },
			{ "arifle_MX_SW_F","",1700 },
			{ "prpl_famas","Famas",900 },
			{ "prpl_famas_tan","Famas Camo",900 },
			{ "prpl_25Rnd_556x45_famas","Munitions Famas",20 },
			{ "prpl_25Rnd_556x45_famas_tracer","Munitions Famas Traçantes",10 },
			{ "arifle_mas_m4","M4A1 7.62",1095 },
			{ "arifle_mas_m1014","Fusil à Pompe",1250 },
			{ "7Rnd_mas_12Gauge_Slug","Munitions Pompes",20 },
			{ "arifle_mas_m16","M16",1895 },
			{ "30Rnd_556x45_Stanag_Tracer_Red","Munitions ROUGES",10 },
			{ "30Rnd_mas_556x45_Stanag","Munitions M16",20 },
			{ "30Rnd_556x45_Stanag_Tracer_Yellow","Munitions JAUNES",10 },
			{ "LMG_Mk200_F","",2000 },
			{ "200Rnd_65x39_cased_Box_Tracer","",15 },
			{ "arifle_mas_mp5","MP5",850 },
			{ "30Rnd_mas_9x21_Stanag","Munitions MP5",10 },
			{ "arifle_mas_fal","FN Fal",3850 },
			{ "20Rnd_mas_762x51_Stanag","Munitions FN Fal",40 },
			{ "arifle_mas_bizon","Bizon",1200 },
			{ "64Rnd_mas_9x18_mag","Munitions Bizon",20 },
			{ "optic_ACO_grn_smg","",75 },
			{ "optic_MRCO","",100 },
			{ "optic_NVS","",200 },
			{ "NVGoggles","",35 },
			{ "optic_mas_zeiss","",50 },
			{ "optic_mas_zeiss_eo","",50 },
			{ "optic_mas_acog","",50 },
			{ "optic_mas_acog_eo","",50 },
			{ "optic_mas_acog","",50 },
			{ "optic_mas_handle","",50 },
			{ "optic_mas_aim","",50 },
			{ "optic_mas_pso","",50 },
			{ "optic_mas_pso_eo","",50 },
		    { "optic_ACO_grn","",200 },
			{ "optic_Aco","",200 },
			{ "optic_Hamr","",300 },
			{ "optic_Holosight","",300 },
			{ "ToolKit","",5 },
			{ "ItemGPS","",5 },
			{ "FirstAidKit","",25 },
			{ "16Rnd_9x21_Mag","",25 },
			{ "30Rnd_9x21_Mag","",75 },
			{ "11Rnd_45ACP_Mag","",85 },
			{ "30Rnd_556x45_Stanag","",125 },
			{ "100Rnd_65x39_caseless_mag_Tracer","",125 },
			{ "200Rnd_65x39_cased_Box_Tracer","",125 }
        };
    };
    class cop_basic {
        name = "Altis Cop Shop";
        side = "cop";
        license = "";
        level = -1;
        msg = "";
        items[] = {
        { "ItemRadio","Carte SIM",50 },
		{ "arifle_SDAR_F","Taser Rifle",2000 },
		{ "30Rnd_556x45_Stanag","Taser Rifle Magazine",125 },
		{ "DDOPP_X26_b","Tazer",200 },
		{ "DDOPP_1Rnd_X26","16 Volts Tazer",5 },
		{ "prpl_famas","Famas",3810 },
		{ "prpl_25Rnd_556x45_famas","Munitions Famas",10 },
		{ "prpl_25Rnd_556x45_famas_tracer","Munitions Famas Traçantes",12 },
		{ "arifle_mas_m4","M4A1 7.62",2995 },
		{ "30Rnd_mas_556x45_Stanag","Munitions M4A1",30 },
		{ "arifle_mas_hk416","HK416",2980 },
		{ "30Rnd_556x45_Stanag_Tracer_Green","Munitions VERTES",20 },
		{ "SMG_02_ACO_F","",2500 },
		{ "30Rnd_9x21_Mag","",25 },
		{ "gign_shield","Bouclier",300 },
		{ "HandGrenade_Stone","Flashbang",100 },
		{ "acc_flashlight","",75 },
		{ "optic_Holosight","",100 },
		{ "optic_Arco","",100 },
		{ "optic_DMS","",100 },
		{ "muzzle_snds_H","",275 },
		{ "muzzle_snds_B","",500 },	
		{ "muzzle_mas_snds_M","Silencieux M4 - M16 - HK416",120 },
		{ "muzzle_mas_snds_L","Silencieux Pistolet",120 },
		{ "optic_mas_zeiss","",150 },
		{ "optic_mas_zeiss_eo","",150 },
		{ "optic_mas_acog","",150 },
		{ "optic_mas_acog_eo","",150 },
		{ "optic_mas_acog","",150 },
		{ "optic_mas_handle","",150 },
		{ "optic_mas_aim","",150 },
		{ "optic_mas_pso","",150 },
		{ "optic_mas_pso_eo","",150 },
		{ "optic_ACO_grn","",200 },
		{ "optic_Aco","",200 },
		{ "optic_Hamr","",300 },
		{ "optic_Holosight","",120 },
		{ "Binocular","",15 },
		{ "ItemMap","",5 },
		{ "ItemGPS","",10 },
		{ "ToolKit","",25 },
		{ "FirstAidKit","",15 },
		{ "Medikit","",100 },
		{ "NVGoggles","",200 },
		{ "Orel_Matraque","Matraque",50 },
		{ "Chemlight_red","",30 },
		{ "Chemlight_yellow","",30 },
		{ "Chemlight_green","",30 },
		{ "Chemlight_blue","",30 },
		{ "SmokeShell","",2 },
		{ "SmokeShellRed","",2 },
		{ "SmokeShellGreen","",2 },
		{ "SmokeShellYellow","",2 },
		{ "SmokeShellPurple","",2 },
		{ "SmokeShellBlue","",2 }
        };
    };
    class cop_patrol {
        name = "Altis Gendarmerie";
        side = "cop";
        license = "";
        level = 2;
        msg = "Tu n'es pas de carriere!";
        items[] = {
        { "ItemRadio", "Carte SIM", 50 },
		{ "B_UavTerminal","Terminal Drone",225 },
		{ "DDOPP_X26_b","Tazer",200 },
		{ "DDOPP_1Rnd_X26","16 Volts Tazer",5 },
		{ "hgun_mas_glock_F","Glock 17",500 },
		{ "30Rnd_9x21_Mag","Munitions Guns",10 },
		{ "prpl_famas","Famas",3610 },
		{ "prpl_famas_tan","Famas Camo",3800 },
		{ "prpl_25Rnd_556x45_famas","Munitions Famas",30 },
		{ "prpl_25Rnd_556x45_famas_tracer","Munitions Famas Traçantes",10 },
		{ "arifle_mas_g36c","G36",2900 },
		{ "30Rnd_mas_556x45_Stanag","Munitions G36",20 },
		{ "srifle_mas_m24","Sniper M24",9690 },
		{ "5Rnd_mas_762x51_Stanag","Munitions M24",200 },
		{ "arifle_mas_m4","M4A1 7.62",2995 },
		{ "arifle_mas_hk416","HK416",2980 },
		{ "30Rnd_556x45_Stanag_Tracer_Green","Munitions VERTES",20 },
		{ "arifle_mas_m1014","Fusil à Pompe",1250 },
		{ "7Rnd_mas_12Gauge_Slug","Munitions Pompes",10 },
		{ "arifle_mas_m16","M16",2895 },
		{ "30Rnd_556x45_Stanag_Tracer_Red","Munitions ROUGES",10 },
		{ "30Rnd_mas_556x45_Stanag","Munitions M16",30 },
		{ "30Rnd_556x45_Stanag_Tracer_Yellow","Munitions JAUNES",10 },
		{ "LMG_Mk200_F","",5000 },
		{ "200Rnd_65x39_cased_Box_Tracer","",25 },
		{ "arifle_mas_mp5","MP5",1950 },
		{ "30Rnd_mas_9x21_Stanag","Munitions MP5",30 },
		{ "srifle_mas_hk417","HK417 Heimdall",9250 },
		{ "20Rnd_mas_762x51_Stanag","Munitions HK417",60 },
		{ "arifle_mas_fal","FN Fal",9250 },
		{ "20Rnd_mas_762x51_Stanag","Munitions FN Fal",50 },
		{ "arifle_mas_bizon","Bizon",3200 },
		{ "64Rnd_mas_9x18_mag","Munitions Bizon",15 },
		{ "arifle_MX_F","",4000 },
		{ "30Rnd_65x39_caseless_mag","",30 },
		{ "arifle_TRG21_ACO_pointer_F","",2500 },
		{ "srifle_EBR_F","",4000 },
		{ "20Rnd_762x51_Mag","",30 },
		{ "SMG_02_ACO_F","",2500 },
		{ "30Rnd_9x21_Mag","",25 },
		{ "arifle_sdar_F","Taser Rifle",2000 },
		{ "30Rnd_556x45_Stanag","Taser Rifle Magazine",15 },
		{ "HandGrenade_Stone","Flashbang",100 },
		{ "gign_shield","Bouclier",300 },
		{ "acc_flashlight","",75 },
		{ "optic_Holosight","",120 },
		{ "optic_Arco","",250 },
		{ "optic_DMS","",100 },
    	{ "muzzle_snds_H","",275 },
		{ "muzzle_snds_B","",500 },	
		{ "muzzle_mas_snds_M","Silencieux M4 - M16 - HK416",120 },
		{ "muzzle_mas_snds_SM","Silencieux HK417",120 },
		{ "muzzle_mas_snds_L","Silencieux Pistolet",120 },
		{ "optic_mas_zeiss","",150 },
		{ "optic_mas_zeiss_eo","",150 },
		{ "optic_mas_acog","",50 },
		{ "optic_mas_acog_eo","",50 },
		{ "optic_mas_acog","",50 },
		{ "optic_mas_handle","",50 },
		{ "optic_mas_aim","",50 },
		{ "optic_mas_pso","",150 },
		{ "optic_mas_pso_eo","",150 },
	    { "optic_ACO_grn","",200 },
		{ "optic_Aco","",100 },
		{ "optic_Hamr","",100 },
		{ "optic_Holosight","",100 },
		{ "Binocular","",10 },
		{ "ItemMap","",5 },
		{ "ItemGPS","",10 },
		{ "ToolKit","",25 },
		{ "FirstAidKit","",15 },
		{ "Medikit","",100 },
		{ "Rangefinder","",100 },
		{ "NVGoggles","",200 },
		{ "Chemlight_red","",30 },
		{ "Chemlight_yellow","",30 },
		{ "Chemlight_green","",30 },
		{ "Chemlight_blue","",30 },
		{ "SmokeShell","",2 },
		{ "SmokeShellRed","",2 },
		{ "SmokeShellGreen","",2 },
		{ "SmokeShellYellow","",2 },
		{ "SmokeShellPurple","",2 },
		{ "SmokeShellBlue","",2 }
        };
    };
    class cop_sergeant {
        name = "Altis Lieutenant";
        side = "cop";
        license = "";
        level = 5;
        msg = "Tu n'es pas Lieutenant!";
        items[] = {
		{ "ItemRadio", "Carte SIM", 50 },
		{ "B_UavTerminal","Terminal Drone",225 },
		{ "H_Beret_blk","",100 },
		{ "srifle_LRR_SOS_F","",21500 },
		{ "7Rnd_408_Mag","",200 },
		{ "srifle_GM6_LRPS_F","",25800 },
		{ "5Rnd_127x108_Mag","",500 },
		{ "srifle_mas_svd","Sniper SVD",3900 },
		{ "10Rnd_mas_762x54_mag","Munitions SVD",100 },
		{ "muzzle_mas_snds_SH","Silencieux SVD",1500 },
		{ "arifle_mas_m4","M4A1 7.62",2795 },
		{ "30Rnd_556x45_Stanag_Tracer_Red","Munitions ROUGES",10 },
		{ "30Rnd_mas_556x45_Stanag","Munitions M4A1",30 },
		{ "arifle_mas_hk416","HK416",2800 },
		{ "30Rnd_556x45_Stanag_Tracer_Green","Munitions VERTES",10 },
		{ "arifle_mas_g36c","G36",2900 },
		{ "30Rnd_mas_556x45_Stanag","Munitions G36",20 },
		{ "arifle_mas_m16","M16",8895 },
		{ "30Rnd_mas_556x45_Stanag","Munitions M16",30 },
		{ "30Rnd_556x45_Stanag_Tracer_Yellow","Munitions JAUNES",10 },
		{ "arifle_mas_mp5","MP5",1950 },
		{ "30Rnd_mas_9x21_Stanag","Munitions MP5",30 },
		{ "hgun_mas_glock_F","Glock 17",500 },
		{ "30Rnd_9x21_Mag","Munitions Guns",10 },
		{ "prpl_famas","Famas",2900 },
		{ "prpl_famas_tan","Famas Camo",2900 },
		{ "prpl_25Rnd_556x45_famas","Munitions Famas",30 },
		{ "prpl_25Rnd_556x45_famas_tracer","Munitions Famas Traçantes",10 },
		{ "arifle_mas_m4","M4A1 7.62",2795 },
		{ "30Rnd_mas_556x45_Stanag","Munitions M4A1",10 },
		{ "arifle_mas_m1014","Fusil à Pompe",1250 },
		{ "7Rnd_mas_12Gauge_Slug","Munitions Pompes",10 },
		{ "LMG_Mk200_F","",5000 },
		{ "200Rnd_65x39_cased_Box_Tracer","",25 },
		{ "srifle_mas_hk417","HK417 Heimdall",9250 },
		{ "20Rnd_mas_762x51_Stanag","Munitions HK417",60 },
		{ "srifle_DMR_01_SOS_F","",11500 },
		{ "10Rnd_762x51_Mag","",50 },
		{ "arifle_MXM_F","",2500 },
		{ "30Rnd_65x39_caseless_mag_Tracer","",10 },
		{ "arifle_TRG21_ACO_pointer_F","",2500 },
		{ "30Rnd_556x45_Stanag_Tracer_Red","",10 },
		{ "SMG_01_Holo_pointer_snds_F","",2500 },
		{ "30Rnd_45ACP_Mag_SMG_01_tracer_green","",10 },
		{ "arifle_Mk20_F","",2500 },
		{ "30Rnd_556x45_Stanag","",10 },
		{ "srifle_EBR_F","",4000 },
		{ "20Rnd_762x51_Mag","",20 },						
		{ "arifle_MX_Black_F","",2500 },
		{ "30Rnd_65x39_caseless_mag","",20 },
		{ "SMG_02_F","",2200 },
		{ "30Rnd_9x21_Mag","",10 },
		{ "DDOPP_X26_b","Stun Pistol",200 },
		{ "DDOPP_1Rnd_X26","",5 },
		{ "HandGrenade_Stone","Flashbang",100 },
		{ "gign_shield","Bouclier",300 },
		{ " acc_flashlight","",75 },
		{ "optic_Holosight","",120 },
		{ "optic_ACO_grn","",120 },
		{ "optic_Aco","",120 },
		{ "optic_SOS","",100 },
		{ "optic_Hamr","",800 },
		{ "optic_DMS","",100 },
		{ "muzzle_snds_M","",500 },
		{ "muzzle_snds_H","",500 },
		{ "muzzle_snds_B","",500 },	
		{ "muzzle_mas_snds_M","Silencieux M4 - M16 - HK416",120 },
		{ "muzzle_mas_snds_SM","Silencieux HK417",760 },
		{ "muzzle_mas_snds_L","Silencieux Pistolet",120 },						
		{ "acc_pointer_IR","",120 },
		{ "optic_mas_zeiss","",150 },
		{ "optic_mas_zeiss_eo","",150 },
		{ "optic_mas_acog","",50 },
		{ "optic_mas_acog_eo","",50 },
		{ "optic_mas_acog","",50 },
		{ "optic_mas_handle","",50 },
		{ "optic_mas_aim","",50 },
		{ "optic_mas_pso","",150 },
		{ "optic_mas_pso_eo","",150 },
		{ "optic_ACO_grn","",200 },
		{ "optic_Aco","",120 },
		{ "optic_Hamr","",300 },
		{ "optic_Holosight","",300 },
		{ "G_Diving","",50 },
		{ "V_RebreatherB","",500 },
		{ "Binocular","",15 },
		{ "ItemMap","",5 },
		{ "ItemGPS","",10 },
		{ "ToolKit","",25 },
		{ "FirstAidKit","",15 },
		{ "Medikit","",100 },
		{ "Rangefinder","",100 },
		{ "NVGoggles","",200 },
		{ "Chemlight_red","",30 },
		{ "Chemlight_yellow","",30 },
		{ "Chemlight_green","",30 },
		{ "Chemlight_blue","",30 },
		{ "SmokeShell","",2 },
		{ "SmokeShellRed","",2 },
		{ "SmokeShellGreen","",2 },
		{ "SmokeShellYellow","",2 },
		{ "SmokeShellPurple","",2 },
		{ "SmokeShellBlue","",2 },
		{ "SmokeShellOrange","",2 }
        };
    };
	
	class cop_colonel {
        name = "Altis Colonel";
        side = "cop";
        license = "";
        level = 6;
        msg = "Tu n'es pas Colonel!";
        items[] = {
		{ "ItemRadio", "Carte SIM", 50 },
		{ "B_UavTerminal", "", 50 },
		{ "H_Beret_Colonel","",500 },
		{ "DDOPP_X26_b","Tazer",200 },
		{ "DDOPP_1Rnd_X26","Munitions 16V",5 },
		{ "srifle_LRR_SOS_F","",12000 },
		{ "7Rnd_408_Mag","",100 },
		{ "srifle_DMR_01_SOS_F","",2000 },
		{ "10Rnd_762x51_Mag","",300 },
		{ "arifle_mas_g36c","G36",2000 },
		{ "30Rnd_mas_556x45_Stanag","Munitions G36",10 },
		{ "srifle_GM6_LRPS_F","",12000 },
		{ "5Rnd_127x108_Mag","",500 },
		{ "hgun_mas_glock_F","Glock 17",50 },
		{ "30Rnd_9x21_Mag","Munitions Guns",10 },
		{ "prpl_famas","Famas",700 },
		{ "prpl_famas_tan","Famas Camo",800 },
		{ "prpl_25Rnd_556x45_famas","Munitions Famas",30 },
		{ "prpl_25Rnd_556x45_famas_tracer","Munitions Famas Traçantes",10 },
		{ "arifle_mas_m4","M4A1 7.62",885 },
		{ "30Rnd_556x45_Stanag_Tracer_Red","Munitions ROUGES",10 },
		{ "30Rnd_mas_556x45_Stanag","Munitions M4A1",30 },
		{ "arifle_mas_m16","M16",885 },
		{ "30Rnd_mas_556x45_Stanag","Munitions M16",30 },
		{ "30Rnd_556x45_Stanag_Tracer_Yellow","Munitions JAUNES",10 },
		{ "arifle_mas_mp5","MP5",750 },
		{ "30Rnd_mas_9x21_Stanag","Munitions MP5",10 },
		{ "arifle_mas_m1014","Fusil à Pompe",350 },
		{ "7Rnd_mas_12Gauge_Slug","Munitions Pompes",10 },
		{ "LMG_Mk200_F","",2000 },
		{ "200Rnd_65x39_cased_Box_Tracer","",15 },
		{ "srifle_mas_hk417","HK417 Heimdall",6125 },
		{ "20Rnd_mas_762x51_Stanag","Munitions HK417",60 },
		{ "arifle_MXM_F","",2500 },
		{ "30Rnd_65x39_caseless_mag_Tracer","",10 },
		{ "arifle_TRG21_ACO_pointer_F","",2500 },
		{ "30Rnd_556x45_Stanag_Tracer_Red","",10 },
		{ "SMG_01_Holo_pointer_snds_F","",2500 },
		{ "30Rnd_45ACP_Mag_SMG_01_tracer_green","",10 },
		{ "arifle_Mk20_F","",1200 },
		{ "30Rnd_556x45_Stanag","",50 },
		{ "srifle_EBR_F","",3000 },
		{ "20Rnd_762x51_Mag","",20 },						
		{ "arifle_MX_Black_F","",2500 },
		{ "30Rnd_65x39_caseless_mag","",13 },
		{ "SMG_02_F","",2200 },
		{ "30Rnd_9x21_Mag","",25 },
		{ "HandGrenade_Stone","Flashbang",100 },
		{ "gign_shield","Bouclier",300 },
		{ "H_Beret_blk","",100 },
		{ "acc_flashlight","",75 },
		{ "optic_Holosight","",100 },
		{ "optic_ACO_grn","",100 },
		{ "optic_Aco","",100 },
		{ "optic_SOS","",50 },
		{ "optic_Hamr","",300 },
		{ " muzzle_mas_snds_M","Silencieux M4 - M16 - HK416",120 },
		{ "muzzle_mas_snds_SM","Silencieux HK417",760 },
		{ "muzzle_mas_snds_L","Silencieux Pistolet",120 },
		{ "muzzle_snds_M","",500 },
		{ "muzzle_snds_H","",500 },
		{ "muzzle_snds_B","",500 },						
		{ "acc_pointer_IR","",120 },
		{ "optic_mas_zeiss","",150 },
		{ "optic_mas_zeiss_eo","",150 },
		{ "optic_mas_acog","",50 },
		{ "optic_mas_acog_eo","",50 },
		{ "optic_mas_acog","",50 },
		{ "optic_mas_handle","",50 },
		{ "optic_mas_aim","",50 },
		{ "optic_mas_pso","",150 },
		{ "optic_mas_pso_eo","",150 },
	    { "optic_ACO_grn","",100 },
		{ "optic_Aco","",100 },
		{ "optic_Hamr","",100 },
		{ "optic_Holosight","",100 },
		{ "G_Diving","",50 },
		{ "V_RebreatherB","",500 },
		{ "Chemlight_red","",30 },
		{ "Chemlight_yellow","",30 },
		{ "Chemlight_green","",30 },
		{ "Chemlight_blue","",30 },
		{ "SmokeShell","",2 },
		{ "SmokeShellRed","",2 },
		{ "SmokeShellGreen","",2 },
		{ "SmokeShellYellow","",2 },
		{ "SmokeShellPurple","",2 },
		{ "SmokeShellBlue","",2 },
		{ "SmokeShellOrange","",2 }
        };
    };
    //Medic Shops
    class med_basic {
        name = "store";
        side = "med";
        license = "";
        level = -1;
        items[] = {
		{ "ItemRadio","Carte SIM",50 },
		{ "ItemGPS","",100 },
		{ "Binocular","",100 },
		{ "ToolKit","",25 },
		{ "FirstAidKit","",25 },
		{ "Medikit","",100 },
		{ "NVGoggles","",150 },
		{ "B_FieldPack_ocamo","",300 }
        };
    };
};