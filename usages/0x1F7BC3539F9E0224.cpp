// fmmc_launcher.ysc @ L315974
int func_4378(int iParam0)
{
  var uVar0;
  
  if (MISC::IS_DURANGO_VERSION())
  {
    NETWORK::_0x1F7BC3539F9E0224();
    uVar0 = NETWORK::_0x0CF6CC51AA18F0F8(0, 512, iParam0);
    return uVar0;
  }
  return 1;
}