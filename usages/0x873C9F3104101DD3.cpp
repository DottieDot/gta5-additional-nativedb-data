// am_airstrike.ysc @ L966
int func_20()
{
  int iVar0;
  var uVar1;
  
  if (MISC::IS_PC_VERSION())
  {
    GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar0, &uVar1);
    if (iVar0 <= 1024)
    {
      return 1;
    }
  }
  return 0;
}