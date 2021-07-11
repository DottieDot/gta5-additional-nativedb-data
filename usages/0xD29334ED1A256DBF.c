// am_mp_arcade.c @ L323151
void func_4816()
{
  int iVar0;
  
  iVar0 = func_21(8832, -1, 0);
  MONEY::_0xD29334ED1A256DBF(iVar0, 1, iVar0, 0, 0);
  func_4817(iVar0);
  func_180(8832, 0, -1, 1, 0);
  func_4811(0);
  AUDIO::PLAY_SOUND_FRONTEND(-1, "WEAPON_PURCHASE", "HUD_AMMO_SHOP_SOUNDSET", true);
  func_3768(1553815378, 10, 0);
}