// country_race.ysc @ L20311
void func_345(char* sParam0, int iParam1, bool bParam2)
{
  HUD::REQUEST_ADDITIONAL_TEXT_FOR_DLC(sParam0, iParam1);
  if (bParam2)
  {
    while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(iParam1))
    {
      SYSTEM::WAIT(0);
    }
  }
}