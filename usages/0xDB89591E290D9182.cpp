// taxi_clowncar.ysc @ L8478
int func_291(var uParam0)
{
  int iVar0;
  
  if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
  {
    iVar0 = PLAYER::GET_TIME_SINCE_PLAYER_DROVE_AGAINST_TRAFFIC(PLAYER::PLAYER_ID());
    if (iVar0 == 0)
    {
      if (!func_17(&(Local_162[6 /*10*/].f_3)))
      {
        func_193(&(Local_162[6 /*10*/].f_3));
      }
      else if (func_107(&(Local_162[6 /*10*/].f_3)) > 3.5f)
      {
        func_106(&(Local_162[6 /*10*/].f_3));
        return 1;
      }
    }
    else
    {
      func_106(&(Local_162[6 /*10*/].f_3));
    }
  }
  return 0;
}