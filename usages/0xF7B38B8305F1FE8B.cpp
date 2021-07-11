// act_cinema.ysc @ L113765
void func_958()
{
  GRAPHICS::SET_TV_CHANNEL_PLAYLIST(0, func_960(1), 0);
  if (func_959(22))
  {
    GRAPHICS::SET_TV_CHANNEL_PLAYLIST(1, func_960(12), 0);
  }
  else
  {
    GRAPHICS::SET_TV_CHANNEL_PLAYLIST(1, func_960(2), 0);
  }
}