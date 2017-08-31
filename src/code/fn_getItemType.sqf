params [
	['_itemClassName', '', ['']]
];
if (_itemClassName isEqualTo '') exitWith {-1};
private _itemType = [_itemClassName] call BIS_fnc_itemType;
switch (_itemType select 0) do {
	case "Weapon": {2};
	case "Mine": {1};
	case "Magazine": {1};
	case "Item": {4};
	case "Equipment": {if ((_itemType select 1) == "Backpack" ) then {3} else {4}};
	default {4};
}