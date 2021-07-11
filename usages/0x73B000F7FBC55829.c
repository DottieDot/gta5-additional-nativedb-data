// fmmc_launcher.c @ L504168
int func_7453(var uParam0)
{
  int iVar0;
  struct<13> Var1;
  int iVar2;
  
  if (!func_750(*uParam0))
  {
    return 0;
  }
  Global_2456321 = 0;
  iVar0 = 0;
  while (iVar0 < 32)
  {
    Global_2456321.f_1[iVar0 /*29*/] = { Var1 };
    StringCopy(&(Global_2456321.f_1[iVar0 /*29*/].f_13), "", 64);
    iVar0++;
  }
  iVar2 = NETWORK::NETWORK_GET_TRANSITION_MEMBERS(&Global_2456321, 32);
  iVar0 = 0;
  while (iVar0 <= (iVar2 - 1))
  {
    if (func_750(Global_2456321.f_1[iVar0 /*29*/]))
    {
      if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(uParam0, &(Global_2456321.f_1[iVar0 /*29*/])))
      {
        return 1;
      }
    }
    iVar0++;
  }
  return 0;
}