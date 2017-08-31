/* #Soxeba
$[
	1.063,
	["inventory",[[0,0,1,1],0.025,0.04,"GUI_GRID"],0,0,0],
	[-1000,"background",[2,"",["0 * GUI_GRID_W + GUI_GRID_X","0 * GUI_GRID_H + GUI_GRID_Y","40 * GUI_GRID_W","25 * GUI_GRID_H"],[-1,-1,-1,-1],[0,0,0,0.75],[-1,-1,-1,-1],"","-1"],[]],
	[-1001,"title",[2,"Inventory Manager",["0 * GUI_GRID_W + GUI_GRID_X","0 * GUI_GRID_H + GUI_GRID_Y","40 * GUI_GRID_W","1 * GUI_GRID_H"],[-1,-1,-1,-1],[0,0,0,0.75],[-1,-1,-1,-1],"","-1"],[]],
	[-1004,"sepV",[2,"",["19.76 * GUI_GRID_W + GUI_GRID_X","1.27 * GUI_GRID_H + GUI_GRID_Y","0.4 * GUI_GRID_W","23.5 * GUI_GRID_H"],[-1,-1,-1,-1],[0,0,0,0.75],[-1,-1,-1,-1],"","-1"],[]],
	[-1006,"capacityBorder",[2,"",["20.5 * GUI_GRID_W + GUI_GRID_X","3.5 * GUI_GRID_H + GUI_GRID_Y","19 * GUI_GRID_W","1 * GUI_GRID_H"],[-1,-1,-1,-1],[0,0,0,0.75],[-1,-1,-1,-1],"","-1"],[]],
	[-1008,"capacityBackground",[2,"",["21 * GUI_GRID_W + GUI_GRID_X","3.75 * GUI_GRID_H + GUI_GRID_Y","18 * GUI_GRID_W","0.5 * GUI_GRID_H"],[-1,-1,-1,-1],[1,1,1,0.25],[-1,-1,-1,-1],"","-1"],[]],
	[-1005,"targetLbl",[2,"Target Vehicle: ",["0.5 * GUI_GRID_W + GUI_GRID_X","1.5 * GUI_GRID_H + GUI_GRID_Y","19 * GUI_GRID_W","1.5 * GUI_GRID_H"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[-1002,"searchLbl",[2,"Search",["0.5 * GUI_GRID_W + GUI_GRID_X","3 * GUI_GRID_H + GUI_GRID_Y","3.5 * GUI_GRID_W","1 * GUI_GRID_H"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[-1003,"currentInventoryLbl",[2,"Current Inventory",["32.5 * GUI_GRID_W + GUI_GRID_X","2.5 * GUI_GRID_H + GUI_GRID_Y","7 * GUI_GRID_W","1 * GUI_GRID_H"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1009,"capacityForeground",[2,"",["21 * GUI_GRID_W + GUI_GRID_X","3.75 * GUI_GRID_H + GUI_GRID_Y","9 * GUI_GRID_W","0.5 * GUI_GRID_H"],[-1,-1,-1,-1],[1,1,1,0.75],[-1,-1,-1,-1],"","-1"],[]],
	[1501,"resultsTree",[2,"",["0.5 * GUI_GRID_W + GUI_GRID_X","6 * GUI_GRID_H + GUI_GRID_Y","19 * GUI_GRID_W","16.5 * GUI_GRID_H"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1500,"currentItemsList",[2,"",["20.5 * GUI_GRID_W + GUI_GRID_X","4.5 * GUI_GRID_H + GUI_GRID_Y","19 * GUI_GRID_W","15 * GUI_GRID_H"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1400,"searchInput",[2,"",["0.5 * GUI_GRID_W + GUI_GRID_X","4 * GUI_GRID_H + GUI_GRID_Y","15.5 * GUI_GRID_W","1.5 * GUI_GRID_H"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"Search Term","-1"],[]],
	[1401,"amountInput",[2,"1",["0.5 * GUI_GRID_W + GUI_GRID_X","23 * GUI_GRID_H + GUI_GRID_Y","15.5 * GUI_GRID_W","1.5 * GUI_GRID_H"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"Amount of Items to Add","-1"],[]],
	[1606,"clearSearchBtn",[2,"Clear",["16.5 * GUI_GRID_W + GUI_GRID_X","4 * GUI_GRID_H + GUI_GRID_Y","3 * GUI_GRID_W","1.5 * GUI_GRID_H"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"Clear Search","-1"],[]],
	[1607,"addBtn",[2,"Add",["16.5 * GUI_GRID_W + GUI_GRID_X","23 * GUI_GRID_H + GUI_GRID_Y","3 * GUI_GRID_W","1.5 * GUI_GRID_H"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"Add X Items To Container","-1"],[]],
	[1600,"deleteOneBtn",[2,"Delete 1",["20.5 * GUI_GRID_W + GUI_GRID_X","20 * GUI_GRID_H + GUI_GRID_Y","5.5 * GUI_GRID_W","2 * GUI_GRID_H"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"Delete 1 Item","-1"],[]],
	[1601,"deleteAllBtn",[2,"Delete All",["27 * GUI_GRID_W + GUI_GRID_X","20 * GUI_GRID_H + GUI_GRID_Y","6 * GUI_GRID_W","2 * GUI_GRID_H"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"Delete All Selected Items","-1"],[]],
	[1602,"clearBtn",[2,"Clear",["34 * GUI_GRID_W + GUI_GRID_X","20 * GUI_GRID_H + GUI_GRID_Y","5.5 * GUI_GRID_W","2 * GUI_GRID_H"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"Clear All Inventory","-1"],[]],
	[1604,"exportBtn",[2,"Export",["20.5 * GUI_GRID_W + GUI_GRID_X","22.5 * GUI_GRID_H + GUI_GRID_Y","5.5 * GUI_GRID_W","2 * GUI_GRID_H"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"Export To Clipboard","-1"],[]],
	[1605,"importBtn",[2,"Import",["27 * GUI_GRID_W + GUI_GRID_X","22.5 * GUI_GRID_H + GUI_GRID_Y","6 * GUI_GRID_W","2 * GUI_GRID_H"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"Import From Clipboard","-1"],[]],
	[1603,"closeBtn",[2,"Close",["34 * GUI_GRID_W + GUI_GRID_X","22.5 * GUI_GRID_H + GUI_GRID_Y","5.5 * GUI_GRID_W","2 * GUI_GRID_H"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"Close","-1"],[]]
]
*/

