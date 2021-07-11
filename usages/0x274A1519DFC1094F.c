// pausemenu_multiplayer.c @ L22110
void func_487()
{
  if (iLocal_919[2] == iLocal_347)
  {
    if (NETWORK::UGC_SET_BOOKMARKED(&(Global_956042.f_33[iLocal_388 /*88*/]), 1, func_431(0)))
    {
      func_1096(1);
      HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(1860370728);
      HUD::PAUSE_MENU_ACTIVATE_CONTEXT(456298020);
      HUD::_0x4895BDEA16E7C080(0);
    }
  }
  else if (iLocal_919[2] == iLocal_342)
  {
    if (NETWORK::UGC_SET_BOOKMARKED(&(Global_794709.f_4[iLocal_388 /*88*/]), 1, func_431(0)))
    {
      func_1096(1);
      HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(1860370728);
      HUD::PAUSE_MENU_ACTIVATE_CONTEXT(456298020);
      HUD::_0x4895BDEA16E7C080(0);
    }
  }
  else if (iLocal_919[2] == iLocal_345)
  {
    if (NETWORK::UGC_SET_BOOKMARKED(&(Global_928629.f_604[iLocal_388 /*88*/]), 1, func_431(0)))
    {
      func_1096(1);
      HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(1860370728);
      HUD::PAUSE_MENU_ACTIVATE_CONTEXT(456298020);
      HUD::_0x4895BDEA16E7C080(0);
    }
  }
}