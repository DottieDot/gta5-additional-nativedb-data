// maintransition.ysc @ L174309
int func_1966(int iParam0, bool bParam1)
{
  int iVar0;
  int iVar1;
  
  if (iParam0 == 2)
  {
    if (bParam1)
    {
      return MISC::GET_RANDOM_INT_IN_RANGE(10, 21);
    }
    else
    {
      return MISC::GET_RANDOM_INT_IN_RANGE(0, 10);
    }
  }
  iVar0 = PED::GET_PED_HEAD_OVERLAY_NUM(iParam0);
  iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0);
  return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(iVar1) / IntToFloat(iVar0)) * 100f));
}