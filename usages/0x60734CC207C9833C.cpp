// freemode.ysc @ L917139
void func_13990(bool bParam0)
{
  if (!Global_2416074.f_1708)
  {
    Global_2416074.f_1707 = 0;
    HUD::ALLOW_SONAR_BLIPS(0);
    Global_2416074.f_1708 = 1;
  }
  if (bParam0)
  {
    HUD::FORCE_SONAR_BLIPS_THIS_FRAME();
    if (!Global_2416074.f_1707)
    {
      HUD::ALLOW_SONAR_BLIPS(1);
      Global_2416074.f_1707 = 1;
    }
  }
  else if (Global_2416074.f_1707)
  {
    HUD::ALLOW_SONAR_BLIPS(0);
    Global_2416074.f_1707 = 0;
  }
}