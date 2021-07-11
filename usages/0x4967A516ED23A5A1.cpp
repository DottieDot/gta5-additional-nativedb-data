// arena_carmod.ysc @ L216563
int func_1780(char* sParam0, bool bParam1)
{
  if (ENTITY::DOES_ENTITY_EXIST(Local_105.f_408) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_105.f_408, 0))
  {
    if (bParam1)
    {
      StringCopy(sParam0, VEHICLE::GET_VEHICLE_MOD_COLOR_1_NAME(Local_105.f_408, 0), 16);
    }
    else
    {
      StringCopy(sParam0, VEHICLE::GET_VEHICLE_MOD_COLOR_2_NAME(Local_105.f_408), 16);
    }
    if (MISC::GET_HASH_KEY(sParam0) != 0)
    {
      return 1;
    }
  }
  return 0;
}