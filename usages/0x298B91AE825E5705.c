// am_airstrike.c @ L2515
int func_85(int iParam0)
{
  int iVar0;
  
  if (PED::IS_PED_IN_ANY_HELI(iParam0))
  {
    iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, 0);
    if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
    {
      if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, 0) == iParam0)
      {
        return 1;
      }
    }
  }
  return 0;
}