// abigail2.c @ L36565
void func_297()
{
  if (!func_463(iLocal_56))
  {
    iLocal_56 = VEHICLE::CREATE_VEHICLE(iLocal_55, vLocal_57, fLocal_58, true, true, false);
    STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_55);
  }
  if (func_463(iLocal_56))
  {
    VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_56, 3);
    VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_56, 1);
    VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_55, true);
    VEHICLE::SET_VEHICLE_DISABLE_TOWING(iLocal_56, 1);
  }
}