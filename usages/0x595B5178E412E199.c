// fmmc_launcher.c @ L594663
void func_9931(int iParam0, int iParam1)
{
  int iVar0;
  
  if (HUD::IS_MP_GAMER_TAG_MOVIE_ACTIVE())
  {
    if (HUD::IS_MP_GAMER_TAG_ACTIVE(iParam0))
    {
      HUD::_0xEE76FF7E6A0166B0(iParam0, 0);
    }
    if (!HUD::IS_MP_GAMER_TAG_ACTIVE(iParam0) && !HUD::IS_MP_GAMER_TAG_FREE(iParam0))
    {
    }
    else if (HUD::IS_MP_GAMER_TAG_ACTIVE(iParam0))
    {
      HUD::REMOVE_MP_GAMER_TAG(iParam0);
    }
  }
  Global_1383618.f_166[iParam0] = -1;
  MISC::CLEAR_BIT(&(Global_1383618.f_65), iParam0);
  func_9932(iParam1);
  iVar0 = 0;
  while (iVar0 <= 1)
  {
    Global_1383618.f_99[iVar0 /*33*/][iParam0] = 0;
    iVar0++;
  }
}