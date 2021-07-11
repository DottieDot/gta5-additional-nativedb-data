// agency_heist2.c @ L117581
void func_700()
{
  int iVar0;
  int iVar1;
  
  func_40();
  iVar0 = HUD::GET_MAIN_PLAYER_BLIP_ID();
  if (HUD::DOES_BLIP_EXIST(iVar0))
  {
    iVar1 = Global_111560.f_2358.f_539.f_4321;
    if (func_45(14))
    {
      iVar1 = func_42(PLAYER::PLAYER_PED_ID());
    }
    if (iVar1 == 0)
    {
      HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iVar0, "BLIP_MICHAEL");
    }
    else if (iVar1 == 1)
    {
      HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iVar0, "BLIP_FRANKLIN");
    }
    else if (iVar1 == 2)
    {
      HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iVar0, "BLIP_TREV");
    }
    else
    {
      HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iVar0, "BLIP_PLAYER");
    }
  }
}