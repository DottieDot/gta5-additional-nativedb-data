// gb_biker_free_prisoner.c @ L325024
void func_5214()
{
  if (PLAYER::GET_MAX_WANTED_LEVEL() < 5)
  {
    PLAYER::SET_MAX_WANTED_LEVEL(5);
    PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
  }
  func_5260("FP_HIJACK_TEXT");
  if (func_5259() && iLocal_272 == 2)
  {
    AUDIO::TRIGGER_MUSIC_EVENT("BKR_FREE_PRIS_FAIL");
  }
  if (MISC::GET_FAKE_WANTED_LEVEL() > 0)
  {
    MISC::SET_FAKE_WANTED_LEVEL(0);
  }
  if (iLocal_267)
  {
    if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID()) != iLocal_268)
    {
      PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), iLocal_268);
    }
  }
  func_5258();
  func_845(0);
  func_382();
  func_5256(Global_1674861, -1, -1, -1, -1);
  func_5215(1, 0);
  func_384();
  func_4654();
  SCRIPT::TERMINATE_THIS_THREAD();
}