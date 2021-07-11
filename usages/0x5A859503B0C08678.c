// abigail1.c @ L34234
int func_224(int iParam0)
{
  if (CAM::IS_SCREEN_FADED_IN())
  {
    if ((MISC::GET_GAME_TIMER() - Global_28) > iParam0)
    {
      Global_27 = MISC::GET_GAME_TIMER();
    }
    Global_28 = MISC::GET_GAME_TIMER();
    if ((MISC::GET_GAME_TIMER() - Global_27) > iParam0)
    {
      if (func_225())
      {
        Global_27 = MISC::GET_GAME_TIMER();
        return 1;
      }
    }
  }
  return 0;
}