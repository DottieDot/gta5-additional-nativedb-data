// abigail1.ysc @ L4609
int func_64(int iParam0, int iParam1)
{
  int iVar0;
  int iVar1;
  
  if (PED::IS_PED_INJURED(iParam0))
  {
    return -99;
  }
  iVar0 = PED::GET_PED_PROP_INDEX(iParam0, iParam1);
  if (iVar0 == -1)
  {
    return func_60(iParam1);
  }
  iVar1 = PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, iParam1);
  return func_57(iParam0, iVar0, iVar1, iParam1);
}