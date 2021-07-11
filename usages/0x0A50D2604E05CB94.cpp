// am_pi_menu.ysc @ L403439
void func_5157(int iParam0)
{
  if (func_50())
  {
    Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_75.f_21 = iParam0;
    func_38(9644, iParam0, -1, 1, 0);
    Global_2540475.f_25 = iParam0;
    STATS::_PLAYSTATS_CHANGE_MC_EMBLEM(func_46(func_48()), func_45(func_48()), func_44(), func_43(), iParam0);
  }
}