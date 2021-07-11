// cheat_controller.ysc @ L1842
void func_74()
{
  if (iLocal_54 == 4)
  {
    iLocal_54 = 1;
    if ((((((func_27(23) || func_27(22)) || func_27(7)) || func_15(9)) || func_15(10)) || !PLAYER::IS_SPECIAL_ABILITY_UNLOCKED(func_75())) || !PLAYER::IS_SPECIAL_ABILITY_ENABLED(PLAYER::PLAYER_ID()))
    {
      func_21("CHEAT_NOT_NOW");
      return;
    }
    if (func_70())
    {
      func_21("CHEAT_PHONE_DENIED");
      return;
    }
    if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
    {
      PLAYER::SPECIAL_ABILITY_FILL_METER(PLAYER::PLAYER_ID(), 1);
      func_16("CHEAT_SPECIAL_ABILITY");
      func_5(7);
    }
  }
}