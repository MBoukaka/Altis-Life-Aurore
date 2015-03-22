if (!license_civ_dep) exitWith {hint "Tu n'es meme pas depanneur, comment veux-tu demissionner.."};

license_civ_dep = false;
[2] call SOCK_fnc_updatePartial;

titleText["Vous venez de demissionner du metier de Depanneur.","PLAIN"];