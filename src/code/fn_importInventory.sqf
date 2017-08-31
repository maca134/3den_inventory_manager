disableSerialization;
params [
	['_target', objNull, [objNull]]
];
private _display = uiNamespace getVariable ['EdenInventoryManager', displayNull];
private _tree = _display displayCtrl 1500;
private _inventory = call compile copyFromClipboard;

tvClear _tree;
_tree tvAdd [[], 'Weapons'];
_tree tvAdd [[], 'Magazines'];
_tree tvAdd [[], 'Items'];
_tree tvAdd [[], 'Backpacks'];
{
	private _catid = _forEachIndex;
	private _cfg = switch (_catid) do {
		case 0: {configFile >> 'CfgWeapons'};
		case 1: {configFile >> 'CfgMagazines'};
		case 2: {configFile >> 'CfgWeapons'};
		case 3: {configFile >> 'CfgVehicles'};
	};
	for '_i' from 0 to count (_x select 0) -1 do {
		private _classname = (_x select 0) select _i;
		private _amount = (_x select 1) select _i;
		_tree tvAdd [[_catid], getText (_cfg >> _classname >> 'displayName')];
		private _path = [_catid, _i];
		_tree tvSetData [_path, _classname];
		_tree tvSetValue [_path, _amount];
		_tree tvSetPicture [_path, getText (_cfg >> _classname >> 'picture')];
	};
} forEach _inventory;

['Inventory imported from clipboard'] call EIM_fnc_message;
[_target] call EIM_fnc_setVehicleInventory;