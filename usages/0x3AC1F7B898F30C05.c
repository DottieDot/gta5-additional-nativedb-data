// carsteal3.c @ L691
void func_3(int iParam0)
{
  if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
  {
    if (iParam0 == 1)
    {
      func_231(PLAYER::PLAYER_PED_ID(), 12, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
      func_230(1);
      PED::CLEAR_PED_BLOOD_DAMAGE(PLAYER::PLAYER_PED_ID());
      PED::RESET_PED_VISIBLE_DAMAGE(PLAYER::PLAYER_PED_ID());
    }
    else if (iParam0 == 0)
    {
      if (!func_229(0))
      {
        func_6();
        func_4(1, iLocal_321);
      }
      else if (func_302(PLAYER::PLAYER_PED_ID(), 12, 1))
      {
        func_231(PLAYER::PLAYER_PED_ID(), 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
      }
    }
  }
}