#define GUI_GRID_X	(0)
#define GUI_GRID_Y	(0)
#define GUI_GRID_W	(0.025)
#define GUI_GRID_H	(0.04)

class RscText;
class RscButton;
class RscListbox;
class RscEdit;
class RscTree;
class ctrlStaticBackgroundDisable;
class ctrlStaticBackgroundDisableTiles;

class EdenInventoryManager {
	idd = 11548;
	enableSimulation = 1;
	enableDisplay = 1;
	onLoad = "uiNamespace setVariable ['EdenInventoryManager', _this select 0]";
	onUnload = "uiNamespace setVariable ['EdenInventoryManager', displayNull]";
	class controlsBackground {		
		class BackgroundDisableTiles : ctrlStaticBackgroundDisableTiles {};
		class BackgroundDisable : ctrlStaticBackgroundDisable {};
		class background: RscText
		{
			idc = -1;
			x = 0 * GUI_GRID_W + GUI_GRID_X;
			y = 0 * GUI_GRID_H + GUI_GRID_Y;
			w = 40 * GUI_GRID_W;
			h = 25 * GUI_GRID_H;
			colorBackground[] = {0,0,0,0.75};
		};
		class title: RscText
		{
			idc = -1;
			text = "Inventory Manager"; //--- ToDo: Localize;
			x = 0 * GUI_GRID_W + GUI_GRID_X;
			y = 0 * GUI_GRID_H + GUI_GRID_Y;
			w = 40 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {0,0,0,0.75};
		};
		class sepV: RscText
		{
			idc = -1;
			x = 19.76 * GUI_GRID_W + GUI_GRID_X;
			y = 1.27 * GUI_GRID_H + GUI_GRID_Y;
			w = 0.4 * GUI_GRID_W;
			h = 23.5 * GUI_GRID_H;
			colorBackground[] = {0,0,0,0.75};
		};
		class capacityBorder: RscText
		{
			idc = -1;
			x = 20.5 * GUI_GRID_W + GUI_GRID_X;
			y = 3.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 19 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {0,0,0,0.75};
		};
		class capacityBackground: RscText
		{
			idc = -1;
			x = 21 * GUI_GRID_W + GUI_GRID_X;
			y = 3.75 * GUI_GRID_H + GUI_GRID_Y;
			w = 18 * GUI_GRID_W;
			h = 0.5 * GUI_GRID_H;
			colorBackground[] = {1,1,1,0.25};
		};
		class targetLbl: RscText
		{
			idc = -1;
			text = "Target Vehicle: "; //--- ToDo: Localize;
			x = 0.5 * GUI_GRID_W + GUI_GRID_X;
			y = 1.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 19 * GUI_GRID_W;
			h = 1.5 * GUI_GRID_H;
		};
		class searchLbl: RscText
		{
			idc = -1;
			text = "Search"; //--- ToDo: Localize;
			x = 0.5 * GUI_GRID_W + GUI_GRID_X;
			y = 3 * GUI_GRID_H + GUI_GRID_Y;
			w = 3.5 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};
		class currentInventoryLbl: RscText
		{
			idc = -1;
			text = "Current Inventory"; //--- ToDo: Localize;
			x = 32.5 * GUI_GRID_W + GUI_GRID_X;
			y = 2.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 7 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};
	};
	class controls {
		class capacityForeground: RscText
		{
			idc = 1009;
			x = 21 * GUI_GRID_W + GUI_GRID_X;
			y = 3.75 * GUI_GRID_H + GUI_GRID_Y;
			w = 9 * GUI_GRID_W;
			h = 0.5 * GUI_GRID_H;
			colorBackground[] = {1,1,1,0.75};
		};
		class allItemsTree: RscTree
		{
			idc = 1501;
			x = 0.5 * GUI_GRID_W + GUI_GRID_X;
			y = 6 * GUI_GRID_H + GUI_GRID_Y;
			w = 19 * GUI_GRID_W;
			h = 16.5 * GUI_GRID_H;
		};
		class inventoryItemsTree: RscTree
		{
			idc = 1500;
			x = 20.5 * GUI_GRID_W + GUI_GRID_X;
			y = 4.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 19 * GUI_GRID_W;
			h = 15 * GUI_GRID_H;
		};
		class searchInput: RscEdit
		{
			idc = 1400;
			x = 0.5 * GUI_GRID_W + GUI_GRID_X;
			y = 4 * GUI_GRID_H + GUI_GRID_Y;
			w = 15.5 * GUI_GRID_W;
			h = 1.5 * GUI_GRID_H;
			tooltip = "Search Term"; //--- ToDo: Localize;
		};
		class amountInput: RscEdit
		{
			idc = 1401;
			text = "1"; //--- ToDo: Localize;
			x = 0.5 * GUI_GRID_W + GUI_GRID_X;
			y = 23 * GUI_GRID_H + GUI_GRID_Y;
			w = 15.5 * GUI_GRID_W;
			h = 1.5 * GUI_GRID_H;
			tooltip = "Amount of Items to Add"; //--- ToDo: Localize;
		};
		class clearSearchBtn: RscButton
		{
			idc = 1606;
			text = "Clear"; //--- ToDo: Localize;
			x = 16.5 * GUI_GRID_W + GUI_GRID_X;
			y = 4 * GUI_GRID_H + GUI_GRID_Y;
			w = 3 * GUI_GRID_W;
			h = 1.5 * GUI_GRID_H;
			tooltip = "Clear Search"; //--- ToDo: Localize;
			onButtonClick = "[] spawn EIM_fnc_clearSearch";
		};
		class addBtn: RscButton
		{
			idc = 1607;
			text = "Add"; //--- ToDo: Localize;
			x = 16.5 * GUI_GRID_W + GUI_GRID_X;
			y = 23 * GUI_GRID_H + GUI_GRID_Y;
			w = 3 * GUI_GRID_W;
			h = 1.5 * GUI_GRID_H;
			tooltip = "Add X Items To Container"; //--- ToDo: Localize;
			onButtonClick = "[] spawn EIM_fnc_addItem";
		};
		class deleteOneBtn: RscButton
		{
			idc = 1600;
			text = "Delete 1"; //--- ToDo: Localize;
			x = 20.5 * GUI_GRID_W + GUI_GRID_X;
			y = 20 * GUI_GRID_H + GUI_GRID_Y;
			w = 5.5 * GUI_GRID_W;
			h = 2 * GUI_GRID_H;
			tooltip = "Delete 1 Item"; //--- ToDo: Localize;
			onButtonClick = "[] spawn EIM_fnc_deleteOne";
		};
		class deleteAllBtn: RscButton
		{
			idc = 1601;
			text = "Delete All"; //--- ToDo: Localize;
			x = 27 * GUI_GRID_W + GUI_GRID_X;
			y = 20 * GUI_GRID_H + GUI_GRID_Y;
			w = 6 * GUI_GRID_W;
			h = 2 * GUI_GRID_H;
			tooltip = "Delete All Selected Items"; //--- ToDo: Localize;
			onButtonClick = "[] spawn EIM_fnc_deleteAll";
		};
		class clearBtn: RscButton
		{
			idc = 1602;
			text = "Clear"; //--- ToDo: Localize;
			x = 34 * GUI_GRID_W + GUI_GRID_X;
			y = 20 * GUI_GRID_H + GUI_GRID_Y;
			w = 5.5 * GUI_GRID_W;
			h = 2 * GUI_GRID_H;
			tooltip = "Clear All Inventory"; //--- ToDo: Localize;
			onButtonClick = "[] spawn EIM_fnc_clearInventory";
		};
		class exportBtn: RscButton
		{
			idc = 1604;
			text = "Export"; //--- ToDo: Localize;
			x = 20.5 * GUI_GRID_W + GUI_GRID_X;
			y = 22.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 5.5 * GUI_GRID_W;
			h = 2 * GUI_GRID_H;
			tooltip = "Export To Clipboard"; //--- ToDo: Localize;
			onButtonClick = "[] spawn EIM_fnc_exportInventory";
		};
		class importBtn: RscButton
		{
			idc = 1605;
			text = "Import"; //--- ToDo: Localize;
			x = 27 * GUI_GRID_W + GUI_GRID_X;
			y = 22.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 6 * GUI_GRID_W;
			h = 2 * GUI_GRID_H;
			tooltip = "Import From Clipboard"; //--- ToDo: Localize;
			onButtonClick = "[] spawn EIM_fnc_importInventory";
		};
		class closeBtn: RscButton
		{
			idc = 1603;
			text = "Close"; //--- ToDo: Localize;
			x = 34 * GUI_GRID_W + GUI_GRID_X;
			y = 22.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 5.5 * GUI_GRID_W;
			h = 2 * GUI_GRID_H;
			tooltip = "Close"; //--- ToDo: Localize;
			onButtonClick = "((ctrlParent (_this select 0)) closeDisplay 1)";
		};
	};
};