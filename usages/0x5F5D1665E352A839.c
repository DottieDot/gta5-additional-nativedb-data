// act_cinema.c @ L43560
void func_267(int iParam0, int iParam1, int iParam2)
{
  int iVar0;
  struct<6> Var1;
  
  if (!PED::IS_PED_INJURED(iParam0))
  {
    if (iParam1 != -1)
    {
      iVar0 = func_236(iParam0);
      if (!func_223(iParam1, -1) || iParam2)
      {
        if (func_216(&Var1, iParam1, iVar0, iParam0, -1))
        {
          PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, Var1.f_4, Var1.f_5);
          func_186(iParam0, Var1.f_4, Var1.f_5);
        }
      }
    }
  }
}