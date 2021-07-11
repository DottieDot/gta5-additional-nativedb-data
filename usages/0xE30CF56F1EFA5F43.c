// fm_bj_race_controler.c @ L8898
int func_106(var uParam0, int iParam1)
{
  int iVar0;
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 1;
  while (iVar3 && iVar2 < 10)
  {
    iVar3 = 0;
    iVar0 = NETWORK::NETWORK_GET_RANDOM_INT_RANGED(iParam1, iParam1 + 6);
    iVar1 = 0;
    while (iVar1 <= 2)
    {
      if (iVar0 == uParam0->f_27[iVar1])
      {
        iVar3 = 0;
        iVar2++;
        iVar0 = -1;
      }
      iVar1++;
    }
  }
  return iVar0;
}