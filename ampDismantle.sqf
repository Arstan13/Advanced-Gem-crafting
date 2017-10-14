private[];

_player = _this select 1;

_plotCheck = [player, false] call FNC_find_plots;
_hasAccess = [player,_plotCheck select 2] call FNC_check_access;
_distance = (DZE_PlotPoleMod select 0) select 0;

if ((_hasAccess select 0) or (_hasAccess select 2) or (_hasAccess select 3) or (_hasAccess select 4)) then {
  _amplifiers = nearestObjects [player,plotAmplifiers,_distance];
  if (count _amplifiers >= 1) then {
    ["",_player,"",(_amplifiers select 0)] execVM "scripts\buildables\dismantle.sqf";
  } else {
    cutText ["There are no amplifiers on this plot!","PLAIN DOWN"];
  };
};

player removeAction s_amplifier_dismantle;
s_amplifier_dismantle = -1;
  /*{
		_objectID = _x getVariable ["ObjectID","0"];
		_objectUID = _x getVariable ["ObjectUID","0"];
		_typeOf = typeOf _x;

		PVDZ_obj_Destroy = [_objectID,_objectUID,player,_typeOf];
		publicVariableServer "PVDZ_obj_Destroy";

		deleteVehicle _x;
		systemChat format ["Removed heliPad: %1",_typeOf];
	} count _heliPad;
} else {
	systemChat localize "STR_EPOCH_PLAYER_134";
};*/