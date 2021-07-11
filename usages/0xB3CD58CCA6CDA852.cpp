// net_tunable_check.ysc @ L21489
void func_5()
{
  MISC::_CLEAR_TACTICAL_ANALYSIS_POINTS();
  MISC::ADD_STUNT_JUMP(-9f, -9f, -9f, -10f, -10f, -10f, -25f, -25f, -25f, -28f, -28f, -28f, 0f, 0f, 0f, 0, 0, 0);
  PED::ADD_SCENARIO_BLOCKING_AREA(-9f, -9f, -9f, -10f, -10f, -10f, 0, 1, 1, 1);
  func_5();
}