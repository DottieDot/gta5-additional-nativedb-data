// family1.c @ L29719
void func_472()
{
  if (HUD::DOES_BLIP_EXIST(Local_283.f_5))
  {
    if (!iLocal_295)
    {
      HUD::START_GPS_MULTI_ROUTE(156, 1, 0);
      HUD::ADD_POINT_TO_GPS_MULTI_ROUTE(-1461.174f, -85.7604f, 49.9523f);
      HUD::ADD_POINT_TO_GPS_MULTI_ROUTE(vLocal_329);
      HUD::SET_GPS_MULTI_ROUTE_RENDER(1);
      iLocal_3077 = MISC::GET_GAME_TIMER();
      iLocal_3078 = 0;
      iLocal_295 = 1;
    }
    if ((iLocal_295 == 1 && (MISC::GET_GAME_TIMER() - iLocal_3077) > 10000) && iLocal_3078 == 0)
    {
      HUD::SET_BLIP_ROUTE(Local_283.f_6, false);
      iLocal_3078 = 1;
    }
  }
  else if (iLocal_295)
  {
    HUD::SET_GPS_MULTI_ROUTE_RENDER(0);
    HUD::CLEAR_GPS_MULTI_ROUTE();
    iLocal_295 = 0;
  }
}