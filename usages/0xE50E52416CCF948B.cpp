// am_joyrider.ysc @ L1067
bool func_35()
{
  if (!MISC::IS_BIT_SET(iLocal_96, 1))
  {
    if (PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(func_33(PLAYER::PLAYER_ID()), iLocal_100, &(Local_93.f_6), 4, 3f, 0f))
    {
      MISC::SET_BIT(&iLocal_96, 1);
    }
    else
    {
      iLocal_100++;
    }
  }
  return MISC::IS_BIT_SET(iLocal_96, 1);
}