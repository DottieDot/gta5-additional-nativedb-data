// maintransition.c @ L136763
int func_1296(int iParam0, bool bParam1, var uParam2)
{
  int iVar0;
  int iVar1;
  
  if (bParam1)
  {
    iVar0 = 0;
  }
  else
  {
    iVar0 = 1;
  }
  iVar1 = PED::_GET_NUM_PARENT_PEDS_OF_TYPE(iVar0);
  if (iParam0 >= iVar1)
  {
    *uParam2 = 1;
    iParam0 = (iParam0 - iVar1);
  }
  return iParam0;
}