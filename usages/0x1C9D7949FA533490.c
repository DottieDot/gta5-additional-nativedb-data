// stripclub.c @ L3245
int func_122(int iParam0)
{
  if (func_127(PLAYER::PLAYER_PED_ID()) && func_123() > 3)
  {
    CAM::SHAKE_SCRIPT_GLOBAL("DRUNK_SHAKE", 1f);
    CAM::SHAKE_CAM(iParam0, "DRUNK_SHAKE", 1f);
    return 1;
  }
  else
  {
    if (CAM::IS_SCRIPT_GLOBAL_SHAKING())
    {
      CAM::STOP_SCRIPT_GLOBAL_SHAKING(0);
    }
    if (CAM::IS_CAM_SHAKING(iParam0))
    {
      CAM::STOP_CAM_SHAKING(iParam0, 0);
    }
  }
  return 0;
}