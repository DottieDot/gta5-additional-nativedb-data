// am_mp_arena_garage.c @ L282011
void func_4037(var uParam0, var uParam1)
{
  if (!PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()) && !PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()))
  {
    HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
  }
  PAD::DISABLE_CONTROL_ACTION(0, 24, 1);
  PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
  PAD::DISABLE_CONTROL_ACTION(0, 141, 1);
  PAD::DISABLE_CONTROL_ACTION(0, 143, 1);
  PAD::DISABLE_CONTROL_ACTION(0, 16, 1);
  PAD::DISABLE_CONTROL_ACTION(0, 17, 1);
  PAD::DISABLE_CONTROL_ACTION(0, 14, 1);
  PAD::DISABLE_CONTROL_ACTION(0, 15, 1);
  PAD::DISABLE_CONTROL_ACTION(0, 37, 1);
  PAD::DISABLE_CONTROL_ACTION(0, 12, 1);
  PAD::DISABLE_CONTROL_ACTION(0, 13, 1);
  PAD::DISABLE_CONTROL_ACTION(0, 45, 1);
  PAD::DISABLE_CONTROL_ACTION(0, 22, 1);
  PAD::DISABLE_CONTROL_ACTION(0, 23, 1);
  PAD::DISABLE_CONTROL_ACTION(0, 0, 1);
  if (PAD::_IS_INPUT_DISABLED(2))
  {
    PAD::DISABLE_CONTROL_ACTION(0, 200, 1);
  }
  Global_2531497.f_3967 = 1;
  Global_1654034 = 1;
  func_4038(uParam1[0], uParam0);
}