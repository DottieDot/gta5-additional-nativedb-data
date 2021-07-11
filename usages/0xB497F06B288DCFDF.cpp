// barry3a.ysc @ L44359
int func_389()
{
  if (VEHICLE::IS_VEHICLE_STUCK_ON_ROOF(Local_43.f_4))
  {
    if (iLocal_47)
    {
      if ((MISC::GET_GAME_TIMER() - iLocal_48) > 7000)
      {
        return 1;
      }
    }
    else
    {
      iLocal_47 = 1;
      iLocal_48 = MISC::GET_GAME_TIMER();
    }
  }
  else
  {
    if (iLocal_47)
    {
    }
    iLocal_47 = 0;
  }
  return 0;
}