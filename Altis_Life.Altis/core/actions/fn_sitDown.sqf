//////////////////////////////////////////////////////////////////////////
//                            Script Made By                            //
//                                MacRae                                //
//                                                                      //
//                           MODIFIED BY NiiRoZz                        //
//////////////////////////////////////////////////////////////////////////
if(life_sitting) then{
    player switchMove "";
    life_sitting = false;
} else {
    _chair = cursorTarget;
	
	player switchMove "Crew";
	[[player,"Crew"],"life_fnc_animSync",true,false] spawn life_fnc_MP;
    player setPos (getPos _chair); 
    player setDir ((getDir _chair) - 180); 
    player setpos [getpos player select 0, getpos player select 1,((getpos player select 2) +1)];
    life_sitting = true;
};