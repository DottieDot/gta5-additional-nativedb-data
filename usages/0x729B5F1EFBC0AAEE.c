// gb_jewel_store_grab.c @ L23618
void func_765()
{
  if (!HUD::DOES_BLIP_EXIST(iLocal_432))
  {
    if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_460.f_9))
    {
      iLocal_432 = HUD::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_VEH(Local_460.f_9));
      HUD::SET_BLIP_SPRITE(iLocal_432, func_769());
      HUD::SET_BLIP_SCALE(iLocal_432, 1f);
      func_767(&iLocal_432, func_746());
      HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_432, func_766());
      HUD::SET_BLIP_PRIORITY(iLocal_432, 12);
      if (!func_435(5))
      {
        HUD::SET_BLIP_FLASHES(iLocal_432, true);
        HUD::SET_BLIP_FLASH_INTERVAL(iLocal_432, 250);
        HUD::SET_BLIP_FLASH_TIMER(iLocal_432, 7000);
        func_87(5);
      }
    }
  }
  else if (HUD::GET_BLIP_HUD_COLOUR(iLocal_432) != func_746())
  {
    func_767(&iLocal_432, func_746());
  }
}