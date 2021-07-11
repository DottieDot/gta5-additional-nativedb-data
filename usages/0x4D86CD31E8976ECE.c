// fmmc_launcher.c @ L538521
void func_8287(struct<13> Param0, char[4] cParam1, int iParam2, int iParam3)
{
  if (!NETWORK::NETWORK_HAS_INVITED_GAMER_TO_TRANSITION(&Param0) && !NETWORK::NETWORK_HAS_INVITED_GAMER(&Param0))
  {
    if (!func_8292(Param0))
    {
      if (iParam3 == 0)
      {
        if (Global_1839089.f_404 >= 31)
        {
          func_8302(iParam3);
        }
        Global_1839089[Global_1839089.f_404 /*13*/] = { Param0 };
        Global_1839089.f_404++;
      }
      if (iParam3 == 1)
      {
        if (Global_1838684.f_404 >= 31)
        {
          func_8302(iParam3);
        }
        Global_1838684[Global_1838684.f_404 /*13*/] = { Param0 };
        Global_1838684.f_404++;
      }
      func_7461(*iParam2, &Param0, cParam1, 0, 3, 1, 0);
    }
  }
  else
  {
    func_8288(&Param0);
  }
}