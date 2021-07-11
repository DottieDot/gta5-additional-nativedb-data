// epsilon6.c @ L36398
void func_270()
{
  switch (iLocal_69)
  {
    case 4:
    case 5:
      if (!func_481(Local_59))
      {
        Local_59 = VEHICLE::CREATE_VEHICLE(Local_59.f_1, Local_59.f_3, Local_59.f_6, true, true, false);
        VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_59, 1084227584);
        VEHICLE::SET_VEHICLE_HAS_BEEN_OWNED_BY_PLAYER(Local_59, 1);
        VEHICLE::SET_VEHICLE_DIRT_LEVEL(Local_59, 13f);
        VEHICLE::SET_VEHICLE_COLOURS(Local_59, 157, 157);
        VEHICLE::SET_VEHICLE_EXTRA_COLOURS(Local_59, 157, 5);
      }
      break;
    
    default:
      if (!func_481(Local_59))
      {
        Local_59 = VEHICLE::CREATE_VEHICLE(Local_59.f_1, Local_59.f_3, Local_59.f_6, true, true, false);
        VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_59, 1084227584);
        VEHICLE::SET_VEHICLE_HAS_BEEN_OWNED_BY_PLAYER(Local_59, 1);
        VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_59, 3);
        VEHICLE::SET_VEHICLE_DIRT_LEVEL(Local_59, 13f);
        VEHICLE::SET_VEHICLE_COLOURS(Local_59, 157, 157);
        VEHICLE::SET_VEHICLE_EXTRA_COLOURS(Local_59, 157, 5);
      }
      break;
  }
  VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_59.f_1, true);
  STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_59.f_1);
}