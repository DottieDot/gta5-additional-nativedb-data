// fm_mission_controller.ysc @ L370087
int func_5331(char* sParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, int iParam16)
{
  int iVar0;
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (!MISC::IS_BIT_SET(iLocal_4123, 15))
  {
    if (!MISC::IS_STRING_NULL_OR_EMPTY(&sParam0))
    {
      if (!func_5348(&sParam0))
      {
        HUD::GET_HUD_COLOUR(iParam16, &iVar0, &iVar1, &iVar2, &iVar3);
        HUD::SET_SCRIPT_VARIABLE_HUD_COLOUR(iVar0, iVar1, iVar2, iVar3);
        func_5332(&sParam0, 0);
      }
      return 1;
    }
  }
  return 0;
}