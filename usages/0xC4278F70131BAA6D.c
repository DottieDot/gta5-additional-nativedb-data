// am_dead_drop.c @ L123265
void func_1243()
{
  if (func_1427())
  {
    return;
  }
  if (!HUD::DOES_BLIP_EXIST(iLocal_1489))
  {
    if (Local_112.f_3 != func_1556())
    {
      if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_112.f_3))
      {
        if (func_1555(Local_112.f_3, 1, 1))
        {
          if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_112.f_2))
          {
            iLocal_1489 = HUD::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_ENT(Local_112.f_2));
            HUD::SET_BLIP_SPRITE(iLocal_1489, 440);
            HUD::SHOW_HEIGHT_ON_BLIP(iLocal_1489, true);
            HUD::_SET_BLIP_DISPLAY_INDICATOR_ON_BLIP(iLocal_1489, 1);
            HUD::SET_BLIP_PRIORITY(iLocal_1489, 10);
            HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_1489, "DD_BLIP2");
            HUD::SET_BLIP_AS_SHORT_RANGE(iLocal_1489, false);
            HUD::SET_BLIP_SCALE(iLocal_1489, 1.25f);
          }
        }
      }
    }
  }
}