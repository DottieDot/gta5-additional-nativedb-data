// docks_heistb.ysc @ L19869
void func_304(int iParam0, int iParam1)
{
  if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
  {
    if (iParam1 >= 90)
    {
      VEHICLE::_0xE5810AC70602F2F5(iParam0, 0.75f);
    }
    else if (iParam1 >= 80)
    {
      VEHICLE::_0xE5810AC70602F2F5(iParam0, 0.8f);
    }
    else if (iParam1 >= 70)
    {
      VEHICLE::_0xE5810AC70602F2F5(iParam0, 0.85f);
    }
    else if (iParam1 >= 60)
    {
      VEHICLE::_0xE5810AC70602F2F5(iParam0, 0.9f);
    }
    else if (iParam1 >= 50)
    {
      VEHICLE::_0xE5810AC70602F2F5(iParam0, 0.95f);
    }
    else
    {
      VEHICLE::_0xE5810AC70602F2F5(iParam0, 1f);
    }
  }
}