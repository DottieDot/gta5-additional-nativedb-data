// freemode.c @ L722418
void func_10102()
{
  if (NETWORK::_NETWORK_SHOULD_SHOW_CONNECTIVITY_TROUBLESHOOTING())
  {
    if (!MISC::IS_BIT_SET(Global_2531497.f_1734, 12))
    {
      if (func_1581(0, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1))
      {
        if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
        {
          if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
          {
            func_748("FM_NAT_STRCT", 20000);
            MISC::SET_BIT(&(Global_2531497.f_1734), 12);
          }
        }
      }
    }
  }
}