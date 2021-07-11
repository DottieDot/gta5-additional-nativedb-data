// armenian1.ysc @ L30740
int func_189(vector3 vParam0, float fParam1, bool bParam2)
{
  if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_434, 0))
  {
    func_258(1, 1);
    if (func_256(1, 1))
    {
      if (bParam2)
      {
        return 1;
      }
      else if (func_190(&iLocal_434, 1, vParam0, fParam1, 1, 1))
      {
        VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(iLocal_434, 0, false);
        VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(iLocal_434, 1, false);
        VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(iLocal_434, false, 0);
        VEHICLE::SET_VEHICLE_STRONG(iLocal_434, true);
        VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_434, true);
        AUDIO::_0x6FDDAD856E36988A(iLocal_434, 1);
        return 1;
      }
    }
  }
  else
  {
    return 1;
  }
  return 0;
}