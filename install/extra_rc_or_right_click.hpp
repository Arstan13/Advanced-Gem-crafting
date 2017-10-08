If you Want to use Extra_RC method, this should be all you need

class ExtraRc {
	class ItemToolbox {
    class Crafting_Menu {
      text = "Crafting Menu";
      script = "closeDialog 0;createDialog ""ZCraft"";";
    };
  };
  class ItemPickAxe {
    class Remove_Road {
      text = "Remove Road";
      script = "closeDialog 0;execVM 'scripts\buildables\roadDismantle.sqf';";
    };
  };	
};

if you want to use click actions, then add this to your config

["ItemToolbox","Crafting Menu","closeDialog 0;createDialog ""ZCraft"";","true"],
["ItemPickAxe","Remove Road","closeDialog 0;execVM 'scripts\buildables\roadDismantle.sqf';","true"]

if you want to use a keybind then that is on you, just call the scripts from their right locations
