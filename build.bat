set MAKEPBO="C:\Program Files (x86)\Mikero\DePboTools\bin\MakePbo.exe"

rd /s /q @3den_inventory_manager
mkdir @3den_inventory_manager\addons

%MAKEPBO% -U -W -P -@=3den_inventory_manager src @3den_inventory_manager\addons\3den_inventory_manager.pbo
