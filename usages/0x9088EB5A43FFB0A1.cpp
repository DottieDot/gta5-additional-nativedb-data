// nigel1.ysc @ L34710
int func_233(int iParam0, vector3 vParam1, float fParam2, int iParam3, int iParam4)
{
  STREAMING::REQUEST_MODEL(iLocal_81);
  if (iParam4 == 1)
  {
    while (!STREAMING::HAS_MODEL_LOADED(iLocal_81))
    {
      SYSTEM::WAIT(0);
    }
  }
  else if (!STREAMING::HAS_MODEL_LOADED(iLocal_81))
  {
    return 0;
  }
  func_234(iParam0, iLocal_81, vParam1, fParam2);
  if (func_309(*iParam0))
  {
    VEHICLE::SET_VEHICLE_COLOURS(*iParam0, 65, 0);
    VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(*iParam0, 5, false);
    VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, "28BNT310");
    VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, 0);
    if (iParam3 == 1)
    {
      VEHICLE::SET_VEHICLE_DOORS_LOCKED(*iParam0, 10);
    }
  }
  STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_81);
  return 1;
}