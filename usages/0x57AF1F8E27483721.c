// fm_race_creator.c @ L391759
void func_5725(int iParam0)
{
  vector3 vVar0;
  
  if (SCRIPT::GET_EVENT_DATA(1, iParam0, &vVar0, 8))
  {
    if (!NETWORK::NETWORK_IS_PLAYER_BLOCKED_BY_ME(vVar0.y))
    {
      if (func_40(vVar0.y, 0, 1))
      {
        func_5726(vVar0.y, &(vVar0.f_2), PLAYER::GET_PLAYER_NAME(vVar0.y), 1, -99);
      }
    }
  }
}