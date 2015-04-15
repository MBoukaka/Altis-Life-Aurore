if(playerSide != civilian) exitWith {};
[] spawn {
	while {true} do
	{
		sleep 300;
		if (life_atmbank > 500000) then {systemChat  "Impots sur la fortunes dans 5 minutes.";};
		sleep 300;
		if (license_civ_rebel OR license_civ_bandit) then {
			switch (true) do 
			{
				case (life_atmbank > 500000 && life_atmbank <= 750000) :
				{
					life_atmbank = life_atmbank - 1500;
					hint parseText format ["<t color='#FFCC00'><t size='2'><t align='center'>IMPOTS<br/><t color='#ffffff'>Tu viens de payer 1500 d'impots."];
				};
				case (life_atmbank > 750000 && life_atmbank <= 1000000) :
				{
					life_atmbank = life_atmbank - 2500;
					hint parseText format ["<t color='#FFCC00'><t size='2'><t align='center'>IMPOTS<br/><t color='#ffffff'>Tu viens de payer 2500 d'impots."];
				};
				case (life_atmbank > 1000000 && life_atmbank <= 1500000) :
				{
					life_atmbank = life_atmbank - 3500;
					hint parseText format ["<t color='#FFCC00'><t size='2'><t align='center'>IMPOTS<br/><t color='#ffffff'>Tu viens de payer 3500 d'impots."];
				};
				case (life_atmbank > 1500000 && life_atmbank <= 2000000) :
				{
					life_atmbank = life_atmbank - 5500;
					hint parseText format ["<t color='#FFCC00'><t size='2'><t align='center'>IMPOTS<br/><t color='#ffffff'>Tu viens de payer 5500 d'impots."];
				};
				case (life_atmbank > 2000000 && life_atmbank <= 2500000) : 
				{
					life_atmbank = life_atmbank - 6500;
					hint parseText format ["<t color='#FFCC00'><t size='2'><t align='center'>IMPOTS<br/><t color='#ffffff'>Tu viens de payer 6500 d'impots."];
				};
				case (life_atmbank > 2500000 && life_atmbank <= 3000000) : 
				{
					life_atmbank = life_atmbank - 8500;
					hint parseText format ["<t color='#FFCC00'><t size='2'><t align='center'>IMPOTS<br/><t color='#ffffff'>Tu viens de payer 8500 d'impots."];
				};
				case (life_atmbank > 3000000 && life_atmbank <= 4000000) : 
				{
					life_atmbank = life_atmbank - 10500;
					hint parseText format ["<t color='#FFCC00'><t size='2'><t align='center'>IMPOTS<br/><t color='#ffffff'>Tu viens de payer 10500 d'impots."];
				};
				case (life_atmbank > 4000000) : 
				{
					life_atmbank = life_atmbank - 15000;
					hint parseText format ["<t color='#FFCC00'><t size='2'><t align='center'>IMPOTS<br/><t color='#ffffff'>Tu viens de payer 15000 d'impots."];
				};
			};
		} else {
			switch (true) do 
			{
				case (life_atmbank > 500000 && life_atmbank <= 750000) : 
				{
					life_atmbank = life_atmbank - 1000;
					hint parseText format ["<t color='#FFCC00'><t size='2'><t align='center'>IMPOTS<br/><t color='#ffffff'>Tu viens de payer 1000 d'impots."];
				};
				case (life_atmbank > 750000 && life_atmbank <= 1000000) : 
				{
					life_atmbank = life_atmbank - 2000;
					hint parseText format ["<t color='#FFCC00'><t size='2'><t align='center'>IMPOTS<br/><t color='#ffffff'>Tu viens de payer 2000 d'impots."];
				};
				case (life_atmbank > 1000000 && life_atmbank <= 1500000) : 
				{
					life_atmbank = life_atmbank - 3000;
					hint parseText format ["<t color='#FFCC00'><t size='2'><t align='center'>IMPOTS<br/><t color='#ffffff'>Tu viens de payer 3000 d'impots."];
				};
				case (life_atmbank > 1500000 && life_atmbank <= 2000000) : 
				{
					life_atmbank = life_atmbank - 4000;
					hint parseText format ["<t color='#FFCC00'><t size='2'><t align='center'>IMPOTS<br/><t color='#ffffff'>Tu viens de payer 4000 d'impots."];
				};
				case (life_atmbank > 2000000 && life_atmbank <= 2500000) : 
				{
					life_atmbank = life_atmbank - 6000;
					hint parseText format ["<t color='#FFCC00'><t size='2'><t align='center'>IMPOTS<br/><t color='#ffffff'>Tu viens de payer 6000 d'impots."];
				};
				case (life_atmbank > 2500000 && life_atmbank <= 3000000) : 
				{
					life_atmbank = life_atmbank - 8000;
					hint parseText format ["<t color='#FFCC00'><t size='2'><t align='center'>IMPOTS<br/><t color='#ffffff'>Tu viens de payer 8000 d'impots."];
				};
				case (life_atmbank > 3000000 && life_atmbank <= 4000000) : 
				{
					life_atmbank = life_atmbank - 10500;
					hint parseText format ["<t color='#FFCC00'><t size='2'><t align='center'>IMPOTS<br/><t color='#ffffff'>Tu viens de payer 10500 d'impots."];
				};
				case (life_atmbank > 4000000) : 
				{
					life_atmbank = life_atmbank - 15000;
					hint parseText format ["<t color='#FFCC00'><t size='2'><t align='center'>IMPOTS<br/><t color='#ffffff'>Tu viens de payer 15000 d'impots."];
				};
			};
		};
		[1] call SOCK_fnc_updatePartial;
	};
};