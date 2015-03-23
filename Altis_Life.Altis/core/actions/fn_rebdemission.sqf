if (!license_civ_rebel) exitWith {hint "Tu n'es meme pas rebel, comment veux-tu demissionner.."};

license_civ_rebel = false;
[2] call SOCK_fnc_updatePartial;

titleText["Vous venez de demissionner des rebels.","PLAIN"];

sleep 2;

life_cash = life_cash + 200000;
[0] call SOCK_fnc_updatePartial;

titleText["L'etat vous donne 200.000 pour cette bonne decision.","PLAIN"];