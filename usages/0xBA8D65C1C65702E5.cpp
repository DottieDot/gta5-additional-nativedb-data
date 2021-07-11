// fm_mission_controller.ysc @ L568920
void func_9083(int iParam0, bool bParam1)
{
  int iVar0;
  
  if (!bParam1)
  {
    iVar0 = Global_4456448.f_106[Local_6942[iLocal_1074 /*287*/].f_1 /*11610*/].f_1505[Local_5532[Local_6942[iLocal_1074 /*287*/].f_1] /*36*/].f_19;
  }
  else
  {
    iVar0 = Global_4456448.f_106[Local_6942[iLocal_1074 /*287*/].f_1 /*11610*/].f_2118[Local_5532[Local_6942[iLocal_1074 /*287*/].f_1] /*36*/].f_19;
  }
  if (PLAYER::GET_PLAYER_WANTED_LEVEL(iLocal_1071) < iVar0)
  {
    PLAYER::SET_PLAYER_WANTED_LEVEL(iLocal_1071, iVar0, 0);
    PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(iLocal_1071, 0);
  }
  else
  {
    PLAYER::_0x4669B3ED80F24B4E(iLocal_1071);
    HUD::_0xBA8D65C1C65702E5(1);
    *iParam0 = 1;
  }
}