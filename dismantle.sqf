private["_removeTar","_object","_subTypes","_objectID","_objectUID","_reqTools","_getMats","_isOk","_proceed","_limit","_counter","_branch","_hasTools","_countMats","_pos","_posTGround","_holder","_chance","_against"];

if (dayz_actionInProgress) exitWith {localize "str_player_actionslimit" call dayz_rollingMessages;};
dayz_actionInProgress = true;

_player = _this select 1;
_removeTar = _this select 3; //selfAction arg
_object = typeOf _removeTar;
_subTypes = ["Defenses","Forts","Tents","Towers","Garage","Fuel","MountedWeapons", //topaz
             "Barrels","CargoContainers","ConstructionSite","MiscLarge","MiscSmall","Scaffolding","Sunshades", //emerald
             "Billboards","Boards","Helipads","Informational","RoadsMisc","SignsMisc","TrafficSigns", //amethyst
             "Bushes","SmallPlants","SmallTrees","MediumTrees","LargeTrees","TheDead","Wells", //obsidian
             "FlagsNations","FlagsOrganizations","FlagsMedical","FlagsPlain","FlagsMisc", //sapphire
             "Beds","Benches","Cabinets","Chairs","Desks","Shelves","Tables", //ruby
             "Appliances","Bathroom","Commercial","Electronics","FloorCoverings","MiscInterior","Pictures", //citrine
             "Lightbulbs","LightPoles","Fixtures", //lightbulb
             "RoadsStructures" //roads. only one that produces cursorTargets I hope
             ];
_objectID = _removeTar getVariable ["ObjectID","0"];
_objectUID = _removeTar getVariable ["ObjectUID","0"];

{
_branch = _x;
if (isClass(missionConfigFile >> "Custom_Buildables" >> "Buildables" >> _branch >> _object)) exitWith {
  _reqTools = getArray(missionConfigFile >> "Custom_Buildables" >> "Buildables" >> _branch >> _object >> "requiredtools");
  _getMats = getArray(missionConfigFile >> "Custom_Buildables" >> "Buildables" >> _branch >> _object >> "requiredmaterials");
  };
} forEach _subTypes;

_hasTools = _reqTools call player_hasTools;
  
if (!_hasTools) exitWith { cutText [format["You require all of these %1, to dismantle...",_reqTools], "PLAIN DOWN"];dayz_actionInProgress = false;};

_isOk = true;
_proceed = false;
_limit = 3;
_counter = 0;

while {_isOk} do {
  
  ["Working",0,[20,48,15,0]] call dayz_NutritionSystem;
  player playActionNow "Medic";
  
  cutText [format["Dismantling of target in progress, stage %1 of %2",(_counter + 1),_limit], "PLAIN DOWN"];
  
  _dis=20;
  _sfx = "repair";
  [player,_sfx,0,false,_dis] call dayz_zombieSpeak;
  [player,_dis,true,(getPosATL player)] spawn player_alertZombies;
  
  r_interrupt = false;
  r_doLoop = true;
  _started = false;
  _finished = false;
  DZE_cancelBuilding = false;
  
  while {r_doLoop} do {
    _animState = animationState player;
    _isMedic = ["medic",_animState] call fnc_inString;
    
    if (_isMedic) then {
        _started = true;
    };
    if (_started && !_isMedic) then {
        r_doLoop = false;
        _finished = true;
    };
    if (r_interrupt || (player getVariable["inCombat",false])) exitWith {
        r_doLoop = false;
    };
    if (DZE_cancelBuilding) exitWith {
      r_doLoop = false;
    };
    sleep 0.1;
  };
  r_doLoop = false;
    
  if(!_finished) exitWith {
    _isOk = false;
    _proceed = false;
  };
  
  if(_finished) then {
		_counter = _counter + 1;
	};
  
  if(_counter == _limit) exitWith {
		_isOk = false;
		_proceed = true;
	};

};

if (_proceed) then {
  _countMats = count _getMats;
  _dir = getDir _player;
  _pos = getPos _player;
  _pos = [(_pos select 0)+2*sin(_dir),(_pos select 1)+2*cos(_dir),0];
  _holder = createVehicle ['Weaponholder',_pos,[],0,'NONE'];
  if (_countMats >= 2) then {
    for "_i" from 0 to ((_countMats)- 1) do {
      _chance = round((random 100) + (random 10));
      _against = round((random 50) + (random 10));
      if (_chance > _against) then {
        _holder addMagazineCargoGlobal [(_getMats select _i),1];
      };
    };
  };
  PVDZ_obj_Destroy = [_objectID,_objectUID,(name player)];
  publicVariableServer "PVDZ_obj_Destroy";
  if (isServer) then {
    PVDZ_obj_Destroy call server_deleteObj;
  };
  deleteVehicle _removeTar;
  _holder setPosATL _pos;
  _removeTar reveal [_holder];
  DZE_GearCheckBypass = true;
  player action ["Gear", _holder];
};

dayz_actionInProgress = false;