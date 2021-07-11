// carwash1.ysc @ L8899
void func_197(var uParam0, char* sParam1)
{
  func_196(uParam0, 0, joaat("prop_carwash_roller_horz"));
  func_196(uParam0, 1, joaat("prop_carwash_roller_vert"));
  func_196(uParam0, 2, joaat("prop_ld_test_01"));
  if (AUDIO::HINT_SCRIPT_AUDIO_BANK("SCRIPT\CARWASH", 0, -1))
  {
  }
  func_194(uParam0, 3);
  if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
  {
    func_195(uParam0, 4, 11, sParam1, 0);
  }
  while (!func_191(uParam0))
  {
    PAD::SET_INPUT_EXCLUSIVE(2, 51);
    PAD::SET_INPUT_EXCLUSIVE(2, 75);
    func_110();
    SYSTEM::WAIT(0);
  }
}