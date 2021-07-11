// am_armwrestling.c @ L125496
void func_993(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, bool bParam5)
{
  int iVar0;
  
  func_1361(uParam0, iParam4);
  func_1000(uParam1, iParam4);
  HUD::DISPLAY_RADAR(false);
  func_998(uParam3);
  func_996(uParam2, joaat("proair_hoc_puck"));
  func_995(uParam2);
  STREAMING::REQUEST_ANIM_DICT("mini@arm_wrestling");
  if (bParam5)
  {
    iVar0 = 10;
  }
  else
  {
    iVar0 = 3;
  }
  HUD::REQUEST_ADDITIONAL_TEXT("ARM_MP", iVar0);
  uParam3->f_476 = func_994();
  AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
  AUDIO::LOAD_STREAM("ARM_WRESTLING_CROWD_MASTER", 0);
}