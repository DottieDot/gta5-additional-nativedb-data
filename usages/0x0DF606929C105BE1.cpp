// agency_heist3b.ysc @ L121262
void func_762(bool bParam0, bool bParam1)
{
  if (func_764(0))
  {
    if (!MISC::IS_BIT_SET(Local_1087, 29))
    {
      func_763(&Local_1087, 0);
    }
    if (bParam0)
    {
      if (bParam1)
      {
        func_117(1);
      }
      else if (HUD::GET_PAUSE_MENU_STATE() == 0 && !HUD::IS_PAUSE_MENU_ACTIVE())
      {
        GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(iLocal_66, 255, 255, 255, 255, 0);
      }
    }
    else if (bParam1)
    {
      func_117(0);
    }
    else if (ENTITY::DOES_ENTITY_EXIST(Local_443[2 /*2*/]))
    {
      HUD::SET_TEXT_RENDER_ID(iLocal_1382);
      GRAPHICS::DRAW_SCALEFORM_MOVIE(iLocal_66, 0.426f, 0.366f, 0.925f, 0.723f, 255, 255, 255, 255, 0);
      HUD::SET_TEXT_RENDER_ID(iLocal_1381);
    }
  }
}