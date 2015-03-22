if (!license_civ_taxi) exitWith {hint "Tu n'es meme pas chauffeur de taxi, comment veux-tu demissionner.."};

license_civ_taxi = false;
[2] call SOCK_fnc_updatePartial;

titleText["Vous venez de demissionner du metier de chauffeur de Taxi.","PLAIN"];