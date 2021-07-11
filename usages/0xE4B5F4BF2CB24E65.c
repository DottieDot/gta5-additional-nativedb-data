// fmmc_launcher.c @ L572950
void func_9238(var uParam0, int iParam1)
{
  if (iParam1 && func_9244())
  {
    return;
  }
  if (func_9243(uParam0) != 5 && func_9243(uParam0) != 11)
  {
    if (!func_9242(uParam0))
    {
      if (func_9241())
      {
        if (func_9240(uParam0) == 0 || func_9239(uParam0))
        {
          if (PED::HAS_ACTION_MODE_ASSET_LOADED("MICHAEL_ACTION"))
          {
            PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), true, -1, "MICHAEL_ACTION");
          }
        }
        else if (PED::HAS_ACTION_MODE_ASSET_LOADED("TREVOR_ACTION"))
        {
          PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), true, -1, "TREVOR_ACTION");
        }
      }
      else
      {
        PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), true, -1, 0);
      }
    }
  }
}