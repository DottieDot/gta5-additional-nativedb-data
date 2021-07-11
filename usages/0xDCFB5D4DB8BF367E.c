// fm_race_creator.c @ L430090
void func_6896(int iParam0)
{
  if (HUD::DOES_BLIP_EXIST(Global_2416074[iParam0]))
  {
    func_6897(&(Global_2416074[iParam0]));
    HUD::SHOW_CREW_INDICATOR_ON_BLIP(Global_2416074[iParam0], 0);
  }
  MISC::CLEAR_BIT(&(Global_2416074.f_381), iParam0);
  func_6884(iParam0);
}