// abigail1.ysc @ L4627
int func_65(int iParam0, int iParam1)
{
  int iVar0;
  int iVar1;
  int iVar2;
  
  if (((iParam1 == 12 || iParam1 == 13) || iParam1 == 14) || PED::IS_PED_INJURED(iParam0))
  {
    return -99;
  }
  iVar0 = func_76(iParam1);
  iVar1 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, iVar0);
  iVar2 = PED::GET_PED_TEXTURE_VARIATION(iParam0, iVar0);
  return func_66(iParam0, iVar1, iVar2, iParam1);
}