/*
	File: fn_equipGear.sqf
*/

if(playerSide == civilian) then {
	if (license_civ_wp) then
	{
		if ((uniform player) == "U_Rangemaster") then
		{
			[[player,"aurore_data\textures\uniform_wp.jpg"], "life_fnc_setTexture", true, true] spawn life_fnc_MP;
		};
	};
	if (license_civ_esco) then
	{
		if ((uniform player) == "U_B_CombatUniform_mcam") then
		{
			[[player,"aurore_data\textures\treillis_bw.jpg"], "life_fnc_setTexture", true, true] spawn life_fnc_MP;
		};
	};
	if (license_civ_dep) then
	{
		if ((uniform player) == "U_Rangemaster") then
		{
			[[player,"aurore_data2\data\uniform_dep.jpg"], "life_fnc_setTexture", true, true] spawn life_fnc_MP;
		};
	};
};

if(playerSide == independent) then {
	if ((uniform player) == "U_Rangemaster") then
	{
		[[player,"aurore_data\textures\medic_uniform.jpg"], "life_fnc_setTexture", true, true] spawn life_fnc_MP;
	};	
};

if(playerSide == west) then {
	if ((uniform player) == "U_Rangemaster") then
	{
		[[player,"aurore_data2\icons\gendarmerie_polo.paa"], "life_fnc_setTexture", true, true] spawn life_fnc_MP;
	};
	
	if ((uniform player) == "U_B_SpecopsUniform_sgg") then
	{
		[[player,"aurore_data2\icons\gendarmerie_polaire.paa"], "life_fnc_setTexture", true, true] spawn life_fnc_MP;
	};
	
	if ((uniform player) == "U_B_CombatUniform_mcam_worn") then
	{
		[[player,"aurore_data2\icons\gendarmerie_gf.paa"], "life_fnc_setTexture", true, true] spawn life_fnc_MP;
	};
	
	if ((uniform player) == "U_O_OfficerUniform_ocamo") then
	{
		[[player,"aurore_data2\icons\gendarmerie_motard.paa"], "life_fnc_setTexture", true, true] spawn life_fnc_MP;
	};
};