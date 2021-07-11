// am_mp_nightclub.ysc @ L286804
void func_4363(int iParam0)
{
  int iVar0;
  
  if (func_243())
  {
    if (!MISC::IS_BIT_SET(*iParam0, 7))
    {
      iParam0->f_1 = 1;
      MISC::SET_BIT(iParam0, 7);
    }
  }
  else
  {
    iVar0 = func_131(7209, -1, 0);
    func_199(7209, 0, -1, 1, 0);
    Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_273.f_318.f_5 = 0;
    MONEY::_0xE0F82D68C7039158(iVar0);
    AUDIO::PLAY_SOUND_FRONTEND(-1, "WEAPON_PURCHASE", "HUD_AMMO_SHOP_SOUNDSET", true);
    func_4(-1198637438, 10, 0);
  }
  func_4364(iParam0, 1);
}