// autosave_controller.c @ L509
void func_12(bool bParam0, int iParam1, bool bParam2)
{
  var uVar0;
  var uVar1;
  
  func_378();
  func_367();
  func_56();
  if (bParam2)
  {
    MISC::SET_BIT(&(Global_111560.f_10011.f_25), 4);
  }
  else
  {
    MISC::CLEAR_BIT(&(Global_111560.f_10011.f_25), 4);
  }
  Global_111560.f_7683.f_924 = MISC::GET_GAME_TIMER();
  if (Global_76839 == 62 || Global_76840 == 62)
  {
    func_13(2, 1);
  }
  if (!bParam0)
  {
    Global_98708.f_8 = 0;
    Global_111560.f_10011.f_23 = 0;
    Global_111560.f_10011.f_24 = 0;
  }
  MISC::OVERRIDE_SAVE_HOUSE(iParam1, Global_111560.f_25079, Global_111560.f_25079.f_3, bParam0, &uVar0, &uVar1);
}