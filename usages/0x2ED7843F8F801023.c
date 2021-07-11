// agency_heist3a.c @ L128347
void func_849(int iParam0, int iParam1)
{
  int iVar0;
  vector3 vVar1[24];
  int iVar2;
  
  if (iParam1 != 0)
  {
    StringCopy(&cVar1, "FEED_CREW_S", 24);
    StringIntConCat(&cVar1, iParam1, 24);
    HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(&cVar1);
    iVar0 = 0;
    while (iVar0 < Global_94728[iParam0 /*19*/])
    {
      iVar2 = Global_111560.f_1.f_12[iParam0 /*6*/][iVar0];
      if (!MISC::IS_BIT_SET(Global_111560.f_1.f_118, iVar2))
      {
        HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_852(iVar2));
      }
      iVar0++;
    }
    HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1);
    if (!func_851(56))
    {
      if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
      {
        func_540("AM_H_CRWLVL", -1);
        func_850(56);
      }
    }
  }
}