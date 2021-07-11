// taxi_gotyounow.ysc @ L7051
int func_239(var uParam0, int iParam1)
{
  if (!PED::IS_PED_INJURED(uParam0->f_3))
  {
    if (PED::IS_PED_IN_VEHICLE(uParam0->f_3, uParam0->f_4, 0))
    {
      if (VEHICLE::IS_VEHICLE_SEAT_FREE(uParam0->f_4, iParam1, 0))
      {
        if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_3, 355471868) != 1)
        {
          TASK::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(uParam0->f_3, uParam0->f_4, 0);
          return 1;
        }
      }
    }
  }
  return 0;
}