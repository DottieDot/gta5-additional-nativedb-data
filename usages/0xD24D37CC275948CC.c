// abigail1.c @ L33739
int func_200(char* sParam0, int iParam1)
{
  int iVar0;
  char* sVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = MISC::GET_HASH_KEY(sParam0);
  iVar3 = 0;
  iVar3 = 0;
  while (iVar3 < 63)
  {
    iVar0 = iVar3;
    func_163(iVar0, &sVar1);
    if (MISC::GET_HASH_KEY(sVar1) == iVar2)
    {
      return iVar0;
    }
    iVar3++;
  }
  if (iParam1 == 0)
  {
  }
  return -1;
}