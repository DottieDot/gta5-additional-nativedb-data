// fm_capture_creator.c @ L269134
void func_2724(int iParam0, vector3 vParam1, int iParam2, char* sParam3, float fParam4, bool bParam5, bool bParam6, int iParam7)
{
  if (HUD::DOES_BLIP_EXIST(*iParam0))
  {
    HUD::REMOVE_BLIP(iParam0);
  }
  *iParam0 = HUD::ADD_BLIP_FOR_COORD(vParam1);
  if (iParam7 != -1)
  {
    HUD::SET_BLIP_SPRITE(*iParam0, iParam7);
  }
  func_1169(iParam0, iParam2);
  HUD::SET_BLIP_SCALE(*iParam0, fParam4);
  HUD::_SET_BLIP_SHRINK(*iParam0, 1);
  if (bParam5)
  {
    HUD::SET_BLIP_PRIORITY(*iParam0, 6);
  }
  else
  {
    HUD::SET_BLIP_PRIORITY(*iParam0, 5);
  }
  HUD::SHOW_HEIGHT_ON_BLIP(*iParam0, false);
  if (bParam6)
  {
  }
  HUD::SET_BLIP_SHOW_CONE(*iParam0, bParam6);
  if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
  {
    HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*iParam0, sParam3);
  }
}