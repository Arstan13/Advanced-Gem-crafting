class Custom_Buildables {
	class Buildables{
    class Default {
      //This is a list of tools and materials used below if you wish to make new classes or edit ones already here
      //
      //,"ItemHatchet","ItemToolbox","ItemCrowbar","ItemKnife","ItemEtool","ItemSledge"
      //,"bulk_ItemSandbag","bulk_PartGeneric","PartPlankPack","PartPlywoodPack","CinderBlocks","MortarBucket"
      //,"PartFueltank","PartWoodPile","PartGlass","ItemFuelBarrel","ItemPole","metal_panel_kit","PartWoodLumber"
      //,"ItemCanvas","ItemBurlap","ItemZombieParts","ItemSandbagExLarge","ItemSandbagExLarge5x","PartGeneric"
      //,"ItemTankTrap","ItemWire"
      //,"desert_large_net_kit","forest_large_net_kit"
      offset[]={0,3,0};
      requiredtools[] = {};
      requiredmaterials[] ={};
      requireplot = 1;
    };
    class DefaultAmethyst:Default {
      offset[]={0,3,1};	
      requiredtools[] = {"ItemToolbox"};
      requiredmaterials[] ={"ItemGoldBar10oz","ItemGoldBar10oz"};
    };	
    class DefaultCitrine:Default {
      offset[]={0,2,1};
      requiredtools[] = {"ItemToolbox"};		
      requiredmaterials[] ={"ItemGoldBar10oz","ItemGoldBar10oz"};
    };	
    class DefaultEmerald:Default {
      offset[]={0,3,1};
      requiredtools[] = {"ItemToolbox"};		
      requiredmaterials[] ={"ItemGoldBar10oz","ItemGoldBar10oz"};
    };	
    class DefaultObsidian:Default {
      offset[]={0,3,1};
      requiredtools[] = {"ItemToolbox"};		
      requiredmaterials[] ={"ItemGoldBar10oz","ItemGoldBar10oz"};
    };	
    class DefaultRuby:Default {
      offset[]={0,3,1};
      requiredtools[] = {"ItemToolbox"};		
      requiredmaterials[] ={"ItemGoldBar10oz","ItemGoldBar10oz"};
    };		
    class DefaultSapphire:Default {
      offset[]={0,5,4};
      requiredtools[] = {"ItemToolbox"};		
      requiredmaterials[] ={"ItemGoldBar10oz","ItemGoldBar10oz"};
    };	
    class DefaultFlag:Default {
      offset[]={0,5,4};
      requiredtools[] = {"ItemToolbox","ItemCrowbar","ItemEtool","ItemSledge"};		
      requiredmaterials[] ={"ItemPole","ItemPole","ItemPole","ItemCanvas"};
    };
    class DefaultBeds:Default {
      offset[]={0,2,0};
      requiredtools[] = {"ItemToolbox","ItemHatchet","ItemKnife"};		
      requiredmaterials[] ={"ItemWoodLumber","PartPlankPack","PartPlywoodPack","equip_nails"};
    };	
    class DefaultBenches:Default {
      offset[]={0,3,1};
      requiredtools[] = {"ItemToolbox","ItemHatchet","ItemKnife","ItemSledge"};		
      requiredmaterials[] ={"PartPlankPack","PartPlankPack","equip_nails"};
    };	
    class DefaultCabinets:Default {
      offset[]={0,2,0};
      requiredtools[] = {"ItemToolbox","ItemHatchet","ItemKnife","ItemSledge"};		
      requiredmaterials[] ={"PartPlywoodPack","PartPlywoodPack","PartPlankPack","equip_nails"};
    };	
    class DefaultChairs:Default {
      offset[]={0,2,0};
      requiredtools[] = {"ItemToolbox","ItemHatchet","ItemKnife","ItemSledge"};		
      requiredmaterials[] ={"PartPlankPack","equip_nails"};
    };	
    class DefaultAppliances:Default {
      offset[]={0,2,0};
      requiredtools[] = {"ItemToolbox","ItemCrowbar","ItemSledge"};		
      requiredmaterials[] ={"bulk_PartGeneric","bulk_PartGeneric"};
    };
    class DefaultBathroom:Default {
      offset[]={0,2,0};
      requiredtools[] = {"ItemToolbox","ItemCrowbar","ItemSledge"};		
      requiredmaterials[] ={"bulk_PartGeneric","PartGeneric"};
    };
    class DefaultElectronics:Default {
      offset[]={0,2,1};
      requiredtools[] = {"ItemToolbox"};		
      requiredmaterials[] ={"PartGeneric","PartGeneric"};
    };	
    class DefaultFloorCoverings:Default {
      offset[]={0,2,0};
      requiredtools[] = {"ItemToolbox","ItemKnife"};		
      requiredmaterials[] ={"ItemCanvas","ItemCanvas","ItemCanvas"};
    };		
    class DefaultPictures:Default {
      offset[]={0,2,1};
      requiredtools[] = {"ItemToolbox","ItemHatchet","ItemKnife"};		
      requiredmaterials[] ={"PartPlankPack","equip_nails"};
    };		
    class DefaultLightbulbs:Default {
      offset[]={0,2,1};
      requiredtools[] = {"ItemToolbox"};
      requiredmaterials[] ={"ItemLightBulb","equip_d_battery","PartGeneric"};
    };
    class DefaultLightPoles:Default {
      offset[]={0,3,5};
      requiredtools[] = {"ItemToolbox","ItemCrowbar","ItemEtool","ItemSledge"};
      requiredmaterials[] ={"ItemLightBulb","bulk_PartGeneric","ItemPole","ItemPole","ItemPole"};
    };
    class DefaultLightFixtures:Default {
      offset[]={0,2,1};
      requiredtools[] = {"ItemToolbox"};
      requiredmaterials[] ={"ItemLightBulb","PartGeneric","PartGeneric"};
    };	
    class DefaultDefensesConcrete:Default {
      offset[]={0,5,1};
      requiredtools[] = {"ItemToolbox","ItemCrowbar","ItemEtool","ItemSledge"};
      requiredmaterials[] ={"CinderBlocks","CinderBlocks","CinderBlocks"};
    };
    class DefaultDefensesMetal:Default {
      offset[]={0,5,1};
      requiredtools[] = {"ItemToolbox","ItemCrowbar","ItemEtool","ItemSledge"};
      requiredmaterials[] ={"bulk_PartGeneric","bulk_PartGeneric"};
    };	
    class DefaultBushes:Default {
      offset[]={0,3,1};
      requiredtools[] = {"ItemToolbox","ItemEtool"};
      requiredmaterials[] ={"equip_herb_box","ItemWaterBottle"};
    };	
    class DefaultSmallTrees:Default {
    offset[]={0,10,4};	//-3	offset[]={0,10,7};
      requiredtools[] = {"ItemToolbox","ItemEtool"};
      requiredmaterials[] ={"equip_herb_box","ItemWaterBottle""ItemWaterBottle"};
    };
    class DefaultMediumTrees:Default {
      offset[]={0,10,7};
      requiredtools[] = {"ItemToolbox","ItemEtool","ItemKnife"};
      requiredmaterials[] ={"equip_herb_box","equip_herb_box","ItemWaterBottle","ItemWaterBottle"};
    };	
    class DefaultLargeTrees:Default {
      offset[]={0,10,11};
      requiredtools[] = {"ItemToolbox","ItemEtool","ItemKnife"};
      requiredmaterials[] ={"equip_herb_box","equip_herb_box","ItemWaterBottle","ItemWaterBottle","ItemWaterBottle"};
    };	
    class DefaultWells:Default {
      offset[]={0,3,1};
      requiredtools[] = {"ItemToolbox","ItemEtool","ItemSledge"};
      requiredmaterials[] ={"ItemPole","PartGeneric","CinderBlocks","CinderBlocks","CinderBlocks","MortarBucket"};
    };
    class DefaultBillboards:Default {
      offset[]={0,6,1};	
      requiredtools[] = {"ItemToolbox","ItemHatchet","ItemEtool","ItemSledge"};		
      requiredmaterials[] ={"PartPlywoodPack","PartPlywoodPack","PartPlywoodPack","PartPlankPack","ItemPole","ItemPole","CinderBlocks","equip_nails"};
    };
    class DefaultBoards:Default {
      offset[]={0,3,1};	
      requiredtools[] = {"ItemToolbox","ItemHatchet","ItemSledge"};		
      requiredmaterials[] ={"PartPlywoodPack","equip_nails"};
    };	
    class DefaultHelipads:Default {
      offset[]={0,3,0};	
      requiredtools[] = {"ItemToolbox"};		
      requiredmaterials[] ={"equip_paint","equip_rag"};
    };	
    class DefaultRoadMisc:Default {
      offset[]={0,3,1};	
      requiredtools[] = {"ItemToolbox","ItemSledge"};
      requiredmaterials[] ={"ItemPole","ItemPole","CinderBlocks"};
    };
    class DefaultSignsMisc:Default {
      offset[]={0,3,1};	
      requiredtools[] = {"ItemToolbox","ItemSledge"};
      requiredmaterials[] ={"ItemPole","ItemPole","PartGeneric"};
    };	
    class DefaultBarrel:Default {
      offset[]={0,3,1};	
      requiredtools[] = {"ItemToolbox","ItemCrowbar","ItemSledge"};
      requiredmaterials[] ={"bulk_PartGeneric","equip_metal_sheet"};
    };	
    class DefaultBarrels:Default {
      offset[]={0,3,1};	
      requiredtools[] = {"ItemToolbox","ItemCrowbar","ItemSledge"};
      requiredmaterials[] ={"bulk_PartGeneric","bulk_PartGeneric","bulk_PartGeneric"};
    };		
    class DefaultCargoContainersS:Default {
      offset[]={0,3,1};	
      requiredtools[] = {"ItemToolbox","ItemCrowbar","ItemSledge"};		
      requiredmaterials[] ={"bulk_PartGeneric","metal_panel_kit"};
    };	
    class DefaultCargoContainersM:Default {
      offset[]={0,3,1};	
      requiredtools[] = {"ItemToolbox","ItemCrowbar","ItemSledge"};		
      requiredmaterials[] ={"bulk_PartGeneric","metal_panel_kit","metal_panel_kit","metal_panel_kit"};
    };
    class DefaultCargoContainersL:Default {
      offset[]={0,5,2};
      requiredtools[] = {"ItemToolbox","ItemCrowbar","ItemSledge"};		
      requiredmaterials[] ={"bulk_PartGeneric","metal_panel_kit","metal_panel_kit","metal_panel_kit","metal_panel_kit","metal_panel_kit","metal_panel_kit"};
    };	
    class DefaultCargoContainersW:Default {
      offset[]={0,3,1};	
      requiredtools[] = {"ItemToolbox","ItemCrowbar"};		
      requiredmaterials[] ={"PartPlankPack","PartPlankPack"};
    };	
    class DefaultSunshadesS:Default {
      offset[]={0,2.5,2};
      requiredtools[] = {"ItemToolbox","ItemKnife"};		
      requiredmaterials[] ={"ItemPole","ItemPole","ItemPole","ItemCanvas","ItemCanvas"};
    };
    class DefaultSunshadesM:Default {
      offset[]={0,6,2};
      requiredtools[] = {"ItemToolbox","ItemKnife"};		
      requiredmaterials[] ={"ItemPole","ItemPole","ItemPole","ItemPole","ItemCanvas","ItemCanvas","ItemCanvas"};
    };	
    class DefaultSunshadesL:Default {
      offset[]={0,6,2};
      requiredtools[] = {"ItemToolbox","ItemKnife"};		
      requiredmaterials[] ={"ItemPole","ItemPole","ItemPole","ItemPole","ItemCanvas","ItemCanvas","ItemCanvas","ItemCanvas"};
    };
    class DefaultSunshadesW:Default {
      offset[]={0,3,2};
      requiredtools[] = {"ItemToolbox","ItemKnife"};		
      requiredmaterials[] ={"PartPlankPack","PartPlankPack","ItemCanvas","ItemCanvas"};
    };	
    class DefaultTopaz:Default {
      offset[]={0,10,3};
      requiredtools[] = {"ItemToolbox"};		
      requiredmaterials[] ={"ItemGoldBar10oz","ItemGoldBar10oz"};
    };
    class DefaultTentsS:Default {
      offset[]={0,6,1};
      requiredtools[] = {"ItemToolbox","ItemKnife"};		
      requiredmaterials[] ={"PartPlankPack","PartPlankPack","ItemCanvas","ItemCanvas"};
    };
    class DefaultTentsM:Default {
      offset[]={0,10,2};
      requiredtools[] = {"ItemToolbox","ItemEtool","ItemKnife","ItemHatchet"};		
      requiredmaterials[] ={"PartPlankPack","PartPlankPack","ItemCanvas","ItemCanvas","ItemCanvas","ItemCanvas","ItemCanvas"};
    };	
    class DefaultTentsL:Default {
      offset[]={0,13,0};
      requiredtools[] = {"ItemToolbox","ItemEtool","ItemKnife","ItemHatchet"};		
      requiredmaterials[] ={"bulk_ItemSandbag","bulk_ItemSandbag","PartPlankPack","PartPlankPack","ItemCanvas","ItemCanvas","ItemCanvas","ItemCanvas","ItemCanvas","ItemCanvas","ItemCanvas"};
    };
    class DefaultGarage:Default {
      offset[]={0,7,0};
      requiredtools[] = {"ItemToolbox"};
      requiredmaterials[] ={"full_cinder_wall_kit","full_cinder_wall_kit","full_cinder_wall_kit","cinder_garage_kit","MortarBucket"};
    };
    class DefaultFuel:Default {
      offset[]={0,7,0};
      requiredtools[] = {"ItemToolbox","ItemEtool","ItemCrowbar"};		
      requiredmaterials[] ={"ItemFuelBarrel","ItemFuelBarrel","bulk_PartGeneric","bulk_PartGeneric","ItemGenerator"};
    };	
    class DefaultMountedWeapons:Default {
      offset[]={0,7,0};
      requiredtools[] = {"ItemToolbox"};
      requiredmaterials[] ={"bulk_PartGeneric","bulk_ItemTankTrap","100Rnd_762x51_M240"};
    };
    class DefaultRoad:Default {
      offset[]={0,3,0};
      requiredtools[] = {"ItemSledge","ItemPickaxe","ItemEtool"};
      requiredmaterials[] = {"ItemStone","ItemStone","MortarBucket","PartGeneric"};
    };
    class DefaultRoadPaved:Default {
      offset[]={0,3,0};
      requiredtools[] = {"ItemSledge","ItemPickaxe","ItemEtool"};
      requiredmaterials[] = {"ItemStone","ItemStone","MortarBucket","PartGeneric"};
    };
    class DefaultRunway:Default {
    offset[]={0,3,0};
    requiredtools[] = {"ItemSledge","ItemPickaxe","ItemEtool"};
    requiredmaterials[] = {"ItemStone","ItemStone","ItemStone","ItemStone","ItemStone","MortarBucket","MortarBucket","bulk_PartGeneric"};
    };
		//Topaz - Base Defense
		//48
    class Defenses{			//26
      class Hhedgehog_concrete:Default {
        offset[]={0,7,1};
        requiredtools[] = {"ItemToolbox","ItemCrowbar","ItemEtool","ItemSledge"};
        requiredmaterials[] ={"CinderBlocks","CinderBlocks","CinderBlocks","CinderBlocks","MortarBucket","MortarBucket"};
      };
      class Hhedgehog_concreteBig:Default {
        offset[]={0,7,1};
        requiredtools[] = {"ItemToolbox","ItemCrowbar","ItemEtool","ItemSledge"};
        requiredmaterials[] ={"CinderBlocks","CinderBlocks","CinderBlocks","CinderBlocks","MortarBucket","MortarBucket"};
      };	
      class Base_WarfareBBarrier10xTall:Default {
        offset[]={0,6,1};
        requiredtools[] = {"ItemToolbox","ItemEtool"};
        requiredmaterials[] ={"ItemSandbagExLarge5x","ItemSandbagExLarge5x","ItemSandbagExLarge5x","ItemSandbagExLarge5x","ItemSandbagExLarge5x"};
        };	
      class Fence_corrugated_plate:Default {
        offset[]={0,6,1};
        requiredtools[] = {"ItemToolbox","ItemEtool","ItemSledge"};
        requiredmaterials[] ={"ItemPole","ItemPole","ItemTankTrap","ItemTankTrap","PartWoodLumber","PartWoodLumber"};
      };
      class Fence_Ind_long:Default {
        offset[]={0,6,2};
        requiredtools[] = {"ItemToolbox","ItemEtool","ItemSledge"};
        requiredmaterials[] ={"ItemPole","ItemWire","PartWoodLumber"};
      };
      class Land_CncBlock:Default {
        offset[]={0,4,1};
        requiredtools[] = {"ItemToolbox","ItemEtool","ItemSledge"};
        requiredmaterials[] ={"CinderBlocks","CinderBlocks","CinderBlocks"};
      };
      class Land_CncBlock_D:Default {
        offset[]={0,4,1};
        requiredtools[] = {"ItemToolbox","ItemEtool","ItemSledge"};
        requiredmaterials[] ={"CinderBlocks","CinderBlocks","CinderBlocks"};
      };
      class Land_CncBlock_Stripes:Default {
        offset[]={0,4,1};
        requiredtools[] = {"ItemToolbox","ItemEtool","ItemSledge"};
        requiredmaterials[] ={"CinderBlocks","CinderBlocks","CinderBlocks"};
      };
      class Land_fort_artillery_nest_EP1:Default {
        offset[]={0,15,1};
        requiredtools[] = {"ItemToolbox","ItemHatchet","ItemEtool","ItemSledge"};
        requiredmaterials[] ={"PartPlankPack","PartPlankPack","PartPlankPack","PartPlankPack"};
      };
      class MAP_fort_artillery_nest:Default {
        offset[]={0,15,1};
        requiredtools[] = {"ItemToolbox","ItemHatchet","ItemEtool","ItemSledge"};
        requiredmaterials[] ={"PartPlankPack","PartPlankPack","PartPlankPack","PartPlankPack"};
      };	
      class Land_fort_rampart_EP1:Default {
        offset[]={0,8,1};
        requiredtools[] = {"ItemToolbox","ItemHatchet","ItemEtool","ItemSledge"};
        requiredmaterials[] ={"PartPlankPack","PartPlankPack"};
      };
      class MAP_fort_rampart:Default {
        offset[]={0,8,1};
        requiredtools[] = {"ItemToolbox","ItemHatchet","ItemEtool","ItemSledge"};
        requiredmaterials[] ={"PartPlankPack","PartPlankPack"};
      };	
      class MAP_Barbedwire:Default {
        offset[]={0,5,1};
        requiredtools[] = {"ItemToolbox","ItemEtool"};
        requiredmaterials[] ={"ItemTankTrap","ItemTankTrap","ItemWire"};
      };
      class MAP_concrete_block:Default {
        offset[]={0,10,1};
        requiredtools[] = {"ItemToolbox","ItemEtool","ItemSledge"};
        requiredmaterials[] ={"CinderBlocks","CinderBlocks","CinderBlocks","CinderBlocks","CinderBlocks","CinderBlocks","CinderBlocks","CinderBlocks"};
      };
      class MAP_Concrete_Ramp:Default {
        offset[]={0,8,2};
        requiredtools[] = {"ItemToolbox","ItemEtool","ItemSledge"};
        requiredmaterials[] ={"CinderBlocks","CinderBlocks","CinderBlocks","CinderBlocks"};
      };
      class MAP_Fort_Razorwire:DefaultTopaz {
        offset[]={0,6,1};
        requiredtools[] = {"ItemToolbox"};
        requiredmaterials[] ={"ItemTrashRazor","ItemWire"};
      };
      class MAP_HBarrier5_round15:Default {
        offset[]={0,6,1};
        requiredtools[] = {"ItemToolbox","ItemEtool"};
        requiredmaterials[] ={"ItemSandbagExLarge5x","equip_string"};
      };
      class MAP_plot_provizorni:Default {
        offset[]={0,6,2};
        requiredtools[] = {"ItemToolbox","ItemEtool","ItemSledge"};
        requiredmaterials[] ={"ItemPole","ItemWire","PartWoodLumber"};
      };
      class MAP_prebehlavka:Default {
        offset[]={0,7,1};
        requiredtools[] = {"ItemToolbox","ItemHatchet","ItemCrowbar"};
        requiredmaterials[] ={"PartPlankPack","PartPlankPack","PartPlankPack","PartPlankPack"};
      };
      class MAP_prolejzacka:Default {
        offset[]={0,6,1};
        requiredtools[] = {"ItemToolbox","ItemHatchet","ItemCrowbar"};
        requiredmaterials[] ={"PartPlankPack","PartPlankPack"};
      };
      class MAP_ramp_concrete:Default {
        offset[]={0,10,1};
        requiredtools[] = {"ItemToolbox","ItemEtool","ItemSledge"};
        requiredmaterials[] ={"CinderBlocks","CinderBlocks","CinderBlocks","CinderBlocks"};
      };
      class MAP_woodenRamp:Default {
        offset[]={0,4,1};
        requiredtools[] = {"ItemToolbox","ItemHatchet","ItemCrowbar"};
        requiredmaterials[] ={"PartPlankPack","PartPlankPack"};
      };
      class MAP_obstacle_get_over:Default {
        offset[]={0,4,1};
        requiredtools[] = {"ItemToolbox","ItemCrowbar","ItemEtool","ItemSledge"};
        requiredmaterials[] ={"bulk_PartGeneric","bulk_PartGeneric"};
      };
      class MAP_obstacle_prone:Default {
        offset[]={0,4,1};
        requiredtools[] = {"ItemToolbox","ItemCrowbar","ItemEtool","ItemSledge"};
        requiredmaterials[] ={"bulk_PartGeneric","bulk_PartGeneric"};
      };
      class MAP_obstacle_run_duck:Default {
        offset[]={0,4,1};
        requiredtools[] = {"ItemToolbox","ItemCrowbar","ItemEtool","ItemSledge"};
        requiredmaterials[] ={"bulk_PartGeneric","bulk_PartGeneric"};
      };			
    };
    class Forts{			//12
      class Land_Fort_Watchtower_EP1:Default {
        offset[]={0,10,2};
        requiredtools[] = {"ItemEtool","ItemToolbox","ItemCrowbar","ItemSledge"};	
        requiredmaterials[] ={"desert_large_net_kit","ItemSandbagExLarge5x","ItemSandbagExLarge5x","ItemSandbagExLarge5x","PartPlankPack","PartPlankPack","bulk_PartGeneric"};
      };	
      class MAP_fort_watchtower:Default {
        offset[]={0,10,2};
        requiredtools[] = {"ItemEtool","ItemToolbox","ItemCrowbar","ItemSledge"};	
        requiredmaterials[] ={"forest_large_net_kit","ItemSandbagExLarge5x","ItemSandbagExLarge5x","PartPlankPack","PartPlankPack","bulk_PartGeneric","full_cinder_wall_kit","full_cinder_wall_kit","full_cinder_wall_kit","full_cinder_wall_kit"};
      };
      class CDF_WarfareBBarracks:Default {
        offset[]={0,15,0};
        requiredtools[] = {"ItemToolbox","ItemCrowbar","ItemEtool","ItemSledge"};
        requiredmaterials[] ={"forest_large_net_kit","ItemSandbagExLarge5x","ItemSandbagExLarge5x","ItemSandbagExLarge5x","bulk_ItemSandbag","bulk_ItemSandbag","PartPlankPack","PartPlankPack"};
      };
      class USMC_WarfareBBarracks:Default {
        offset[]={0,15,0};
        requiredtools[] = {"ItemToolbox","ItemCrowbar","ItemEtool","ItemSledge"};
        requiredmaterials[] ={"forest_large_net_kit","ItemSandbagExLarge5x","ItemSandbagExLarge5x","ItemSandbagExLarge5x","bulk_ItemSandbag","bulk_ItemSandbag","PartPlankPack","PartPlankPack"};
      };	
      class MAP_fortified_nest_big:Default {
        offset[]={0,10,1};
        requiredtools[] = {"ItemToolbox","ItemCrowbar","ItemEtool","ItemSledge"};
        requiredmaterials[] ={"bulk_ItemSandbag","bulk_ItemSandbag","bulk_ItemSandbag","bulk_ItemSandbag","PartPlankPack","PartPlankPack"};
      };	
      class MAP_fortified_nest_small:Default {
        offset[]={0,8,1};
        requiredtools[] = {"ItemToolbox","ItemCrowbar","ItemEtool","ItemHatchet"};
        requiredmaterials[] ={"bulk_ItemSandbag","bulk_ItemSandbag","PartPlankPack","PartPlankPack","ItemCanvas"};
      };	
      class MAP_Pristresek_mensi:Default {
        offset[]={0,8,0};
        requiredtools[] = {"ItemToolbox","ItemCrowbar","ItemEtool","ItemHatchet"};
        requiredmaterials[] ={"bulk_ItemSandbag","bulk_ItemSandbag","PartPlankPack","PartPlankPack","ItemCanvas"};
      };	
      class MAP_Mil_Mil_Guardhouse:Default {
        offset[]={0,10,2};
        requiredtools[] = {"ItemToolbox","ItemCrowbar","ItemEtool","ItemSledge"};
        requiredmaterials[] ={"bulk_PartGeneric","PartPlywoodPack","PartPlankPack","PartPlankPack","full_cinder_wall_kit","full_cinder_wall_kit","full_cinder_wall_kit","full_cinder_wall_kit","full_cinder_wall_kit"};				
      };	
      class MAP_GuardShed:Default {
        offset[]={0,8,2};
        requiredtools[] = {"ItemToolbox","ItemHatchet","ItemKnife"};		
        requiredmaterials[] ={"ItemWoodLumber","PartPlankPack","PartPlankPack","PartPlywoodPack"};		
      };	
      class MAP_Fortress_02:Default {
        offset[]={0,10,2};
        requiredtools[] = {"ItemToolbox","ItemCrowbar","ItemEtool","ItemSledge"};
        requiredmaterials[] ={"bulk_ItemSandbag","bulk_ItemSandbag","bulk_ItemSandbag","PartPlankPack","ItemCanvas","ItemCanvas"};
      };	
      class MAP_Fortress_01:Default {
        offset[]={0,8,1};
        requiredtools[] = {"ItemToolbox","ItemCrowbar","ItemEtool","ItemSledge"};
        requiredmaterials[] ={"bulk_ItemSandbag","bulk_ItemSandbag","PartPlankPack","ItemCanvas"};
      };	
      class WarfareBDepot:Default {
        offset[]={0,17,3};
        requiredtools[] = {"ItemToolbox","ItemCrowbar","ItemEtool","ItemSledge"};
        requiredmaterials[] ={"ItemSandbagExLarge5x","ItemSandbagExLarge5x","bulk_ItemSandbag","bulk_ItemSandbag","bulk_ItemSandbag","bulk_ItemSandbag","bulk_ItemSandbag","PartPlankPack","PartPlankPack"};
      };	
    };
    class Tents{			//8
      class MAP_MASH:DefaultTentsS {};
      class MAP_Stan:DefaultTentsS {};
      class MAP_tent_small_west:DefaultTentsS {};
      class MAP_Stan_east:DefaultTentsM {};
      class MAP_tent_east:DefaultTentsM {};
      class MAP_tent2_west:DefaultTentsM {};
      class CDF_WarfareBFieldhHospital:DefaultTentsL {};
      class USMC_WarfareBFieldhHospital:DefaultTentsL {};		
    };
    class Towers{			//2
      class MAP_vez:Default {
        offset[]={0,5,4};
        requiredtools[] = {"ItemToolbox","ItemCrowbar","ItemSledge"};		
        requiredmaterials[] ={"bulk_PartGeneric","metal_panel_kit"};
      };
      class MAP_komin:Default {
        offset[]={0,5,4};
        requiredtools[] = {"ItemToolbox","ItemCrowbar","ItemSledge"};		
        requiredmaterials[] ={"full_cinder_wall_kit","full_cinder_wall_kit","full_cinder_wall_kit","full_cinder_wall_kit","bulk_PartGeneric","MortarBucket","MortarBucket"};
      };
    };
    class Communications {
      class MAP_antenna_small_roof {
        requiredtools[] = {"ItemToolbox"};		
        requiredmaterials[] ={"PartGeneric","equip_1inch_metal_pipe","equip_1inch_metal_pipe","equip_scrapelectronics"};
      };
      class MAP_antenna_small_roof1:MAP_antenna_small_roof {};
      class MAP_antenna_big_roof:MAP_antenna_small_roof {};
      class MAP_Antenna {
        offset[]={0,5,4};
        requiredtools[] = {"ItemToolbox","ItemSledge"};		
        requiredmaterials[] ={"bulk_PartGeneric","equip_2inch_metal_pipe","equip_2inch_metal_pipe","equip_scrapelectronics","equip_scrapelectronics"};
      };
      class MAP_Vysilac_FM {
        offset[]={0,5,10};
        requiredtools[] = {"ItemToolbox","ItemSledge"};		
        requiredmaterials[] ={"bulk_PartGeneric","equip_2inch_metal_pipe","equip_2inch_metal_pipe","equip_2inch_metal_pipe","equip_scrapelectronics","equip_scrapelectronics","equip_scrapelectronics"};
      };
      class MAP_telek1 {
        offset[]={0,5,10};
        requiredtools[] = {"ItemToolbox","ItemSledge"};		
        requiredmaterials[] ={"bulk_PartGeneric","bulk_PartGeneric","equip_2inch_metal_pipe","equip_2inch_metal_pipe","equip_2inch_metal_pipe","equip_2inch_metal_pipe","equip_scrapelectronics","equip_scrapelectronics","equip_scrapelectronics","equip_scrapelectronics"};
      };
    };
    class Garage:DefaultGarage {
      class Land_MBG_Garage_Single_D:DefaultGarage{};
      class Land_MBG_Garage_Single_A:DefaultGarage{};
      class Land_MBG_Garage_Single_B:DefaultGarage{};
      class Land_MBG_Garage_Single_C:DefaultGarage{};
    };
    class Fuel:DefaultFuel {
      class Land_A_FuelStation_Feed:DefaultFuel{};
    };
    class MountedWeapons:DefaultMountedWeapons {
      class M2StaticMG:DefaultMountedWeapons{};
    };
		//Emerald - Exterior Items
		//119
    class Barrels{				//13
      class MAP_Barel1:DefaultBarrel {};
      class MAP_Barel3:DefaultBarrel {};
      class MAP_Barel4:DefaultBarrel {};
      class MAP_Barel5:DefaultBarrel {};
      class MAP_Barel6:DefaultBarrel {};
      class MAP_Barel7:DefaultBarrel {};
      class MAP_Barel8:DefaultBarrel {};
      class MAP_Barels:DefaultBarrels {};
      class MAP_Barels2:DefaultBarrels {};
      class MAP_Barels3:DefaultBarrels {};
      class MAP_barrel_empty:DefaultBarrel {};
      class MAP_barrel_sand:DefaultBarrel {};
      class MAP_barrel_water:DefaultBarrel {};
    };
    class CargoContainers{     	//16
      class Land_Crates_EP1:DefaultCargoContainersS {}; //3 small plastic
      class Land_Misc_Cargo1E_EP1:DefaultCargoContainersL {};
      class Land_Misc_Cargo1Eo_EP1:DefaultCargoContainersL {};	
      class Land_Misc_Cargo2E:DefaultCargoContainersL {};
      class Land_Misc_Cargo2E_EP1:DefaultCargoContainersL {};
      class Misc_Cargo1B_military:DefaultCargoContainersL {};	
      class Land_transport_crates_EP1:DefaultCargoContainersW {}; //5 wooden
      class MAP_drevena_bedna:DefaultCargoContainersW {}; //1 wooden
      class MAP_metalcrate:DefaultCargoContainersS {}; //FSloot crate green
      class MAP_metalcrate_02:DefaultCargoContainersS {}; //FSloot crate blue
      class MAP_Misc_cargo_cont_net1:DefaultCargoContainersS {}; //1
      class MAP_Misc_cargo_cont_net2:DefaultCargoContainersM {}; //3
      class MAP_Misc_cargo_cont_net3:DefaultCargoContainersL {}; //7
      class MAP_Misc_cargo_cont_small:DefaultCargoContainersS {}; //third cargo green
      class MAP_Misc_cargo_cont_small2:DefaultCargoContainersS {}; //smaller white
      class MAP_Misc_cargo_cont_tiny:DefaultCargoContainersS {}; //smaller white version 2
    };
    class ConstructionSite{     //29  *
      class Land_Ind_BoardsPack1:DefaultEmerald {
        requiredmaterials[] ={"PartPlankPack","PartPlankPack","PartPlankPack","PartPlankPack","equip_nails"};
      };
      class Land_Ind_BoardsPack2:DefaultEmerald {
        requiredmaterials[] ={"PartPlankPack","PartPlankPack","PartPlankPack","equip_nails"};
      };
      class Land_Misc_Coil_EP1:DefaultEmerald {
        requiredmaterials[] ={"bulk_PartGeneric","equip_metal_sheet","equip_metal_sheet"};
      };
      class Land_Misc_ConcOutlet_EP1:DefaultEmerald {
        requiredmaterials[] ={"bulk_PartGeneric","ItemStone","ItemStone","ItemStone"};
      };
      class Land_Misc_ConcPipeline_EP1:DefaultEmerald {
        requiredmaterials[] ={"bulk_PartGeneric","ItemStone","ItemStone","ItemStone"};
      };
      class Land_Misc_GContainer_Big:DefaultEmerald {
        requiredmaterials[] ={"bulk_PartGeneric","bulk_PartGeneric","equip_metal_sheet","equip_metal_sheet","equip_metal_sheet","equip_metal_sheet","equip_metal_sheet","equip_metal_sheet"};
      };
      class Land_Wheel_cart_EP1:DefaultEmerald {
        requiredmaterials[] ={"PartPlywoodPack","PartPlankPack","PartWheel","PartWheel","equip_nails","equip_nails"};
      };
      class MAP_P_cihly1:DefaultEmerald {
        requiredmaterials[] ={"PartPlankPack","PartPlankPack","equip_brick","equip_brick","equip_brick","equip_brick","equip_brick","equip_brick","equip_brick","equip_brick"};
      };
      class MAP_P_cihly2:DefaultEmerald {
        requiredmaterials[] ={"PartPlankPack","PartPlankPack","equip_brick","equip_brick","equip_brick","equip_brick","equip_brick","equip_brick"};
      };
      class MAP_P_cihly3:DefaultEmerald {
        requiredmaterials[] ={"PartPlankPack","PartPlankPack","equip_brick","equip_brick","equip_brick","equip_brick","equip_brick","equip_brick"};
      };
      class MAP_P_cihly4:DefaultEmerald {
        requiredmaterials[] ={"PartPlankPack","PartPlankPack","equip_brick","equip_brick","equip_brick","equip_brick","equip_brick","equip_brick"};
      };
      class MAP_P_pipe_big:DefaultEmerald {
        requiredmaterials[] ={"bulk_PartGeneric","bulk_PartGeneric","equip_2inch_metal_pipe","equip_2inch_metal_pipe","equip_2inch_metal_pipe","equip_2inch_metal_pipe","equip_2inch_metal_pipe","equip_2inch_metal_pipe"};
      };
      class MAP_P_pipe_small:DefaultEmerald {
        requiredmaterials[] ={"bulk_PartGeneric","bulk_PartGeneric","equip_1inch_metal_pipe","equip_1inch_metal_pipe","equip_1inch_metal_pipe","equip_1inch_metal_pipe","equip_1inch_metal_pipe","equip_1inch_metal_pipe"};
      };
      class MAP_P_ytong:DefaultEmerald {
        requiredmaterials[] ={"PartPlankPack","PartPlankPack","equip_nails","PartPlywoodPack","PartPlywoodPack"};
      };
      class MAP_paletaA:DefaultEmerald {
        requiredmaterials[] ={"PartPlankPack","PartPlankPack","equip_nails"};
      };
      class MAP_paletyC:DefaultEmerald {
        requiredmaterials[] ={"PartPlankPack","PartPlankPack""PartPlankPack","PartPlankPack","equip_nails","equip_nails"};
      };
      class MAP_paletyD:DefaultEmerald {
        requiredmaterials[] ={"PartPlankPack","PartPlankPack""PartPlankPack","PartPlankPack","equip_nails","equip_nails"};
      };
      class MAP_Pallets_Column:DefaultEmerald {
        requiredmaterials[] ={"PartPlankPack","PartPlankPack""PartPlankPack","PartPlankPack","PartPlankPack","PartPlankPack","equip_nails","equip_nails"};
      };
      class MAP_Misc_G_Pipes:DefaultEmerald {
        requiredmaterials[] ={"bulk_PartGeneric","bulk_PartGeneric","equip_metal_sheet","equip_metal_sheet","equip_metal_sheet","equip_metal_sheet","equip_metal_sheet","equip_metal_sheet"};
      };
      class MAP_Misc_palletsfoiled:DefaultEmerald {
        requiredmaterials[] ={"PartPlankPack","PartPlankPack","equip_nails","ItemCanvas"};
      };
      class MAP_Misc_palletsfoiled_heap:DefaultEmerald {
        requiredmaterials[] ={"PartPlankPack","PartPlankPack","PartPlankPack","PartPlankPack","equip_nails","equip_nails","ItemCanvas","ItemCanvas"};
      };
      class Misc_concrete:DefaultEmerald {
        requiredmaterials[] ={"ItemStone","ItemStone","ItemStone","ItemStone","bulk_PartGeneric"};
      };
      class MAP_Ind_Timbers:DefaultEmerald {
        requiredmaterials[] ={"PartWoodPile","PartWoodPile","PartWoodPile","PartWoodPile","PartWoodPile","PartWoodPile","PartWoodPile","PartWoodPile","PartWoodPile","PartWoodPile","PartWoodPile","PartWoodPile"};
      };
      class MAP_P_Stavebni_kozy:DefaultEmerald {
        requiredmaterials[] ={"PartPlankPack","PartPlankPack","equip_nails","PartWoodPile","PartWoodPile"};
      };
      class MAP_P_bedna:DefaultEmerald {
        requiredmaterials[] ={"PartPlankPack","PartPlankPack","PartPlankPack","PartPlankPack","PartPlankPack","PartPlankPack","PartPlankPack","PartPlankPack","PartPlankPack","PartPlankPack","PartGeneric","PartGeneric"};
      };
      class MAP_garbage_misc:DefaultEmerald {
        requiredmaterials[] ={"PartGeneric","ItemTrashPaper","FoodChipsSulahoopsEmpty","FoodChipsChocolateEmpty","FoodChipsMysticalesEmpty","ItemTrashRazor"};
      };
      class MAP_garbage_paleta:DefaultEmerald {
        requiredmaterials[] ={"PartGeneric","ItemTrashPaper","FoodChipsSulahoopsEmpty","FoodChipsChocolateEmpty","FoodChipsMysticalesEmpty","ItemTrashRazor","PartWoodLumber"};
      };
      class MAP_Misc_TyreHeap:DefaultEmerald {
        requiredmaterials[] ={"equip_rubber_tube","equip_rubber_tube","equip_rubber_tube","equip_rubber_tube","PartWheel"};
      };
      class MAP_pneu:DefaultEmerald {
        requiredmaterials[] ={"equip_rubber_tube","equip_rubber_tube"};
      };
    };
    class MiscLarge{           	//18  *
      class Land_Ind_TankSmall:Default {
        offset[]={0,5,1};	
        requiredmaterials[] ={"PartFueltank","PartFueltank","PartFueltank","bulk_PartGeneric","equip_metal_sheet","equip_metal_sheet"};		
        requiredtools[] = {"ItemToolbox","ItemCrowbar","ItemSledge"};	
      };		
      class Land_Misc_ConcBox_EP1:DefaultEmerald {
        requiredmaterials[] ={"full_cinder_wall_kit","equip_metal_sheet","PartGeneric"};
      };
      class MAP_AirCond_big:DefaultEmerald {
        requiredmaterials[] ={"equip_scrapelectronics","equip_metal_sheet"};
      };
      class MAP_AirCond_small:DefaultEmerald {
        requiredmaterials[] ={"equip_scrapelectronics","PartGeneric","ItemWaterBottle"};
      };
      class MAP_AirCondition_A:DefaultEmerald {
        requiredmaterials[] ={"equip_scrapelectronics","PartGeneric","PartGeneric","ItemWaterBottle"};
      };
      class MAP_AirCondition_B:DefaultEmerald {
        requiredmaterials[] ={"equip_scrapelectronics","PartGeneric","PartGeneric","ItemWaterBottle"};
      };
      class MAP_antenna_big_roof:DefaultEmerald {
        requiredmaterials[] ={"bulk_PartGeneric","equip_1inch_metal_pipe","equip_2inch_metal_pipe","equip_scrapelectronics"};
      };
      class MAP_antenna_small_roof:DefaultEmerald {
        requiredmaterials[] ={"bulk_PartGeneric","equip_1inch_metal_pipe","equip_scrapelectronics"};
      };
      class MAP_antenna_small_roof_1:DefaultEmerald {
        requiredmaterials[] ={"PartGeneric","equip_1inch_metal_pipe","equip_scrapelectronics"};
      };
      class MAP_bouda_plech:DefaultEmerald {
        requiredmaterials[] ={"equip_metal_sheet","equip_metal_sheet","equip_metal_sheet","equip_metal_sheet","cinder_door_kit"};
      };
      class MAP_drevo_hromada:DefaultEmerald {
        requiredmaterials[] ={"PartWoodPile","PartWoodPile","PartWoodPile","PartWoodPile","PartWoodPlywood","PartWoodLumber","PartWoodLumber"};
      };
      class MAP_kasna_new:DefaultEmerald {
        requiredmaterials[] ={"CinderBlocks","CinderBlocks","MortarBucket","MortarBucket","ItemStone","ItemStone"};
      };
      class MAP_kulna:DefaultEmerald {
        requiredmaterials[] ={"PartPlywoodPack","PartWoodLumber"};
      };
      class MAP_Misc_Greenhouse:DefaultEmerald {
        requiredmaterials[] ={"PartPlankPack","PartWoodLumber"};
      };
      class MAP_Misc_Hutch:DefaultEmerald {
        requiredmaterials[] ={"PartPlankPack","PartWoodLumber","equip_nails"};
      };
      class MAP_PowerGenerator:DefaultEmerald {
        requiredmaterials[] ={"PartGeneric","equip_scrapelectronics","equip_metal_sheet","equip_metal_sheet","equip_metal_sheet"};
      };
      class Pile_of_wood:DefaultEmerald {
        requiredmaterials[] ={"PartPlywoodPack","PartWoodLumber"};
      };
      class MAP_Misc_WoodPile:DefaultEmerald {
        requiredmaterials[] ={"PartWoodPile","PartWoodPile"};
      };
    };
    class MiscSmall{           	//25  *
      class Axe_woodblock:DefaultEmerald {
        requiredmaterials[] ={"PartWoodPile","PartWoodPile"};
      };
      class Garbage_can:DefaultEmerald {
        requiredmaterials[] ={"equip_metal_sheet","PartGeneric"};
      };	
      class Garbage_container:DefaultEmerald {
        requiredmaterials[] ={"equip_metal_sheet","equip_metal_sheet","PartGeneric","PartGeneric"};
      };
      class MAP_popelnice:DefaultEmerald {
        requiredmaterials[] ={"equip_metal_sheet","PartGeneric"};
      };
      class Haystack_small:DefaultEmerald {
        requiredmaterials[] ={"equip_comfreyleafs","ItemBurlap"};
      };
      class Land_cages_EP1:DefaultEmerald {
        requiredmaterials[] ={"PartGeneric","PartGeneric"};
      };
      class Land_Campfire_burning:DefaultEmerald {
        requiredmaterials[] ={"PartGeneric","ItemStone"};
      };
      class Land_transport_cart_EP1:DefaultEmerald {
        requiredmaterials[] ={"PartGeneric","PartWheel","PartWheel","PartPlywoodPack","PartWoodLumber"};
      };
      class MAP_ChickenCoop:DefaultEmerald {
        requiredmaterials[] ={"PartWoodLumber","PartWoodLumber","PartPlywoodPack"};
      };
      class MAP_fire:DefaultEmerald {
        requiredmaterials[] ={"PartGeneric","ItemStone"};
      };
      class MAP_GasMeterExt:DefaultEmerald {
        requiredmaterials[] ={"PartGeneric","equip_1inch_metal_pipe","equip_brick","equip_brick"};
      };	
      class MAP_KBud:DefaultEmerald {
        requiredmaterials[] ={"PartWoodLumber","PartPlywoodPack"};
      };
      class MAP_Misc_Boogieman:DefaultEmerald {
        requiredmaterials[] ={"PartWoodLumber","ItemCanvas"};
      };
      class MAP_Misc_loudspeakers:DefaultEmerald {
        requiredmaterials[] ={"PartGeneric","equip_scrapelectronics","equip_floppywire"};
      };
      class MAP_Misc_PostBox:DefaultEmerald {
        requiredmaterials[] ={"PartGeneric","PartWoodLumber"};
      };
      class MAP_parabola_big:DefaultEmerald {
        requiredmaterials[] ={"PartGeneric","equip_1inch_metal_pipe","equip_1inch_metal_pipe","equip_scrapelectronics"};
      };	
      class MAP_phone_box:DefaultEmerald {
        requiredmaterials[] ={"PartGlass","PartGeneric","equip_scrapelectronics"};
      };
      class MAP_psi_bouda:DefaultEmerald {
        requiredmaterials[] ={"PartWoodLumber","PartPlywoodPack"};
      };
      class MAP_snowman:DefaultEmerald {
        requiredmaterials[] ={"ItemWaterBottle","ItemWaterBottle"};
      };
      class MAP_Sphere:DefaultEmerald {
        requiredmaterials[] ={"PartGeneric","PartGeneric"};
      };
      class MAP_Sphere2:DefaultEmerald {
        requiredmaterials[] ={"PartGeneric","PartGeneric"};
      };
      class MAP_Toilet:DefaultEmerald {
        requiredmaterials[] ={"PartGeneric","ItemTrashToiletpaper"};
      };
      class MAP_Piskoviste:DefaultEmerald {
        requiredmaterials[] ={"ItemStone","ItemStone"};
      };
      class MAP_Houpacka:DefaultEmerald {
        requiredmaterials[] ={"PartGeneric","PartGeneric"};
      };
      class MAP_brana:DefaultEmerald {
        requiredmaterials[] ={"equip_2inch_metal_pipe","equip_1inch_metal_pipe","equip_2inch_metal_pipe"};
      };	
    };
    class Scaffolding{         	//3
      class MAP_leseni2x:Default {
        offset[]={0,3,1.5};
        requiredtools[] = {"ItemToolbox","ItemCrowbar"};		
        requiredmaterials[] ={"ItemPole","ItemPole","ItemPole","ItemPole","ItemPole","PartPlankPack","PartPlankPack"};
      };
      class MAP_leseni4x:Default {
        offset[]={0,3,3.5};
        requiredtools[] = {"ItemToolbox","ItemCrowbar"};		
        requiredmaterials[] ={"ItemPole","ItemPole","ItemPole","ItemPole","ItemPole","ItemPole","ItemPole","PartPlankPack","PartPlankPack","PartPlankPack","PartPlankPack"};
      };
      class MAP_Misc_Scaffolding:Default {
        offset[]={0,5,2.5};
        requiredtools[] = {"ItemToolbox","ItemCrowbar"};		
        requiredmaterials[] ={"ItemPole","ItemPole","ItemPole","ItemPole","ItemPole","PartPlankPack","PartPlankPack"};		
      };	
    };
    class Sunshades{           	//15
      class Land_covering_hut_EP1:DefaultSunshadesW {};
      class Land_covering_hut_big_EP1:DefaultSunshadesW {};
      class Land_Market_shelter_EP1:DefaultSunshadesW {};		
      class Land_sunshade_EP1:DefaultSunshadesW {};
      class MAP_Camo_Box:DefaultSunshadesW {};
      class MAP_CamoNet_EAST:DefaultSunshadesS {};
      class MAP_CamoNet_EAST_var1:DefaultSunshadesM {};
      class MAP_CamoNetB_EAST:DefaultSunshadesL {};
      class MAP_CamoNet_NATO:DefaultSunshadesS {};
      class MAP_CamoNet_NATO_var1:DefaultSunshadesM {};
      class MAP_CamoNetB_NATO:DefaultSunshadesL {};
      class MAP_Pristresek:DefaultSunshadesL {};
      class MAP_stanek_3:DefaultSunshadesW {};
      class MAP_stanek_3B:DefaultSunshadesW {};
      class MAP_stanek_3_d:DefaultSunshadesW {};	
    };
		//Amethyst - Signage
		//110
    class Billboards{		//20
      class MAP_Bilboard_alkohol:DefaultBillboards {};
      class MAP_Bilboard_Beach:DefaultBillboards {};
      class MAP_Bilboard_Bienvenudo:DefaultBillboards {};
      class MAP_Bilboard_cibulka:DefaultBillboards {};
      class MAP_Bilboard_cigara_chernomorky:DefaultBillboards {};
      class MAP_Bilboard_Escape:DefaultBillboards {};
      class MAP_Bilboard_Everon:DefaultBillboards {};
      class MAP_Bilboard_hlinik:DefaultBillboards {};
      class MAP_Bilboard_likery_bardak:DefaultBillboards {};
      class MAP_Bilboard_Nogova:DefaultBillboards {};
      class MAP_Bilboard_pizza_presto:DefaultBillboards {};
      class MAP_Bilboard_Riviera:DefaultBillboards {};
      class MAP_Bilboard_seci_stroje:DefaultBillboards {};
      class MAP_Bilboard_smadny_maskrnik:DefaultBillboards {};
      class MAP_Bilboard_strana_noveho_radu:DefaultBillboards {};
      class MAP_Bilboard_toaletak_armasan:DefaultBillboards {};
      class MAP_Bilboard_veterans_choice:DefaultBillboards {};
      class MAP_Bilboard_volte_cernaruske_hnuti:DefaultBillboards {};
      class MAP_Bilboard_vstup_do_CDF:DefaultBillboards {};
      class MAP_Bilboard_zlute_zgrynda:DefaultBillboards {};
    };
    class Boards{			//7
      class Sign_Checkpoint:DefaultBoards {};
      class Sign_Checkpoint_TK_EP1:DefaultBoards {};
      class Sign_Checkpoint_US_EP1:DefaultBoards {};
      class Sign_Danger:DefaultBoards {};
      class Sign_MP_blu_EP1:DefaultBoards {};
      class Sign_MP_ind_EP1:DefaultBoards {};
      class Sign_MP_op_EP1:DefaultBoards {};
    };
    class Helipads{			//6
      class HeliH:DefaultHelipads {};
      class HeliHCivil:DefaultHelipads {};
      class HeliHRescue:DefaultHelipads {};
      class MAP_Heli_H_army:DefaultHelipads {};	
      class MAP_Heli_H_cross:DefaultHelipads {};
      class Sr_border:DefaultHelipads {};
    };
    class Informational{	//15
      class MAP_sign_accomodation:DefaultSignsMisc {};
      class MAP_sign_bus:DefaultSignsMisc {};
      class MAP_sign_food:DefaultSignsMisc {};
      class MAP_sign_fuel_new:DefaultSignsMisc {};
      class MAP_sign_hospital_new:DefaultSignsMisc {};
      class MAP_sign_parking_new:DefaultSignsMisc {};
      class MAP_sign_pedCrossing:DefaultSignsMisc {};
      class MAP_sign_port:DefaultSignsMisc {};
      class MAP_sign_service_new:DefaultSignsMisc {};
      class MAP_sign_blindWay_new:DefaultSignsMisc {};
      class MAP_sign_blindWay_left_new:DefaultSignsMisc {};
      class MAP_sign_blindWay_right_new:DefaultSignsMisc {};
      class MAP_sign_leftDirection_new:DefaultSignsMisc {};
      class MAP_sign_oneWay:DefaultSignsMisc {};
      class MAP_sign_rightDirection_new:DefaultSignsMisc {};
    };
    class RoadsMisc{		//12
      class FlagCarrierChecked:DefaultSignsMisc {};	
      class FlagCarrierSmall:DefaultSignsMisc {};
      class Land_arrows_desk_R:DefaultRoadMisc {};
      class Land_arrows_desk_L:DefaultRoadMisc {};	
      class RoadCone:DefaultAmethyst {
        requiredmaterials[] ={"PartGeneric","equip_rubber_tube"};
      };	
      class Land_coneLight:DefaultAmethyst {
        requiredmaterials[] ={"PartGeneric","equip_rubber_tube","ItemLightBulb"};
      };		
      class Land_RedWhiteBarrier:DefaultSignsMisc {};
      class MAP_arrows_yellow_L:DefaultSignsMisc {};		
      class MAP_arrows_yellow_R:DefaultSignsMisc {};	
      class RoadBarrier_long:DefaultSignsMisc {};
      class RoadBarrier_light:DefaultSignsMisc {};
      class Sign_tape_redwhite:DefaultRoadMisc {};	
    };
    class SignsMisc{		//13
      class MAP_rail_50km:DefaultSignsMisc {};
      class MAP_rail_KoniecNastupista:DefaultSignsMisc {};
      class MAP_rail_o25m_Priecestie:DefaultSignsMisc {};
      class MAP_rail_Priecestie:DefaultSignsMisc {};
      class MAP_Zastavka_cedule:DefaultSignsMisc {};
      class MAP_Zastavka_stojan:DefaultSignsMisc {};
      class MAP_sign_prejezd:DefaultSignsMisc {};
      class MAP_sign_prejezd2:DefaultSignsMisc {};
      class MAP_sign_prejezd3:DefaultSignsMisc {};
      class MAP_sign_danger_mines:DefaultSignsMisc {};
      class MAP_sign_danger1:DefaultSignsMisc {};
      class Sign_1L_Firstaid:DefaultSignsMisc {};
      class Sign_1L_Firstaid_EP1:DefaultSignsMisc {};
    };
    class TrafficSigns{		//37
      class MAP_sign_airport_new:DefaultSignsMisc {};
      class MAP_sign_badRoadside:DefaultSignsMisc {};
      class MAP_sign_children_new:DefaultSignsMisc {};
      class MAP_sign_cow_new:DefaultSignsMisc {};
      class MAP_sign_crossRoad_new:DefaultSignsMisc {};
      class MAP_sign_crossRoadMain_new:DefaultSignsMisc {};
      class MAP_sign_danger:DefaultSignsMisc {};
      class MAP_sign_deer_new:DefaultSignsMisc {};
      class MAP_sign_downHill_new:DefaultSignsMisc {};
      class MAP_sign_fallingStones_new:DefaultSignsMisc {};
      class MAP_sign_flyAWayGrit:DefaultSignsMisc {};
      class MAP_sign_left_new:DefaultSignsMisc {};
      class MAP_sign_pass_new:DefaultSignsMisc {};
      class MAP_sign_right_new:DefaultSignsMisc {};
      class MAP_sign_roadworks_new:DefaultSignsMisc {};
      class MAP_sign_serpentine_left_new:DefaultSignsMisc {};
      class MAP_sign_serpentine_right_new:DefaultSignsMisc {};
      class MAP_sign_train:DefaultSignsMisc {};
      class MAP_sign_upHil_new:DefaultSignsMisc {};
      class MAP_sign_snow_new:DefaultSignsMisc {};
      class MAP_sign_snowChains:DefaultSignsMisc {};
      class MAP_sign_snowChains_end:DefaultSignsMisc {};
      class MAP_sign_heightLimit:DefaultSignsMisc {};
      class MAP_sign_krizeni_s_trati:DefaultSignsMisc {};
      class MAP_sign_main_new:DefaultSignsMisc {};
      class MAP_sign_main_end_new:DefaultSignsMisc {};
      class MAP_sign_noDriving_new:DefaultSignsMisc {};
      class MAP_sign_noDrivingWronWay_new:DefaultSignsMisc {};
      class MAP_sign_noOverTaking:DefaultSignsMisc {};
      class MAP_sign_priority_new:DefaultSignsMisc {};
      class MAP_sign_speed20:DefaultSignsMisc {};
      class MAP_sign_speed50:DefaultSignsMisc {};
      class MAP_sign_stop_new:DefaultSignsMisc {};
      class MAP_sign_stopProhibited_new:DefaultSignsMisc {};
      class MAP_sign_tractorProhibited:DefaultSignsMisc {};
      class MAP_sign_wiatingProhibited_new:DefaultSignsMisc {};
      class MAP_sign_widthLimit:DefaultSignsMisc {};
    };
		//Obsidian - From the Ground
		//78
    class Bushes{			//10
      class MAP_b_betulaHumilis:DefaultBushes {};		
      class MAP_b_canina2s:DefaultBushes {};		
      class MAP_b_corylus:DefaultBushes {};		
      class MAP_b_corylus2s:DefaultBushes {};		
      class MAP_b_craet1:DefaultBushes {};		
      class MAP_b_craet2:DefaultBushes {};		
      class MAP_b_pmugo:DefaultBushes {};		
      class MAP_b_prunus:DefaultBushes {};		
      class MAP_b_salix2s:DefaultBushes {};		
      class MAP_b_sambucus:DefaultBushes {};		
    };
    class SmallPlants{		//29
      class MAP_c_autumn_flowers:DefaultBushes {};
      class MAP_c_blueBerry:DefaultBushes {};
      class MAP_c_caluna:DefaultBushes {};
      class MAP_c_fern:DefaultBushes {};
      class MAP_c_fernTall:DefaultBushes {};
      class MAP_c_GrassCrookedForest:DefaultBushes {};
      class MAP_c_GrassCrookedGreen:DefaultBushes {};
      class MAP_c_GrassDryLong:DefaultBushes {};
      class MAP_c_GrassTall:DefaultBushes {};
      class MAP_c_leaves:DefaultBushes {};
      class MAP_c_MushroomBabka:DefaultBushes {};
      class MAP_c_MushroomHorcak:DefaultBushes {};
      class MAP_c_MushroomMuchomurka:DefaultBushes {};
      class MAP_c_MushroomPrasivky:DefaultBushes {};
      class MAP_c_picea:DefaultBushes {};
      class MAP_c_PlantsAutumnForest:DefaultBushes {};
      class MAP_c_raspBerry:DefaultBushes {};
      class MAP_C_SmallLeafPlant:DefaultBushes {};
      class MAP_c_wideLeafPlant:DefaultBushes {};
      class MAP_flower_01:DefaultBushes {};
      class MAP_flower_02:DefaultBushes {};
      class MAP_p_articum:DefaultBushes {};
      class MAP_p_carduus:DefaultBushes {};
      class MAP_p_Helianthus:DefaultBushes {};
      class MAP_p_heracleum:DefaultBushes {};
      class MAP_p_Phragmites:DefaultBushes {};
      class MAP_p_urtica:DefaultBushes {};
      class MAP_pumpkin:DefaultBushes {};
      class MAP_pumpkin2:DefaultBushes {};
    };
    class SmallTrees{		//13
      class MAP_t_betula1f:DefaultSmallTrees {offset[]={0,10,2};};	//-5
      class MAP_t_betula2w:DefaultSmallTrees {offset[]={0,10,2};};	//-5
      class MAP_t_fagus2W:DefaultSmallTrees {};
      class MAP_t_fraxinus2W:DefaultSmallTrees {};
      class MAP_t_malus1s:DefaultSmallTrees {};
      class MAP_t_picea1s:DefaultSmallTrees {};
      class MAP_t_pinusN1s:DefaultSmallTrees {};
    };
    class MediumTrees{
      class MAP_t_alnus2s:DefaultMediumTrees {};	
      class MAP_t_carpinus2s:DefaultMediumTrees {offset[]={0,10,9};};	//+2
      class MAP_t_betula2s:DefaultMediumTrees {offset[]={0,10,11};};	//+4
      class MAP_t_fagus2s:DefaultMediumTrees {offset[]={0,10,8};};		//+1
      class MAP_t_pyrus2s:DefaultMediumTrees {};
      class MAP_t_salix2s:DefaultMediumTrees {};
      class MAP_t_sorbus2s:DefaultMediumTrees {};
    };
    class LargeTrees{		//14
      class MAP_t_acer2s:DefaultLargeTrees {offset[]={0,10,9};};	//-2
      class MAP_t_betula2f:DefaultLargeTrees {};
      class MAP_t_fagus2f:DefaultLargeTrees {offset[]={0,10,14};};	//+3
      class MAP_t_fraxinus2s:DefaultLargeTrees {offset[]={0,10,9};}; //-2	
      class MAP_t_larix3f:DefaultLargeTrees {offset[]={0,10,13};}; //+2	
      class MAP_t_larix3s:DefaultLargeTrees {};
      class MAP_t_picea2s:DefaultLargeTrees {offset[]={0,10,8};};	//-3
      class MAP_t_picea3f:DefaultLargeTrees {offset[]={0,10,15};};	//+4
      class MAP_t_pinusN2s:DefaultLargeTrees {offset[]={0,10,9};}; //-2		
      class MAP_t_pinusS2f:DefaultLargeTrees {};
      class MAP_t_populus3s:DefaultLargeTrees {offset[]={0,10,14};};	//+3	
      class MAP_t_quercus2f:DefaultLargeTrees {};
      class MAP_t_quercus3s:DefaultLargeTrees {};
    };
    class TheDead{			//7
      class Hanged:Default {
        offset[]={0,3,3};
        requiredtools[] = {"ItemToolbox","ItemEtool"};
        requiredmaterials[] ={"ItemZombieParts","ItemZombieParts","ItemCanvas"};	
      };
      class Hanged_MD:Default {
        offset[]={0,3,4};
        requiredtools[] = {"ItemToolbox","ItemEtool"};
        requiredmaterials[] ={"ItemZombieParts","ItemZombieParts","ItemCanvas"};	
      };
      class Body:Default {
        offset[]={0,3,0};
        requiredtools[] = {"ItemToolbox","ItemEtool"};
        requiredmaterials[] ={"ItemZombieParts","ItemCanvas","ItemCanvas"};
      };
      class GraveCross1:Default {
        offset[]={0,3,1};
        requiredtools[] = {"ItemToolbox","ItemEtool","ItemHatchet"};
        requiredmaterials[] ={"PartWoodLumber"};
      };
      class GraveCross2:Default {
        offset[]={0,3,1};
        requiredtools[] = {"ItemToolbox","ItemEtool","ItemHatchet"};
        requiredmaterials[] ={"PartWoodLumber"};
      };
      class GraveCrossHelmet:Default {
        offset[]={0,3,1};
        requiredtools[] = {"ItemToolbox","ItemEtool","ItemHatchet"};
        requiredmaterials[] ={"PartWoodLumber"};
      };
      class Mass_grave:Default {
        offset[]={0,6,0};
        requiredtools[] = {"ItemToolbox","ItemEtool","ItemHatchet"};
        requiredmaterials[] ={"ItemZombieParts","ItemZombieParts","ItemZombieParts","ItemZombieParts","ItemZombieParts","ItemZombieParts"};
      };	
    };
    class Wells{			//5
      class Land_Misc_Well_C_EP1:DefaultWells {};	
      class Land_Misc_Well_L_EP1:DefaultWells {};	
      class MAP_Misc_Well:DefaultWells {};	
      class MAP_Misc_WellPump:DefaultWells {};	
      class MAP_pumpa:DefaultWells {};	
    };
		//Sapphire - Flags
		//26
    class FlagsNations{			    //6
      class FlagCarrierBAF:DefaultFlag {};
      class FlagCarrierCzechRepublic_EP1:DefaultFlag {};
      class FlagCarrierGermany_EP1:DefaultFlag {};
      class FlagCarrierTakistanKingdom_EP1:DefaultFlag {};
      class FlagCarrierRU:DefaultFlag {};
      class FlagCarrierUSA:DefaultFlag {};
    };
    class FlagsOrganizations{		//8
      class FlagCarrierCDFEnsign_EP1:DefaultFlag {};
      class FlagCarrierCDF_EP1:DefaultFlag {};
      class FlagCarrierINS:DefaultFlag {};
      class FlagCarrierNATO_EP1:DefaultFlag {};
      class FlagCarrierTFKnight_EP1:DefaultFlag {};
      class FlagCarrierTKMilitia_EP1:DefaultFlag {};
      class FlagCarrierUNO_EP1:DefaultFlag {};
      class FlagCarrierUSArmy_EP1:DefaultFlag {};	
    };
    class FlagsMedical{				//3
      class FlagCarrierRedCrescent_EP1:DefaultFlag {};
      class FlagCarrierRedCross_EP1:DefaultFlag {};
      class FlagCarrierRedCrystal_EP1:DefaultFlag {};	
    };
    class FlagsPlain{				//4
      class FlagCarrierBLUFOR_EP1:DefaultFlag {};	
      class FlagCarrierINDFOR_EP1:DefaultFlag {};
      class FlagCarrierOPFOR_EP1:DefaultFlag {};		
      class FlagCarrierWhite_EP1:DefaultFlag {};	
    };
    class FlagsMisc{				//5
      class FlagCarrierArmex_EP1:DefaultFlag {};	
      class FlagCarrierBIS_EP1:DefaultFlag {};	
      class FlagCarrierIONblack_PMC:DefaultFlag {};	
      class FlagCarrierIONwhite_PMC:DefaultFlag {};	
      class FlagCarrierPOWMIA_EP1:DefaultFlag {};		
    };	
		//Ruby - Interior Items - Furniture 
		//69
    class Beds{        			//7
      class MAP_bed_husbands:DefaultBeds {};
      class MAP_F_postel_manz_kov:DefaultBeds {};
      class MAP_F_postel_panelak2:DefaultBeds {};
      class MAP_F_Vojenska_palanda:DefaultBeds {};
      class MAP_postel_manz_kov:DefaultBeds {};
      class MAP_postel_panelak1:DefaultBeds {};
      class MAP_vojenska_palanda:DefaultBeds {};	
    };
    class Benches{     			//8
      class Bleacher_EP1:DefaultBenches {};
      class Land_Bench_EP1:DefaultBenches {};
      class MAP_Church_chair:DefaultBenches {};
      class MAP_hospital_bench:DefaultBenches {};
      class MAP_lavicka_1:DefaultBenches {};
      class MAP_lavicka_2:DefaultBenches {};
      class MAP_lavicka_3:DefaultBenches {};
      class MAP_lavicka_4:DefaultBenches {};	
    };
    class Cabinets{    			//20
      class Land_Cabinet_EP1:DefaultCabinets {};
      class Land_Chest_EP1:DefaultCabinets {};	
      class MAP_almara:DefaultCabinets {};
      class MAP_case_a:DefaultCabinets {};
      class MAP_case_bedroom_a:DefaultCabinets {};
      class MAP_case_bedroom_b:DefaultCabinets {};
      class MAP_case_cans_b:DefaultCabinets {};
      class MAP_case_d:DefaultCabinets {};
      class MAP_case_wall_unit_part_c:DefaultCabinets {};
      class MAP_case_wall_unit_part_d:DefaultCabinets {};
      class MAP_case_wooden_b:DefaultCabinets {};
      class MAP_Dhangar_borwnskrin:DefaultCabinets {};
      class MAP_Dhangar_brownskrin:DefaultCabinets {};
      class MAP_Dhangar_knihovna:DefaultCabinets {};
      class MAP_Dhangar_whiteskrin:DefaultCabinets {};	
      class MAP_library_a:DefaultCabinets {};
      class MAP_Skrin_bar:DefaultCabinets {};
      class MAP_Skrin_opalena:DefaultCabinets {};
      class MAP_Truhla_stara:DefaultCabinets {};	
    };	
    class Chairs{     			//12
      class FoldChair:DefaultChairs {};
      class Land_Chair_EP1:DefaultChairs {};
      class MAP_armchair:DefaultChairs {};
      class MAP_ch_mod_c:DefaultChairs {};
      class MAP_ch_mod_h:DefaultChairs {};
      class MAP_ch_office_B:DefaultChairs {};
      class MAP_F_ch_mod_c:DefaultChairs {};
      class MAP_chair:DefaultChairs {};
      class MAP_kitchen_chair_a:DefaultChairs {};
      class MAP_lobby_chair:DefaultChairs {};
      class MAP_office_chair:DefaultChairs {};
      class WoodChair:DefaultChairs {};
    };
    class Desks{       			//4
      class Desk:DefaultCabinets {};
      class MAP_conference_table_a:DefaultCabinets {};
      class MAP_Dhangar_psacistul:DefaultCabinets {};
      class MAP_office_table_a:DefaultCabinets {};
    };
    class Shelves{     			//8
      class Land_Rack_EP1:DefaultBeds {};
      class Land_Shelf_EP1:DefaultBeds {};
      class MAP_case_d:DefaultBeds {};
      class MAP_case_wall_unit_part_c:DefaultBeds {};
      class MAP_case_wall_unit_part_d:DefaultBeds {};
      class MAP_F_skrin_bar:DefaultBeds {};
      class MAP_Skrin_bar:DefaultBeds {};
      class MAP_library_a:DefaultBeds {};	
    };
    class Tables{      			//10
      class FoldTable:DefaultBeds {};	
      class Land_Table_EP1:DefaultBeds {};
      class Land_Table_small_EP1:DefaultBeds {};	
      class MAP_kitchen_table_a:DefaultBeds {};		
      class MAP_lobby_table:DefaultBeds {};	
      class MAP_SmallTable:DefaultBeds {};	
      class MAP_stul_hospoda:DefaultBeds {};	
      class MAP_stul_kuch1:DefaultBeds {};	
      class MAP_Table:DefaultBeds {};	
      class MAP_table_drawer:DefaultBeds {};	
    };
		//Citrine - Interior Items - Other
		//80
    class Appliances{   	//6   
      class MAP_Dkamna_bila:DefaultAppliances {};
      class MAP_Dkamna_uhli:DefaultAppliances {};
      class MAP_F_Dkamna_uhli:DefaultAppliances {};	
      class MAP_fridge:DefaultAppliances {};
      class MAP_Kitchenstove_Elec:DefaultAppliances {};
      class MAP_washing_machine:DefaultAppliances {};	
    };
    class Bathroom{       	//7
      class MAP_F_bath:DefaultBathroom {};
      class MAP_lekarnicka:DefaultBathroom {};
      class MAP_P_Basin_A:DefaultBathroom {};
      class MAP_P_bath:DefaultBathroom {};
      class MAP_P_sink:DefaultBathroom {};
      class MAP_P_toilet_b_02:DefaultBathroom {};
      class MAP_toilet_b:DefaultBathroom {};	
    };
    class Commercial{      	//10
      class Land_Bag_EP1:DefaultCitrine {
        requiredmaterials[] ={"ItemCanvas","equip_string"};
      };	
      class Land_bags_EP1:DefaultCitrine {
        requiredmaterials[] ={"ItemCanvas","equip_string"};
      };	
      class Land_Basket_EP1:DefaultCitrine {
        requiredmaterials[] ={"PartWoodPile","equip_string","equip_nails"};
      };	
      class Land_Sack_EP1:DefaultCitrine {
        requiredmaterials[] ={"ItemCanvas","equip_string"};
      };	
      class Land_Wicker_basket_EP1:DefaultCitrine {
        requiredmaterials[] ={"PartWoodPile","equip_string"};
      };	
      class MAP_icebox:DefaultBathroom {
        requiredmaterials[] ={"PartGeneric","ItemPlank","equip_nails"};
      };	
      class MAP_lobby_counter:DefaultBathroom {
        requiredmaterials[] ={"ItemPlank","ItemPlank","equip_nails"};
      };	
      class MAP_pultskasou:DefaultCitrine {
        requiredmaterials[] ={"ItemPlank","ItemPlank","equip_nails"};
      };	
      class MAP_shelf:DefaultBathroom {
        requiredmaterials[] ={"ItemPlank","equip_nails"};
      };	
      class MAP_vending_machine:DefaultBathroom {
        requiredmaterials[] ={"equip_metal_sheet","equip_metal_sheet","equip_scrapelectronics"};
      };		
    };
    class Electronics{     	//11
      class MAP_misc_videoprojector:DefaultElectronics {};
      class MAP_misc_videoprojector_platno:DefaultElectronics {};
      class MAP_mutt_vysilacka:DefaultElectronics {};
      class MAP_notebook:DefaultElectronics {};
      class MAP_pc:DefaultElectronics {};
      class MAP_phonebox:DefaultElectronics {};
      class MAP_radio_b:DefaultElectronics {};
      class MAP_satelitePhone:DefaultElectronics {};
      class MAP_tv_a:DefaultElectronics {};
      class Radio:DefaultElectronics {};
      class SmallTV:DefaultElectronics {};	
    };
    class FloorCoverings{  	//5
      class Land_Blankets_EP1:DefaultFloorCoverings {};	
      class Land_Carpet_2_EP1:DefaultFloorCoverings {};	
      class Land_Carpet_EP1:DefaultFloorCoverings {};
      class Land_Carpet_rack_EP1:DefaultFloorCoverings {};	
      class Land_Pillow_EP1:DefaultFloorCoverings {};		
    };
    class MiscInterior{    	//21
      class Can_small:DefaultCitrine {
        requiredmaterials[] ={"PartGeneric","PartGeneric"};
      };	
      class FloorMop:DefaultCitrine {
        requiredmaterials[] ={"equip_rag","PartWoodPile"};
      };
      class Land_Bowl_EP1:DefaultCitrine {
        requiredmaterials[] ={"PartWoodPile","PartWoodPile"};
      };	
      class Land_Bucket_EP1:DefaultCitrine {
        requiredmaterials[] ={"PartGeneric","PartGeneric"};
      };
      class Land_Canister_EP1:DefaultCitrine {
        requiredmaterials[] ={"ItemWaterBottle ","ItemWaterBottle "};
      };	
      class Land_Teapot_EP1:DefaultCitrine {
        requiredmaterials[] ={"ItemCopperBar","ItemCopperBar"};
      };
      class Land_Urn_EP1:DefaultCitrine {
        requiredmaterials[] ={"ItemStone","ItemStone"};
      };	
      class Land_Vase_EP1:DefaultCitrine {
        requiredmaterials[] ={"ItemStone","ItemStone"};
      };
      class Land_Vase_loam_EP1:DefaultCitrine {
        requiredmaterials[] ={"ItemStone","ItemStone"};
      };	
      class Land_Vase_loam_2_EP1:DefaultCitrine {
        requiredmaterials[] ={"ItemStone","ItemStone"};
      };
      class Land_Vase_loam_3_EP1:DefaultCitrine {
        requiredmaterials[] ={"ItemStone","ItemStone"};
      };	
      class Land_Water_pipe_EP1:DefaultCitrine {
        requiredmaterials[] ={"PartGeneric","PartGlass"};
      };
      class MAP_briefcase:DefaultCitrine {
        requiredmaterials[] ={"PartGeneric","equip_metal_sheet"};
      };	
      class MAP_bucket:DefaultCitrine {
        requiredmaterials[] ={"PartGeneric","PartGeneric"};
      };
      class MAP_FuelCan:DefaultCitrine {
        requiredmaterials[] ={"PartGeneric","equip_metal_sheet"};
      };	
      class MAP_MetalBucket:DefaultCitrine {
        requiredmaterials[] ={"PartGeneric","PartGeneric"};
      };
      class MAP_SmallObj_money:DefaultCitrine {
        requiredmaterials[] ={"equip_paper_sheet ","equip_paper_sheet "};
      };	
      class MAP_SmallObj_spukayev_docs_WPN:DefaultCitrine {
        requiredmaterials[] ={"equip_paper_sheet ","equip_paper_sheet "};
      };
      class MAP_drapes:DefaultCitrine {
        requiredmaterials[] ={"ItemCanvas","ItemCanvas"};
      };
      class MAP_drapes_long:DefaultCitrine {
        requiredmaterials[] ={"ItemCanvas","ItemCanvas","ItemCanvas"};
      };	
      class MAP_box_c:DefaultCitrine {
        requiredmaterials[] ={"PartWoodPile","PartWoodPile"};
      };	
    };
    class Pictures{        	//20
      class MAP_nastenka2:DefaultPictures {};
      class MAP_nastenkaX:DefaultPictures {};	
      class MAP_obraz_kancl4:DefaultPictures {};	
      class MAP_picture_a:DefaultPictures {};
      class MAP_picture_a_02:DefaultPictures {};
      class MAP_picture_a_03:DefaultPictures {};
      class MAP_picture_a_04:DefaultPictures {};
      class MAP_picture_a_05:DefaultPictures {};
      class MAP_picture_b:DefaultPictures {};
      class MAP_picture_b_02:DefaultPictures {};
      class MAP_picture_c:DefaultPictures {};
      class MAP_picture_c_02:DefaultPictures {};
      class MAP_picture_d:DefaultPictures {};
      class MAP_picture_e:DefaultPictures {};
      class MAP_picture_f:DefaultPictures {};
      class MAP_picture_f_02:DefaultPictures {};
      class MAP_picture_g:DefaultPictures {};
      class MAP_wall_board:DefaultPictures {};
      class MAP_wall_board_02:DefaultPictures {};
      class MAP_wall_board_03:DefaultPictures {};
    };
		//Lightbulb - Lightbulbs + Fixtures
		//33
    class Lightbulbs{     	//10
      class ASC_EU_BulbBLUP:DefaultLightbulbs {};	
      class ASC_EU_BulbGRNP:DefaultLightbulbs {};	
      class ASC_EU_BulbPURP:DefaultLightbulbs {};	
      class ASC_EU_BulbREDP:DefaultLightbulbs {};	
      class ASC_EU_BulbYELP:DefaultLightbulbs {};	
      class ASC_EU_BulbBLUB:DefaultLightbulbs {};	
      class ASC_EU_BulbGRNB:DefaultLightbulbs {};	
      class ASC_EU_BulbPURB:DefaultLightbulbs {};	
      class ASC_EU_BulbREDB:DefaultLightbulbs {};	
      class ASC_EU_BulbYELB:DefaultLightbulbs {};		
    };
    class LightPoles{      	//11
      class ASC_EU_LHVIndE:DefaultLightPoles {};
      class ASC_EU_LHVIndB:DefaultLightPoles {};
      class ASC_EU_LHVIndZ:DefaultLightPoles {};
      class ASC_EU_LHVInd:DefaultLightPoles {};
      class ASC_EU_LHV_lampa_sidlconc:DefaultLightPoles {};
      class ASC_EU_LHVSidl3:DefaultLightPoles {};
      class ASC_EU_LHVSidl2:DefaultLightPoles {};
      class ASC_EU_LHVSidl1:DefaultLightPoles {};
      class ASC_EU_LHVStre2:DefaultLightPoles {};
      class ASC_EU_LHVStre1:DefaultLightPoles {};
      class ASC_EU_LHVOld:DefaultLightPoles {};	
    };
    class Fixtures{        	//12
      class LAND_ASC_Wall_Lamp_New:DefaultLightFixtures {};	
      class LAND_ASC_Wall_Lamp_Old:DefaultLightFixtures {};	
      class LAND_ASC_runway_Bluelight:DefaultLightFixtures {};	
      class ASC_runway_BluelightB:DefaultLightFixtures {};	
      class LAND_ASC_runway_Yellowlight:DefaultLightFixtures {};	
      class ASC_runway_YellowlightB:DefaultLightFixtures {};	
      class MAP_fluor_lamp:DefaultLightFixtures {};	
      class MAP_lantern:DefaultLightFixtures {};	
      class MAP_Light_BathRoom:DefaultLightFixtures {};	
      class MAP_light_kitchen_03:DefaultLightFixtures {};	
      class Misc_Wall_lamp:DefaultLightFixtures {};	
      class Red_Light_Blinking_EP1:DefaultLightFixtures {};	
    };
		//Transportatation
		// 137
    class RoadsAsphalt1 { //15
      class MAP_asf1_0_2000:DefaultRoad {};
      class MAP_asf1_1_1000:DefaultRoad {};
      class MAP_asf1_10_100:DefaultRoad {};
      class MAP_asf1_10_25:DefaultRoad {};
      class MAP_asf1_10_50:DefaultRoad {};
      class MAP_asf1_10_75:DefaultRoad {};
      class MAP_asf1_12:DefaultRoad {};
      class MAP_asf1_15_75:DefaultRoad {};
      class MAP_asf1_22_50:DefaultRoad {};
      class MAP_asf1_25:DefaultRoad {};
      class MAP_asf1_30_25:DefaultRoad {};
      class MAP_asf1_6:DefaultRoad {};
      class MAP_asf1_60_10:DefaultRoad {};
      class MAP_asf1_6konec:DefaultRoad {};
      class MAP_asf1_7_100:DefaultRoad {};
    };
    class RoadsAsphalt2 { //15
      class MAP_asf2_0_2000:DefaultRoad {};
      class MAP_asf2_1_1000:DefaultRoad {};
      class MAP_asf2_10_100:DefaultRoad {};
      class MAP_asf2_10_25:DefaultRoad {};
      class MAP_asf2_10_50:DefaultRoad {};
      class MAP_asf2_10_75:DefaultRoad {};
      class MAP_asf2_12:DefaultRoad {};
      class MAP_asf2_15_75:DefaultRoad {};
      class MAP_asf2_22_50:DefaultRoad {};
      class MAP_masf2_25:DefaultRoad {};
      class MAP_asf2_30_25:DefaultRoad {};
      class MAP_asf2_6:DefaultRoad {};
      class MAP_asf2_60_10:DefaultRoad {};
      class MAP_asf2_6konec:DefaultRoad {};
      class MAP_asf2_7_100:DefaultRoad {};
    };
    class RoadsAsphalt3 { //15
      class MAP_asf3_0_2000:DefaultRoad {};
      class MAP_asf3_1_1000:DefaultRoad {};
      class MAP_asf3_10_100:DefaultRoad {};
      class MAP_asf3_10_25:DefaultRoad {};
      class MAP_asf3_10_50:DefaultRoad {};
      class MAP_asf3_10_75:DefaultRoad {};
      class MAP_asf3_12:DefaultRoad {};
      class MAP_asf3_15_75:DefaultRoad {};
      class MAP_asf3_22_50:DefaultRoad {};
      class MAP_asf3_25:DefaultRoad {};
      class MAP_asf3_30_25:DefaultRoad {};
      class MAP_asf3_6:DefaultRoad {};
      class MAP_asf3_60_10:DefaultRoad {};
      class MAP_asf3_6konec:DefaultRoad {};
      class MAP_asf3_7_100:DefaultRoad {};
    };
    class RoadsGravel { //15
      class MAP_mud_0_2000:DefaultRoad {};
      class MAP_mud_1_1000:DefaultRoad {};
      class MAP_mud_10_100:DefaultRoad {};
      class MAP_mud_10_25:DefaultRoad {};
      class MAP_mud_10_50:DefaultRoad {};
      class MAP_mud_10_75:DefaultRoad {};
      class MAP_mud_12:DefaultRoad {};
      class MAP_mud_15_75:DefaultRoad {};
      class MAP_mud_22_50:DefaultRoad {};
      class MAP_mud_25:DefaultRoad {};
      class MAP_mud_30_25:DefaultRoad {};
      class MAP_mud_6:DefaultRoad {};
      class MAP_mud_60_10:DefaultRoad {};
      class MAP_mud_6konec:DefaultRoad {};
      class MAP_mud_7_100:DefaultRoad {};
    };
    class RoadsIntersect { //19
      class MAP_kr_t_asf1_asf2:DefaultRoadPaved {};
      class MAP_kr_t_asf1_asf3:DefaultRoadPaved {};
      class MAP_kr_t_asf1_city:DefaultRoadPaved {};
      class MAP_kr_t_asf2_asf2:DefaultRoadPaved {};
      class MAP_kr_t_asf2_asf3:DefaultRoadPaved {};
      class MAP_kr_t_asf3_asf2:DefaultRoadPaved {};
      class MAP_kr_t_asf3_asf3:DefaultRoadPaved {};
      class MAP_kr_t_asf3_grav:DefaultRoadPaved {};
      class MAP_kr_t_asf3_mud:DefaultRoadPaved {};
      class MAP_kr_t_city_asf3:DefaultRoadPaved {};
      class MAP_kr_t_city_city:DefaultRoadPaved {};
      class MAP_kr_t_mud_mud:DefaultRoadPaved {};
      class MAP_kr_x_asf1_asf3:DefaultRoadPaved {};
      class MAP_kr_x_asf1_city:DefaultRoadPaved {};
      class MAP_kr_x_asf2_asf3:DefaultRoadPaved {};
      class MAP_kr_x_asf2_city:DefaultRoadPaved {};
      class MAP_kr_x_city_asf3:DefaultRoadPaved {};
      class MAP_kr_x_city_city:DefaultRoadPaved {};
      class MAP_kr_x_city_city_asf3:DefaultRoadPaved {};
    };
    class RoadsMud { //15
      class MAP_grav_0_2000:DefaultRoad {};
      class MAP_grav_1_1000:DefaultRoad {};
      class MAP_grav_10_100:DefaultRoad {};
      class MAP_grav_10_25:DefaultRoad {};
      class MAP_grav_10_50:DefaultRoad {};
      class MAP_grav_10_75:DefaultRoad {};
      class MAP_grav_12:DefaultRoad {};
      class MAP_grav_15_75:DefaultRoad {};
      class MAP_grav_22_50:DefaultRoad {};
      class MAP_grav_25:DefaultRoad {};
      class MAP_grav_30_25:DefaultRoad {};
      class MAP_grav_6:DefaultRoad {};
      class MAP_grav_60_10:DefaultRoad {};
      class MAP_grav_6konec:DefaultRoad {};
      class MAP_grav_7_100:DefaultRoad {};
    };
    class RoadsPaved { //15
      class MAP_city_0_2000:DefaultRoadPaved {};
      class MAP_city_1_1000:DefaultRoadPaved {};
      class MAP_city_10_100:DefaultRoadPaved {};
      class MAP_city_10_25:DefaultRoadPaved {};
      class MAP_city_10_50:DefaultRoadPaved {};
      class MAP_city_10_75:DefaultRoadPaved {};
      class MAP_city_12:DefaultRoadPaved {};
      class MAP_city_15_75:DefaultRoadPaved {};
      class MAP_city_22_50:DefaultRoadPaved {};
      class MAP_city_25:DefaultRoadPaved {};
      class MAP_city_30_25:DefaultRoadPaved {};
      class MAP_city_6:DefaultRoadPaved {};
      class MAP_city_60_10:DefaultRoadPaved {};
      class MAP_city_6konec:DefaultRoadPaved {};
      class MAP_city_7_100:DefaultRoadPaved {};
    };
    class RoadsRunways { //21
      class MAP_runway_beton:DefaultRunway {};
      class MAP_runway_beton_end1:DefaultRunway {};
      class MAP_runway_beton_end2:DefaultRunway {};
      class MAP_runway_dirt_1:DefaultRunway {};
      class MAP_runway_dirt_2:DefaultRunway {};
      class MAP_runway_dirt_3:DefaultRunway {};
      class MAP_runway_end15:DefaultRunway {};
      class MAP_runway_end33:DefaultRunway {};
      class MAP_runway_main:DefaultRunway {};
      class MAP_runway_main_40:DefaultRunway {};
      class MAP_runway_poj_draha:DefaultRunway {};
      class MAP_runway_poj_L_1:DefaultRunway {};
      class MAP_runway_poj_L_1_end:DefaultRunway {};
      class MAP_runway_poj_L_2:DefaultRunway {};
      class MAP_runway_poj_L_2_end:DefaultRunway {};
      class MAP_runway_poj_spoj:DefaultRunway {};
      class MAP_runway_poj_spoj_2:DefaultRunway {};
      class MAP_runway_poj_T_1:DefaultRunway {};
      class MAP_runway_poj_T_2:DefaultRunway {};
      class MAP_runwayold_40_main:DefaultRunway {};
      class MAP_runwayold_80_dirt:DefaultRunway {};
    };
    class RoadsStructures { //7
      class MAP_Misc_Drainage:DefaultRoad {};
      class MAP_bridge_asf1_25:DefaultRoad {
        requiredmaterials[] ={"ItemStone","ItemStone","ItemStone","ItemStone","ItemStone","ItemStone","MortarBucket","MortarBucket"};
        };
      class MAP_Bridge_stone_asf2_25:DefaultRoad {
        requiredmaterials[] ={"ItemStone","ItemStone","ItemStone","ItemStone","ItemStone","ItemStone","MortarBucket","MortarBucket"};
        };
      class MAP_Bridge_wood_25:DefaultRoad {
        requiredmaterials[] ={"ItemLog","ItemLog","PartPlankPack","PartPlywoodPack","equip_nails"};
        };
      class MAP_Dam_Barrier_40:DefaultRunway {};
      class MAP_Dam_Conc_20:DefaultRoad {
        requiredmaterials[] ={"ItemStone","ItemStone","ItemStone","ItemStone","ItemStone","ItemStone","ItemStone","ItemStone","MortarBucket","MortarBucket","MortarBucket","bulk_PartGeneric"};
        };
      class MAP_Dam_ConcP_20:DefaultRoad {
        requiredmaterials[] ={"ItemStone","ItemStone","ItemStone","ItemStone","ItemStone","ItemStone","ItemStone","ItemStone","MortarBucket","MortarBucket","MortarBucket","bulk_PartGeneric"};
        };
    };
    /*class RailRoads { //these will happen once I track down all the parts, the rocks the rails it on for example
      class MAP_rails_25 {};
    };
    class RailStructures {
      class MAP_rail_najazdovarampa {};
      class MAP_Rail_Platform_Cross {};
      class MAP_Rail_Platform_Segment {};
      class MAP_Rail_Platform_Start {};
      class MAP_Rail_Semafor {};
      class MAP_Rail_Zavora {};
      class MAP_rails_bridge_40 {};
    };*/
	};
};	
