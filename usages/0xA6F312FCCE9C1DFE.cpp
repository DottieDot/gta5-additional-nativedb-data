// fm_mission_controller.ysc @ L648422
void func_10434()
{
  int iVar0;
  int iVar1;
  
  iVar0 = Local_6942[iLocal_1075 /*287*/].f_1;
  iVar1 = Local_5532[iVar0];
  if (iVar1 < 17)
  {
    if (bLocal_1079)
    {
      if (Global_4456448.f_106[iVar0 /*11610*/].f_4494[iVar1] > -1)
      {
        PLAYER::RESET_PLAYER_STAMINA(iLocal_1071);
        PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_1073, (SYSTEM::TO_FLOAT(Global_4456448.f_106[iVar0 /*11610*/].f_4494[iVar1]) / 10f));
      }
    }
  }
}