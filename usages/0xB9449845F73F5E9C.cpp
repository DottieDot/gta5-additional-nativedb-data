// fmmc_launcher.ysc @ L454080
void func_6634(int iParam0, int iParam1, int iParam2)
{
  int iVar0;
  int iVar1;
  int iVar2;
  
  iVar2 = 288;
  if (iParam0 != -1)
  {
    iVar0 = ((288 * iParam0) + (2 * (iParam0 - 1)));
  }
  if (iParam1 != -1)
  {
    iVar1 = ((288 * iParam1) + (2 * (iParam1 - 1)));
  }
  if (iParam2 != -1)
  {
    iVar2 = ((288 * iParam2) + (2 * (iParam2 - 1)));
  }
  if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND_HEADER("WEIGHT_MENU"))
  {
    GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
    GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
    GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
    GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
  }
}