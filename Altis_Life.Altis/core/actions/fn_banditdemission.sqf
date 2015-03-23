if (!license_civ_bandit) exitWith {hint "Tu n'es meme pas bandit, comment veux-tu demissionner.."};

license_civ_bandit = false;
[2] call SOCK_fnc_updatePartial;

titleText["Vous venez de demissionner des bandits.","PLAIN"];

sleep 2;

life_cash = life_cash + 40000;
[] call life_fnc_hudUpdate;
[0] call SOCK_fnc_updatePartial;

titleText["L'etat vous donne 40.000 pour cette bonne decision.","PLAIN"];