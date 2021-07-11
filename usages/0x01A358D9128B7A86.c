// appinternet.c @ L278653
void func_2557()
{
  if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
  {
    if (HUD::GET_CURRENT_WEBSITE_ID() == 2)
    {
      if (HUD::GET_CURRENT_WEBPAGE_ID() == 8)
      {
        iLocal_1125 = 0;
        func_2558();
        iLocal_1141 = GRAPHICS::_REQUEST_SCALEFORM_MOVIE_2("instructional_buttons");
        while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_1141))
        {
          GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(iLocal_351, 255, 255, 255, 0, 0);
          SYSTEM::WAIT(0);
        }
        if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
        {
          iLocal_1133 = 5;
        }
      }
    }
  }
}