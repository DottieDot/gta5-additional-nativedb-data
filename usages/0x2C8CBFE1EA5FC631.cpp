// finale_heist2a.ysc @ L145441
int func_1041(int iParam0, int iParam1)
{
  int iVar0;
  
  if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
  {
    iVar0 = (VEHICLE::_GET_VEHICLE_NUMBER_OF_BROKEN_OFF_BONES(iParam0) + VEHICLE::_GET_VEHICLE_NUMBER_OF_BROKEN_BONES(iParam0));
    if ((((VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 0, 0) || VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 1, 0)) || VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 4, 0)) || (VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 5, 0) && !iLocal_252)) || iVar0 >= iParam1)
    {
      return 1;
    }
  }
  return 0;
}