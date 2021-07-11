// family2.c @ L50760
void func_475()
{
  if (bLocal_154)
  {
    if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
    {
      if (PLAYER::GET_PLAYER_SPRINT_TIME_REMAINING(PLAYER::PLAYER_ID()) <= 5f)
      {
        if (!func_477(29))
        {
          func_244("AM_H_NOSTAM", -1);
          func_476(29);
        }
      }
    }
  }
}