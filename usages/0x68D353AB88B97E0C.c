// fmmc_launcher.c @ L518193
int func_7697(int iParam0, bool bParam1, bool bParam2)
{
  int iVar0;
  int iVar1;
  int iVar2;
  
  if (bParam1)
  {
    iVar0 = 0;
    iVar1 = 2;
  }
  else
  {
    iVar0 = 1;
    iVar1 = 3;
  }
  iVar2 = PED::GET_PED_HEAD_BLEND_FIRST_INDEX(iVar0);
  if (bParam2)
  {
    iVar2 = PED::GET_PED_HEAD_BLEND_FIRST_INDEX(iVar1);
  }
  return (iVar2 + iParam0);
}