// am_hunt_the_beast.c @ L111947
void func_547(char* sParam0, int iParam1, bool bParam2)
{
  if (bParam2)
  {
    if (func_505(1) || iParam1 == 1)
    {
      func_539(47, 48, sParam0, -1, 1);
      if (func_488() && iParam1 == 1)
      {
        func_538(sParam0, bParam2);
      }
    }
    else
    {
      func_539(61, 63, sParam0, -1, 1);
      if (func_512() && iParam1 == 0)
      {
        func_542(sParam0, bParam2);
      }
    }
  }
  StringCopy(&(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_104), sParam0, 64);
  Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_120 = LOCALIZATION::_LOCALIZATION_GET_SYSTEM_LANGUAGE();
  if ((!MISC::IS_DURANGO_VERSION() && NETWORK::_0x595F028698072DD9(0, -1, 1)) || func_537())
  {
    func_442(28);
  }
  else
  {
    func_443(28);
  }
}