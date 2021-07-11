// freemode.ysc @ L605653
void func_8005(var uParam0)
{
  if (MISC::IS_ORBIS_VERSION())
  {
    if (Global_2461185 == 0)
    {
      if (!func_470() && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
      {
        if (func_514(uParam0, 3000, 0))
        {
          if (NETWORK::_0x595F028698072DD9(0, -1, 1) == 0)
          {
            NETWORK::_0x5C497525F803486B();
          }
          Global_2461185 = 1;
        }
      }
    }
  }
}