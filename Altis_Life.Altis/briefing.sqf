waitUntil {!isNull player && player == player};
if(player diarySubjectExists "rules")exitwith{};

player createDiarySubject ["reglements","REGLEMENTS"];
player createDiarySubject ["SITE","Forum/TeamSpeak"];
player createDiarySubject ["safezones","Safe Zones"];
player createDiarySubject ["fines","Peines/Amendes"];
player createDiarySubject ["controls","Controles"];

/*  Example
	player createDiaryRecord ["", //Container
		[
			"", //Subsection
				"
					TEXT HERE<br/>
				"
		]
	];
*/
	player createDiaryRecord ["SITE",
		[
			"SiteWeb",
				"
				<br/>
				Altis Life Aurore<br/>
				Rejoins le forum : www.AltisAurore.fr<br/>
				TeamSpeak :<br/>
				Adresse : altisaurore.ts3serv.com<br/>
				Port : 11041<br/>
				Mot de passe sur le site AltisAurore.fr<br/>
				<br/>
				"
		]
	];

	player createDiaryRecord["safezones",
		[
			"Zone de securite/Safe-Zone",
				"
					<br/>
					Zones de securite signifient:<br/>
					*NE PAS TUER* <br/>
					*PAS DE PRISE D OTAGE* <br/>
					*PAS DE RACKET* <br/>
					Si vous commettez un crime dans une zone de securité, vous serez banni du serveur.<br/>
					<br/>
					Liste des zones approuvées:<br/>
					- Donator Shop<br/>
				"
		]
	];
	
	player createDiaryRecord["reglements",
		[
			"Reglement General",
				"
					<br/>
					* Toute les règles sont sur le Forum merci de bien vouloir les lires<br/>
					* DUPPLIQUER des items ou de l'argent = BAN.<br/>
					* Toute utilisation de logiciel de cheater = BAN</br>
					* Lors d'un controle de Police si on vous sanctionne, vous serez dans l'obligation de payer l'amende sous peine d'etre extradé d'Altis. (RP= payer son amende)<br/>
					* Après un reboot du serveur, Pas de situation RP illégal (braquage, prise d'otage...). Merci d'attendre 20 min<br/>
					* SPAWNKILL = BAN.<br/>
					* MERCI D ATTENDRE AU MOINS 6 POLICIERS POUR TOUT EVENT ! : Pour les bracages ou les prises d'otages..<br/>
					* Respectez chaque joueur;<br/>
					* SUICIDE ou QUITTER pour sortir d'un roleplay, d'être tazed, retenu, arreté, en prison etc... = KICK OU SANCTION.<br/>

				"
		]
	];
	
	player createDiaryRecord["fines",
		[ 
			"Peines Encourues / Amendes",
				"
					<br/>
					LE CODE PENAL D'ALTIS: <br/>
					<br/>
					- Excès de vitesse = 250 €<br/>
					- Non respect de la signalisation = 150 €<br/>
					- Non respect du sens de conduite = 500 €<br/>
					- Survolle des villes : 2.500€<br/>
					- Port d'arme légale en ville = 1.500 €<br/>
					- Armes illégales = 2.500€ + destruction de l'arme<br/>
					- Possession d'un véhicule rebelle = 5.000€ + fourrière,<br/>
					- Possession d'un véhicule rebelle armé = 10.000 + Destruction<br/>
					- Refus de se soumettre à un contrôle = 1.200€<br/>
					- Délis de fuite = 2.500 €<br/>
					- Vol d'un véhicule civil = 5.000€<br/>
					- Vol d'un véhicule de police = 15.000€<br/>
					- Vol de bien matériel et d'argent à un civil = 5.000€<br/>
					- Trafic de Drogue = 2.500€ + 150€ par unité de drogue<br/>
					- Meurtre d'un civil : 8.000€<br/>
					- Meurtre d'un policier = 20.000€<br/>
					- Outrage à agent : A partir de 200€ et à discretion du policier<br/>
				"
		]		
	];
	
	player createDiaryRecord["controls",
		[
			"Menus et commandes",
				"
					Windows: Menu d'Action<br/>				
					Y: Ouvrir le menu joueur<br/>
					U: Fermer ou ouvrir son vehicule<br/>
					C: Siren (Police)<br/>
					T: Ouvrir le coffre du véhicule<br/>
					Shift J : Casque anti bruit<br/>
					Shift R : Menotter<br/>
					Shift F : Coup de poing<br/>
					Shift G : Main sur la tete<br/>
				"
		]
	];