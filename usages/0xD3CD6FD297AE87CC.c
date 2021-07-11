// am_dead_drop.c @ L122857
void func_1231()
{
  if (func_1427())
  {
    return;
  }
  if (!HUD::DOES_BLIP_EXIST(iLocal_1491))
  {
    iLocal_1491 = func_1234(Local_112.f_13, 1);
    HUD::SET_BLIP_COLOUR(iLocal_1491, 5);
    func_1232(&iLocal_1491, 12);
    HUD::SHOW_HEIGHT_ON_BLIP(iLocal_1491, true);
    HUD::SET_BLIP_FLASH_TIMER(iLocal_1491, 7000);
    HUD::SET_BLIP_PRIORITY(iLocal_1491, 6);
    HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_1491, "DD_BLIP3");
    HUD::SET_BLIP_ROUTE(iLocal_1491, true);
  }
}