set MAKEPBO="C:\Program Files (x86)\Mikero\DePboTools\bin\MakePbo.exe"

rd /s /q @3den_inventory_manager
mkdir @3den_inventory_manager\addons

%MAKEPBO% -U -W -P -@=3den_inventory_manager src @3den_inventory_manager\addons\3den_inventory_manager.pbo
pause
"D:\SteamLibrary\steamapps\common\Arma 3\arma3_x64.exe" -noSplash -name=maca134 -filePatching -world=empty -noPause -showScriptErrors -mod=U:\Projects\ARMA\3den_inventory_manager\@3den_inventory_manager
pause