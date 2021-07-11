// fm_race_creator.c @ L410103
int func_6421(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
  int iVar0;
  struct<8> Var1;
  var uVar2;
  var uVar3;
  var uVar4;
  var uVar5;
  int iVar6;
  
  iVar0 = -1;
  StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(iParam2), 64);
  if (MISC::IS_STRING_NULL_OR_EMPTY(&Var1))
  {
  }
  HUD::GET_HUD_COLOUR(iParam5, &uVar2, &uVar3, &uVar4, &uVar5);
  HUD::_THEFEED_SET_ANIMPOSTFX_COLOR(uVar2, uVar3, uVar4, uVar5);
  HUD::_THEFEED_SET_ANIMPOSTFX_COUNT(1);
  iVar6 = 1;
  HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
  if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
  {
    HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(1);
    HUD::_ADD_TEXT_COMPONENT_SUBSTRING_UNK(sParam1);
  }
  HUD::END_TEXT_COMMAND_THEFEED_POST_UNLOCK_TU_WITH_COLOR(&Var1, iParam4, "", iVar6, iParam3, 1);
  HUD::THEFEED_RESET_ALL_PARAMETERS();
  func_886(35, sParam0, 1, sParam1, iParam4, 0, 0, 0f, 0, &Var1, 0, 0);
  if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
  {
  }
  return iVar0;
}