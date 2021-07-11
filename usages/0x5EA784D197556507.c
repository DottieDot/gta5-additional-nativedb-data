// maintransition.c @ L122012
void func_988(var uParam0)
{
  if (!uParam0->f_364)
  {
    func_991(uParam0);
    if (HUD::IS_PAUSE_MENU_ACTIVE())
    {
      HUD::SET_PAUSE_MENU_ACTIVE(0);
    }
    func_490(uParam0, 1);
    func_906(&(uParam0->f_1849), 0, 0);
    if (MISC::IS_ORBIS_VERSION() && NETWORK::_NETWORK_HAVE_ONLINE_PRIVILEGE_2() == 0)
    {
      if (Global_2457254 == 0)
      {
        NETWORK::_0x83FE8D7229593017();
      }
    }
    if (MISC::IS_DURANGO_VERSION() && NETWORK::_NETWORK_HAVE_ONLINE_PRIVILEGE_2() == 0)
    {
      if (Global_2457254 == 0)
      {
        func_852(1);
      }
    }
    Global_2457254 = 1;
    uParam0->f_364 = 1;
  }
  func_420(1, 1);
  func_990(uParam0);
  func_989(uParam0);
}