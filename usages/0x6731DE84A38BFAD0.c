// am_mp_arena_box.c @ L98445
void func_770(int iParam0, bool bParam1, bool bParam2)
{
  int iVar0;
  
  if (bParam2)
  {
    func_404(iParam0, 1);
  }
  iVar0 = func_199(7863, -1, 0);
  func_85(7863, iVar0 + 1, -1, 1, 0);
  iParam0->f_8 = iVar0 + 1;
  if (MISC::IS_BIT_SET(iParam0->f_1, 30))
  {
    STATS::_PLAYSTATS_SPECTATOR_WHEEL_SPIN(func_772(), func_771(bParam1), 14, 1);
  }
  else
  {
    STATS::_PLAYSTATS_SPECTATOR_WHEEL_SPIN(func_772(), func_771(bParam1), iParam0->f_102, 1);
  }
  MISC::SET_BIT(iParam0, 0);
}