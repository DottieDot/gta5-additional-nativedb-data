// finale_intro.c @ L35
void __EntryFunction__()
{
  iLocal_2 = 1;
  iLocal_3 = 134;
  iLocal_4 = 134;
  iLocal_5 = 1;
  iLocal_6 = 1;
  iLocal_7 = 1;
  iLocal_8 = 134;
  iLocal_9 = 1;
  iLocal_10 = 12;
  iLocal_11 = 12;
  fLocal_14 = 0.001f;
  iLocal_17 = -1;
  sLocal_20 = "NULL";
  fLocal_21 = 0f;
  fLocal_25 = -0.0375f;
  fLocal_26 = 0.17f;
  if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
  {
    func_197();
    func_196();
  }
  RECORDING::_0x208784099002BC30("M_FinaleChoice", 0);
  MISC::SET_MISSION_FLAG(1);
  func_195(0);
  func_106();
  func_6();
  func_195(1);
  func_1();
}