// achievement_controller.ysc @ L13790
bool func_100(int iParam0, int iParam1)
{
  int iVar0;
  int iVar1;
  
  if (iParam1 == -1)
  {
    iParam1 = func_6();
  }
  iVar0 = func_101(iParam1);
  iVar1 = MISC::GET_PROFILE_SETTING(iVar0);
  return MISC::IS_BIT_SET(iVar1, iParam0);
}