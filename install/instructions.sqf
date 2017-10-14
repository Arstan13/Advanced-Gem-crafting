find 
call compile preprocessFileLineNumbers "\z\addons\dayz_code\init\variables.sqf";
 
and add the following line underneath it
call compile preprocessFileLineNumbers "scripts\Buildables\variables.sqf";
 
find 
call compile preprocessFileLineNumbers "\z\addons\dayz_code\init\compiles.sqf";
 
and add the following line underneath it
call compile preprocessFileLineNumbers "scripts\Buildables\Crafting_Compiles.sqf";

add these lines to the very bottom of the file
 
#include "scripts\Buildables\MT_Defines.hpp"
#include "scripts\Buildables\Crafting_Defines.hpp"
#include "scripts\Buildables\Crafting_Dialogs.hpp"
#include "scripts\Buildables\zCraft\description.hpp"
#include "scripts\Buildables\zCraft\zCraft.hpp"

This step will allow your players to remove items they craft just like they can currently remove Epoch items. If they die, they will no longer be able to remove them. 
 
open fn_selfActions.sqf find around ln 261
 
_isModular = _cursorTarget isKindOf "ModularItems";
 
and change that entire line to:
_isModular = (_cursorTarget isKindOf "ModularItems") or ((typeOf _cursorTarget) in Custom_Buildables);

add this code

  if ((_typeOfCursorTarget in Custom_Buildables) && (player distance _cursorTarget <= 5) && {speed player <= 1} && (_canDo)) then {
		_hasAccess = [player, _cursorTarget] call FNC_check_access; //checks if player has rights to object
		_allowed = ((_hasAccess select 0) || (_hasAccess select 2) || (_hasAccess select 3) || (_hasAccess select 4)); //returns values from fn_checkAccess of [_player, _isOwner, _isFriendly, _isPlotOwner]
		if ((s_custom_dismantle < 0) && (_allowed || (_hasAccess select 1))) then {
			s_custom_dismantle = player addAction [("<t color=""#FF0000"">"+("Dismantle Object") + "</t>"), "scripts\buildables\dismantle.sqf",_cursorTarget, 3, true, true];
		};
	} else {
		player removeAction s_custom_dismantle;
		s_custom_dismantle = -1;
	};
  
  if (_typeOfCursorTarget == "Plastic_Pole_EP1_DZ" && {speed player <= 1}) then {
		_hasAccess = [player, _cursorTarget] call FNC_check_access; //checks if player has rights to object
		_allowed = ((_hasAccess select 0) || (_hasAccess select 2) || (_hasAccess select 3) || (_hasAccess select 4)); //returns values from fn_checkAccess of [_player, _isOwner, _isFriendly, _isPlotOwner]
		if ((s_amplifier_dismantle < 0) && (_allowed || (_hasAccess select 1))) then {
			s_amplifier_dismantle = player addAction [("<t color=""#b7b7b5"">"+("Dismantle Amplifier") + "</t>"), "scripts\buildables\ampDismantle.sqf",_cursorTarget, 3, true, true];
		};
	} else {
		player removeAction s_amplifier_dismantle;
		s_amplifier_dismantle = -1;
	};
  
above tame dogs code to use the custom dismantle script for all the buildables

this goes in the self_action resets in fn_selfActions

player removeAction s_custom_dismantle; //buildables dismantle
s_custom_dismantle = -1;
player removeAction s_amplifier_dismantle;
s_amplifier_dismantle = -1;

and this into your variables.sqf

s_custom_dismantle = -1;
s_amplifier_dismantle = -1;

credits @Raymiz and @Hogscraper for the Original code!
        @theduke for updating Advanced Alchemical Crafting to 1.0.6.1
        @Zupa for coding the zCraft menu itself
        @Ghostis for bringing us the zCraft menu to advanced alchemical crafting
