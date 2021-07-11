// agency_heist1.ysc @ L98240
void func_394(int iParam0)
{
  int iVar0;
  int iVar1;
  int iVar2;
  struct<6> Var3;
  
  iVar0 = func_27(iParam0);
  if (func_26(iVar0) && !PED::IS_PED_INJURED(iParam0))
  {
    PED::CLEAR_PED_DECORATIONS(iParam0);
    iVar1 = 0;
    while (iVar1 < 4)
    {
      iVar2 = 0;
      while (iVar2 < 32)
      {
        if (MISC::IS_BIT_SET(Global_111560.f_2358.f_493[iVar0 /*15*/].f_10[iVar1], iVar2))
        {
          if (func_301(&Var3, func_396(iVar1, iVar2), func_395(iVar0), iParam0, -1))
          {
            PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, Var3.f_4, Var3.f_5);
          }
        }
        iVar2++;
      }
      iVar1++;
    }
  }
}