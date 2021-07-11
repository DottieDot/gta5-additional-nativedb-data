// am_boat_taxi.ysc @ L5383
void func_132()
{
  if (!HUD::DOES_BLIP_EXIST(iLocal_99))
  {
    if (func_72(Local_95.f_2))
    {
      iLocal_99 = HUD::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_VEH(Local_95.f_2));
      HUD::SET_BLIP_SPRITE(iLocal_99, 356);
      HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_99, "BTX_BLIP");
      HUD::SET_BLIP_FLASHES(iLocal_99, true);
      HUD::SET_BLIP_CATEGORY(iLocal_99, 6);
    }
  }
}