// abigail2.c @ L37713
int func_315(var uParam0, int iParam1)
{
  int iVar0;
  
  if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
  {
    return 0;
  }
  if (func_99(14) && !func_324(iParam1))
  {
    return 0;
  }
  if (func_321(uParam0, iParam1))
  {
    return 0;
  }
  if (func_320(uParam0) < 0f)
  {
    func_319(uParam0, 0);
  }
  iVar0 = 0;
  while (iVar0 < *uParam0)
  {
    if (func_316(uParam0, iVar0))
    {
      (*uParam0)[iVar0] = iParam1;
      return 1;
    }
    iVar0++;
  }
  return 0;
}