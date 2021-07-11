// am_hunt_the_beast.c @ L116790
void func_752(int iParam0)
{
  int iVar0;
  
  iVar0 = iParam0;
  if (HUD::DOES_BLIP_EXIST(Global_2416074[iVar0]))
  {
    if (func_753(iParam0))
    {
      HUD::BEGIN_TEXT_COMMAND_SET_BLIP_NAME("CUSPLNM");
      HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2416074.f_1313[iVar0 /*2*/]));
      HUD::END_TEXT_COMMAND_SET_BLIP_NAME(Global_2416074[iVar0]);
    }
    else
    {
      HUD::SET_BLIP_NAME_TO_PLAYER_NAME(Global_2416074[iVar0], iParam0);
    }
  }
}