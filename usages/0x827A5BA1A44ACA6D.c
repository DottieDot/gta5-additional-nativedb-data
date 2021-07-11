// am_armwrestling.c @ L119584
int func_829(int iParam0)
{
  int iVar0;
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  if (Global_2424073[PLAYER::PLAYER_ID() /*421*/].f_122.f_6[iParam0 /*2*/].f_1 > 0)
  {
    iVar2 = (Global_2424073[PLAYER::PLAYER_ID() /*421*/].f_122.f_6[iParam0 /*2*/].f_1 - Global_2424073[PLAYER::PLAYER_ID() /*421*/].f_122.f_6[iParam0 /*2*/]);
    func_877(49, iVar2, -1);
    func_835(49, 9);
    func_1032(7, 1, -1, 1);
    func_833(Global_2424073[PLAYER::PLAYER_ID() /*421*/].f_122.f_6[iParam0 /*2*/].f_1, 0, Global_2424073[PLAYER::PLAYER_ID() /*421*/].f_122.f_6[iParam0 /*2*/].f_1, 0);
    iVar1 = Global_2424073[PLAYER::PLAYER_ID() /*421*/].f_122.f_6[iParam0 /*2*/].f_1;
    Global_1575089 = Global_2424073[PLAYER::PLAYER_ID() /*421*/].f_122.f_6[iParam0 /*2*/];
    if (func_338())
    {
      func_327(-1398318418, iVar1, &iVar0, 0, 0, 0);
      Global_4263810[iVar0 /*84*/].f_13.f_34 = { Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_153 };
    }
    else
    {
      MONEY::NETWORK_EARN_FROM_BETTING(iVar1, &(Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_153));
      func_830(Global_2424073[PLAYER::PLAYER_ID() /*421*/].f_122.f_6[iParam0 /*2*/].f_1, 0);
    }
  }
  return iVar1;
}