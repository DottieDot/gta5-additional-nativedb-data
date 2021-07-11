// abigail1.c @ L29508
int func_150(int iParam0)
{
  int iVar0;
  int iVar1;
  
  if (ENTITY::DOES_ENTITY_EXIST(iParam0))
  {
    iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
    iVar0 = 0;
    while (iVar0 <= 2)
    {
      if (func_151(iVar0) == iVar1)
      {
        return iVar0;
      }
      iVar0++;
    }
  }
  return 145;
}