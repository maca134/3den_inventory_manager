disableSerialization;
params [
	['_target', objNull, [objNull]]
];
private _display = uiNamespace getVariable ['EdenInventoryManager', displayNull];
private _tree = _display displayCtrl 1500;
private _inventory = [];

for "_a" from 0 to 3 do {
	private _b = _tree tvCount [_a];
	private _items = [];
	private _amounts = [];
	for "_c" from 0 to _b-1 do {
		_items pushBack (_tree tvData [_a, _c]);
		_amounts pushBack (_tree tvValue [_a, _c]);
	};
	_inventory pushBack [_items, _amounts];
};
['Inventory exported to clipboard'] call EIM_fnc_message;
copyToClipboard str _inventory;