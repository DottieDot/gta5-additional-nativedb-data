// freemode.c @ L605674
void func_8006(var uParam0)
{
  if (MISC::IS_ORBIS_VERSION())
  {
    if (Global_2461184 == 0)
    {
      if (!func_470() && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
      {
        if (func_514(uParam0, 2000, 0))
        {
          if (NETWORK::_0x83F28CE49FBBFFBA(0, -1, 1) == 0)
          {
            NETWORK::_0x6BFF5F84102DF80A(PLAYER::PLAYER_ID());
          }
          Global_2461184 = 1;
        }
      }
    }
  }
}