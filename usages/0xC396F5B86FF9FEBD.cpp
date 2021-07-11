// fmmc_launcher.ysc @ L307254
void func_4090(int iParam0, bool bParam1)
{
  if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
  {
    func_4091();
  }
  Global_2437549.f_3758 = -1;
  Global_2437549.f_3758.f_1 = 0;
  if (!bParam1)
  {
    if (func_8(PLAYER::PLAYER_ID(), 1, 1))
    {
      PED::SET_PED_LEG_IK_MODE(PLAYER::PLAYER_PED_ID(), 2);
      if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
      {
        if (!func_24() || iParam0)
        {
          if (!func_8908(PLAYER::PLAYER_ID(), 0))
          {
            func_5133(PLAYER::PLAYER_ID(), 1, 0, 0);
          }
        }
      }
    }
  }
  func_4096(0);
}