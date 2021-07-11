// director_mode.c @ L15572
void func_191()
{
  if (!TASK::IS_PED_STILL(PLAYER::PLAYER_PED_ID()))
  {
    Global_4254407.f_897 = MISC::GET_GAME_TIMER();
  }
  if (!func_405(PLAYER::PLAYER_PED_ID()))
  {
    Global_4254407.f_898 = MISC::GET_GAME_TIMER();
  }
  func_197(&Global_4194381, &Global_4254407, PLAYER::PLAYER_PED_ID(), 0);
  if (((Global_4254407.f_882 || Global_4254407.f_885) || Global_4254407.f_938) && Global_4254407.f_875)
  {
    func_192(PLAYER::PLAYER_PED_ID(), 0);
  }
  if (Global_4254407.f_875)
  {
    if ((!Global_4254407.f_8 && !Global_4254407.f_24.f_8) && !Global_4254407.f_48.f_8)
    {
      Global_4254407.f_875 = 0;
      Global_4254407.f_878 = -1;
      Global_4254407.f_879 = -1;
    }
  }
}