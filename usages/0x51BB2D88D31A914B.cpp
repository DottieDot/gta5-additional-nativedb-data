// armenian1.ysc @ L40595
int func_349(vector3 vParam0, float fParam1)
{
  if (!ENTITY::DOES_ENTITY_EXIST(Local_525[1 /*7*/]))
  {
    STREAMING::REQUEST_MODEL(iLocal_483);
    if (STREAMING::HAS_MODEL_LOADED(iLocal_483))
    {
      Local_525[1 /*7*/] = VEHICLE::CREATE_VEHICLE(iLocal_483, vParam0, fParam1, true, true, false);
      VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_525[1 /*7*/], 1084227584);
      VEHICLE::SET_VEHICLE_DIRT_LEVEL(Local_525[1 /*7*/], 0f);
      VEHICLE::SET_VEHICLE_COLOURS(Local_525[1 /*7*/], 28, 28);
      VEHICLE::SET_VEHICLE_EXTRA_COLOURS(Local_525[1 /*7*/], 23, 0);
      VEHICLE::SET_VEHICLE_STRONG(Local_525[1 /*7*/], true);
      VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_525[1 /*7*/], true);
      VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_525[1 /*7*/], false);
      ENTITY::SET_ENTITY_HEALTH(Local_525[1 /*7*/], 2000, 0);
      VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(Local_525[1 /*7*/], false, 0);
      VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(Local_525[1 /*7*/], "2603AM56");
      VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(Local_525[1 /*7*/], false);
      VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_525[1 /*7*/], false);
      ENTITY::SET_CAN_AUTO_VAULT_ON_ENTITY(Local_525[1 /*7*/], 0);
      ENTITY::SET_CAN_CLIMB_ON_ENTITY(Local_525[1 /*7*/], 0);
      VEHICLE::SET_VEHICLE_ACTIVE_DURING_PLAYBACK(Local_525[1 /*7*/], 1);
      STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_483);
      return 1;
    }
  }
  else
  {
    return 1;
  }
  return 0;
}