// flow_controller.ysc @ L124461
int func_776(int iParam0)
{
  int iVar0;
  
  if (iParam0 == -1)
  {
    return -2;
  }
  iVar0 = Global_76846.f_3590[iParam0 /*2*/];
  if (Global_76846.f_3590[iParam0 /*2*/].f_1 == 1)
  {
    PLAYER::SPECIAL_ABILITY_UNLOCK(func_28(iVar0));
    Global_111560.f_2358.f_539.f_2383[iVar0] = 1;
  }
  else
  {
    PLAYER::SPECIAL_ABILITY_LOCK(func_28(iVar0));
    Global_111560.f_2358.f_539.f_2383[iVar0] = 0;
  }
  return -2;
}