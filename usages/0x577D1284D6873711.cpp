// abigail2.ysc @ L45757
void func_459(vector3 vParam0, float fParam1, int iParam2, int iParam3)
{
  if (func_461())
  {
    MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
    MISC::CLEAR_BIT(&(Global_98669.f_20), 2);
    MISC::SET_GAME_PAUSED(true);
    if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
    {
      PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
    }
    Global_98665 = { vParam0 };
    Global_98668 = fParam1;
    Global_98664 = 1;
    if (iParam2 == 1)
    {
      MISC::SET_BIT(&(Global_98669.f_20), 14);
    }
    else
    {
      MISC::CLEAR_BIT(&(Global_98669.f_20), 14);
    }
    if (iParam3 == 1)
    {
      MISC::SET_BIT(&(Global_98669.f_20), 24);
    }
    else
    {
      MISC::CLEAR_BIT(&(Global_98669.f_20), 24);
    }
    func_21(1);
  }
}