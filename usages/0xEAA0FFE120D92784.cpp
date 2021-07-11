// abigail2.ysc @ L36476
void func_294(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
  if (HUD::DOES_BLIP_EXIST(*iParam0))
  {
    if (bParam5)
    {
      HUD::SET_BLIP_COLOUR(*iParam0, 1);
      HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*iParam0, "BLIP_ENEMY");
      if (iParam6 && !func_229())
      {
        if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || func_271(sParam2, 0, 0))
        {
          func_268(sParam1, 7500, 0);
        }
      }
    }
    else
    {
      HUD::SET_BLIP_COLOUR(*iParam0, 3);
      HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*iParam0, "BLIP_FRIEND");
      if (iParam6 && !func_229())
      {
        if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || func_271(sParam1, 0, 0))
        {
          func_268(sParam2, 7500, 0);
        }
      }
    }
    *iParam3 = MISC::GET_GAME_TIMER();
    *iParam4 = MISC::GET_GAME_TIMER();
  }
}