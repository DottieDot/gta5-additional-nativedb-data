// abigail2.ysc @ L35559
int func_259(bool bParam0, bool bParam1, bool bParam2)
{
  if (!func_244(bParam0, bParam1, bParam2))
  {
    return 0;
  }
  if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
  {
    if (!PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()))
    {
      PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
      PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
      if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(0, 80))
      {
        return 1;
      }
    }
  }
  return 0;
}