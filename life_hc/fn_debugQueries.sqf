/*
    Author: H4SHK3KS (ofpectag: H4SH)
    File: fn_debugQueries.sqf

    Written for Pirates of Altis
    http://pirates-of-altis.de/
    The usage of this file is restricted to allowed servers (e.g. PoA)
    For further questions contact the author!

    Description:
    Executes several queries and gives the output to the logs

    Parameters:
    None

    Returns:
    Nothing
*/
_queryArr = [["SELECT COUNT(*) FROM players","player"],["SELECT COUNT(*) FROM vehicles","vehicle"],["SELECT COUNT(*) FROM houses","house"]];

{
    _queryResult = "";
    waitUntil{uisleep (random 0.3); !DB_Async_Active};
    _queryResult = [(_x select 0),2] call DB_fnc_asyncCall;
    [format["Database testing: The database has %1 %2 datas!",(_queryResult select 0),(_x select 1)]] call HC_Logging;

} forEach _queryArr;

[("Finished testing! Going live... ")] call HC_Logging;