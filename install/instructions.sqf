find 
call compile preprocessFileLineNumbers "\z\addons\dayz_code\init\variables.sqf";
 
and add the following line underneath it
call compile preprocessFileLineNumbers "scripts\Buildables\variables.sqf";
 
find 
call compile preprocessFileLineNumbers "\z\addons\dayz_code\init\compiles.sqf";
 
and add the following line underneath it
call compile preprocessFileLineNumbers "scripts\Buildables\Crafting_Compiles.sqf

add these lines to the very bottom of the file
 
#include "scripts\Buildables\MT_Defines.hpp"
#include "scripts\Buildables\Crafting_Defines.hpp"
#include "scripts\Buildables\Crafting_Dialogs.hpp"
#include "scripts\Buildables\zCraft\description.hpp"
#include "scripts\Buildables\zCraft\zCraft.hpp"

This step will allow your players to remove items they craft just like they can currently remove Epoch items. If they die, they will no longer be able to remove them. 
 
find: around ln 261
 
_isModular = _cursorTarget isKindOf "ModularItems";
 
and change that entire line to:
_isModular = (_cursorTarget isKindOf "ModularItems") or ((typeOf _cursorTarget) in Custom_Buildables);

credits @Raymiz and @Hogscraper for the Original code!
        @theduke for updating Advanced Alchemical Crafting to 1.0.6.1
        @Zupa for coding the zCraft menu itself
        @Ghostis for bringing us the zCraft menu