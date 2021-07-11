// fmmc_launcher.ysc @ L491534
int func_7252(var uParam0)
{
  if ((func_274(0) && func_9946() == 25) && func_6005(PLAYER::PLAYER_ID(), 1))
  {
    VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_489, 5, 0);
    VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_489, 5, 1);
    VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_489, 5, 2);
    if (!VEHICLE::HAS_PRELOAD_MODS_FINISHED(uParam0->f_489))
    {
      if (!func_103(208))
      {
        func_3941(208);
      }
      return 0;
    }
    if (!func_103(209))
    {
      func_3941(209);
    }
    if (func_103(208))
    {
      func_3862(208);
    }
  }
  return 1;
}