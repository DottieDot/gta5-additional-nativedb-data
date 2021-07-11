// fmmc_launcher.c @ L539651
void func_8302(int iParam0)
{
  if (Global_1839089.f_404 > 0)
  {
    if (iParam0 == 0)
    {
      NETWORK::NETWORK_INVITE_GAMERS_TO_TRANSITION(&Global_1839089, Global_1839089.f_404);
    }
  }
  if (Global_1838684.f_404 > 0)
  {
    if (iParam0 == 1)
    {
      NETWORK::NETWORK_INVITE_GAMERS(&Global_1838684, Global_1838684.f_404, 0, 0);
    }
  }
  func_8303(iParam0);
}