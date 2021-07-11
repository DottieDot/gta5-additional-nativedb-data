// appinternet.ysc @ L280575
void func_2614()
{
  int iVar0;
  
  iVar0 = MISC::GET_GAME_TIMER();
  if (iVar0 > (Global_58644 + 120000) || Global_58644 == -1)
  {
    if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
    {
      Global_61456 = 1;
      return;
    }
    if (!NETWORK::NETWORK_HAVE_JUST_UPLOAD_LATER())
    {
      Global_61456 = 1;
      return;
    }
    if (!Global_58643)
    {
      if (STATS::_0x5A556B229A169402())
      {
        Global_58644 = iVar0;
        Global_58643 = 1;
      }
    }
  }
}