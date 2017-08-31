private _weapons = [];
private _magazines = [];
private _items = [];
private _backpacks = [];

{
	private _configName = configName _x;
	if (([_configName] call EIM_fnc_getItemType) isEqualTo 2) then {
		_weapons pushBackUnique [getText (_x >> 'displayName'), _configName, getText (_x >> 'picture')];
	} else {
		_items pushBackUnique [getText (_x >> 'displayName'), _configName, getText (_x >> 'picture')];
	};
} forEach ('(getNumber(_x >> "scope") isEqualTo 2) && ([getText(_x >> "picture")] call EIM_fnc_validPic) && !((getText (_x >> "displayName")) isEqualTo "")' configClasses (configFile >> 'CfgWeapons'));

{
	_magazines pushBackUnique [getText (_x >> 'displayName'), configName _x, getText (_x >> 'picture')];
} forEach ('(getNumber(_x >> "scope") isEqualTo 2) && {[getText(_x >> "picture")] call EIM_fnc_validPic}' configClasses (configFile >> 'CfgMagazines'));

{
	_backpacks pushBackUnique [getText (_x >> 'displayName'), configName _x, getText (_x >> 'picture')];
} forEach ('(getNumber(_x >> "scope") isEqualTo 2) && {(getText(_x >> "vehicleClass") isEqualTo "Backpacks")}' configClasses (configFile >> 'CfgVehicles'));

_weapons sort true;
_magazines sort true;
_items sort true;
_backpacks sort true;

[['Weapons', _weapons], ['Magazines', _magazines], ['Items', _items], ['Backpacks', _backpacks]]