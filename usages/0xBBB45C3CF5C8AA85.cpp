// taxi_procedural.ysc @ L7002
float func_217(vector3 vParam0, bool bParam1)
{
  int iVar0;
  
  if (bParam1)
  {
    if (PATHFIND::GET_GPS_BLIP_ROUTE_FOUND())
    {
      iVar0 = PATHFIND::GET_GPS_BLIP_ROUTE_LENGTH();
    }
    else
    {
      iVar0 = SYSTEM::FLOOR(SYSTEM::VDIST(func_218(PLAYER::PLAYER_ID()), vParam0));
    }
  }
  else
  {
    iVar0 = SYSTEM::FLOOR(SYSTEM::VDIST(func_218(PLAYER::PLAYER_ID()), vParam0));
  }
  return func_166(SYSTEM::TO_FLOAT(iVar0));
}