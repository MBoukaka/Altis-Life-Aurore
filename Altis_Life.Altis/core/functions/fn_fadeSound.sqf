/*
	File: fn_fadeSound.sqf
	Auhtor: Michael Francis
	
	Description:
	Casque Anti-Bruit
*/
life_fadeSound = !life_fadeSound;

if (life_fadeSound) then 
{
	1 fadeSound 0.1; // R�duit � 10%
	hint "Casque anti-bruit ON";
}
else
{
	1 fadeSound 1; // Retourn� a la normal (100%)
	hint "Casque anti-bruit OFF";
};

playSound "earplug";