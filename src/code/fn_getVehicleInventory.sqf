params [
	['_target', objNull, [objNull]]
];
if (is3DEN) then {
	private _ammoBox = (_target get3DENAttribute 'ammoBox') select 0;
	if (isNil '_ammoBox') then {
		_ammoBox = [[[[],[]],[[],[]],[[],[]],[[],[]]],false];
	};
	(parseSimpleArray _ammoBox) select 0
} else {
	[getWeaponCargo _target, getMagazineCargo _target, getItemCargo _target, getBackpackCargo _target]
}

