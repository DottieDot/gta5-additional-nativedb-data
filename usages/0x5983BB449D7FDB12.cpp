// michael3.ysc @ L118167
int func_771(var uParam0)
{
  int iVar0;
  int iVar1;
  
  iVar0 = 0;
  while (iVar0 <= (*uParam0 - 1))
  {
    if (PED::IS_PED_INJURED((*uParam0)[iVar0 /*25*/]) || PED::IS_PED_HURT((*uParam0)[iVar0 /*25*/]))
    {
      iVar1++;
    }
    iVar0++;
  }
  return iVar1;
}