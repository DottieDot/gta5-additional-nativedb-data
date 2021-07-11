// am_mp_casino.ysc @ L323523
void func_4953()
{
  func_3997(1, -1);
  if (Local_293.f_1532.f_2 != -1)
  {
    func_1409(&(Local_293.f_1532.f_2));
  }
  if (MISC::IS_BIT_SET(Local_293.f_1, 0))
  {
    HUD::REMOVE_MULTIPLAYER_BANK_CASH();
    HUD::REMOVE_MULTIPLAYER_WALLET_CASH();
    MISC::CLEAR_BIT(&(Local_293.f_1), 0);
  }
  MISC::CLEAR_BIT(&(Local_293.f_1532.f_11), 1);
  MISC::CLEAR_BIT(&(Local_293.f_1532.f_11), 2);
  MISC::CLEAR_BIT(&(Local_293.f_1532.f_11), 3);
  MISC::CLEAR_BIT(&(Local_293.f_1532.f_11), 4);
  MISC::CLEAR_BIT(&(Local_293.f_1532.f_11), 5);
  MISC::CLEAR_BIT(&(Local_293.f_1532.f_11), 6);
  MISC::CLEAR_BIT(&(Local_293.f_1532.f_11), 7);
  MISC::CLEAR_BIT(&(Global_1676879.f_6), 1);
  PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 185, false);
  Local_293.f_1532 = 4;
  Local_293.f_1532.f_9 = 0;
  Local_293.f_1532.f_10 = 0;
  Local_293.f_1532.f_1 = 0;
  func_1038(&(Local_293.f_1532.f_6));
}