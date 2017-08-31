#define true		1
#define false		0

#define private		0
#define protected	1
#define public		2

class CfgPatches {
	class 3den_inventory_manager {
		units[] = {};
		weapons[] = {};
		requiredAddons[] = {"3DEN"};
		requiredVersion = 0.1;
		magazines[] = {};
		ammo[] = {};
	};
};

class CfgFunctions {
	class 3den_inventory_manager {
		tag = "EIM";
		class Core {
			file = "3den_inventory_manager\code";
			class addItem {};
			class clearInventory {};
			class clearSearch {};
			class deleteAll {};
			class deleteOne {};
			class exportInventory {};
			class getAllItems {};
			class getItemType {};
			class getVehicleInventory {};
			class setVehicleLoad {};
			class importInventory {};
			class loadInventoryTree {};
			class loadItemTree {};
			class message {};
			class onSearchKeyUp {};
			class open {};
			class setVehicleInventory {};
			class validPic {};
		};
	};
};

class ctrlMenuStrip;
class display3DEN {
	class Controls {
		class Items {
			items[] += {"EIM_InventoryManager"};
		};
		class EIM_InventoryManager {
			text = "InventoryManager";
			action = "[] call EIM_fnc_open;";
		};
	};
};

#include "InventoryManager.cpp"