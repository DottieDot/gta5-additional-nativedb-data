// fm_mission_controller.ysc @ L370326
int func_5341(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
  int iVar0;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  struct<8> Var5;
  char cVar6[64];
  
  if (!MISC::IS_BIT_SET(iLocal_4123, 15))
  {
    if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
    {
      if (!func_5343(sParam0, &(Global_1575019[iParam1 /*16*/]), &(Global_1575019[iParam3 /*16*/])))
      {
        iVar0 = func_243(Local_6942[iLocal_1074 /*287*/].f_1, iParam2, 0);
        HUD::GET_HUD_COLOUR(iVar0, &iVar1, &iVar2, &iVar3, &iVar4);
        HUD::SET_SCRIPT_VARIABLE_HUD_COLOUR(iVar1, iVar2, iVar3, iVar4);
        StringCopy(&Var5, PLAYER::GET_PLAYER_NAME(iParam2), 64);
        iVar0 = func_243(Local_6942[iLocal_1074 /*287*/].f_1, iParam4, 0);
        HUD::GET_HUD_COLOUR(iVar0, &iVar1, &iVar2, &iVar3, &iVar4);
        HUD::_SET_SCRIPT_VARIABLE_2_HUD_COLOUR(iVar1, iVar2, iVar3, iVar4);
        StringCopy(&cVar6, PLAYER::GET_PLAYER_NAME(iParam4), 64);
        func_5342(sParam0, &Var5, &cVar6, 0, 1);
      }
      return 1;
    }
  }
  return 0;
}