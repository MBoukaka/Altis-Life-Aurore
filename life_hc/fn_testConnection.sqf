/*
    Author: H4SHK3KS (ofpectag: H4SH)
    File: fn_testConecction.sqf

    Written for Pirates of Altis
    http://pirates-of-altis.de/
    The usage of this file is restricted to allowed servers (e.g. PoA)
    For further questions contact the author!

    Description:
    Prove a working connection with the hc

    Parameters:
        1: UID
        2: Name

    Returns:
    Nothing
*/
_uid = [_this,0,"",[""]] call BIS_fnc_param;
_name = [_this,1,"",[""]] call BIS_fnc_param;

[format["Connection test: %1 has successfully reached the hc! UID: %2!",_uid,_name]] call HC_Logging;