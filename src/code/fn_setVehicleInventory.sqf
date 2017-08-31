disableSerialization;
params [
	['_target', objNull, [objNull]]
];
private _display = uiNamespace getVariable ['EdenInventoryManager', displayNull];
private _target = _display getVariable ['EIM_Target', objNull];
private _tree = _display displayCtrl 1500;
private _inventory = [];

for "_a" from 0 to 3 do {
	private _b = _tree tvCount [_a];
	private _items = [];
	private _amounts = [];
	for "_c" from 0 to _b do {
		_items pushBack (_tree tvData [_a, _c]);
		_amounts pushBack (_tree tvValue [_a, _c]);
	};
	_inventory pushBack [_items, _amounts];
};
if (is3DEN) then {
	_target set3DENAttribute ['ammoBox', [_inventory, false]];
} else {
	[_target, [_inventory, false]] call BIS_fnc_initAmmoBox;
};
[_target] call EIM_fnc_setVehicleLoad;