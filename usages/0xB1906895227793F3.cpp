// maintransition.ysc @ L109412
void func_712()
{
  int iVar0;
  
  if (func_29(202))
  {
    func_4227(31);
    AUDIO::PLAY_SOUND_FRONTEND(-1, "CANCEL", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
  }
  if (func_29(201))
  {
    AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
    if (func_711() == 0 || func_711() == 1)
    {
      iVar0 = 1;
    }
    else
    {
      iVar0 = 3;
    }
    PLAYER::SET_PLAYER_TARGETING_MODE(iVar0);
    switch (func_4234())
    {
      case 0:
        func_4227(3);
        func_4235(4);
        break;
      }
  }
}