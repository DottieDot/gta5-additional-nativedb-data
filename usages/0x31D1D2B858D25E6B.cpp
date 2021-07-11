// fmmc_launcher.ysc @ L303313
void func_3970(var uParam0, int iParam1)
{
  int iVar0;
  
  iVar0 = func_3971(func_3973(PLAYER::PLAYER_ID()), 0);
  NETWORK::NETWORK_SEND_TRANSITION_GAMER_INSTRUCTION(uParam0, "", 7, iVar0, iParam1);
  Global_2449755.f_1.f_845[0 /*57*/].f_46 = iVar0;
}