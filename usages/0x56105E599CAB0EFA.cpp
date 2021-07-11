// gb_gunrunning.ysc @ L260417
void func_3411()
{
  int iVar0;
  
  iVar0 = func_3413();
  if (iVar0 == 0)
  {
    return;
  }
  if (func_3412())
  {
    if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
    {
      if (PLAYER::GET_PLAYER_FAKE_WANTED_LEVEL(PLAYER::PLAYER_ID()) < iVar0)
      {
        MISC::SET_FAKE_WANTED_LEVEL(iVar0);
      }
    }
    else if (PLAYER::GET_PLAYER_FAKE_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
    {
      MISC::SET_FAKE_WANTED_LEVEL(0);
    }
  }
  else if (PLAYER::GET_PLAYER_FAKE_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
  {
    MISC::SET_FAKE_WANTED_LEVEL(0);
  }
}