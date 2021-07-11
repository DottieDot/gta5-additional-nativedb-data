// act_cinema.ysc @ L99454
int func_644(int iParam0, int iParam1, bool bParam2, int iParam3)
{
  int iVar0;
  
  if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, iParam1, iParam3))
  {
    iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, iParam1, iParam3);
  }
  if (bParam2)
  {
    if (!ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iParam0, 0))
    {
      iVar0 = VEHICLE::GET_LAST_PED_IN_VEHICLE_SEAT(iParam0, iParam1);
      if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0))
      {
        if (TASK::GET_SCRIPT_TASK_STATUS(iVar0, 451360105) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iVar0, -828834893) == 1)
        {
          if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, false), ENTITY::GET_ENTITY_COORDS(iVar0, false)) < 10f)
          {
            return iVar0;
          }
        }
      }
      iVar0 = -1;
    }
  }
  return iVar0;
}