// am_ammo_drop.ysc @ L1515
void func_41()
{
  if (!HUD::DOES_BLIP_EXIST(iLocal_64))
  {
    iLocal_64 = HUD::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_OBJ(Local_60.f_4));
    if (Local_60.f_18)
    {
      HUD::SET_BLIP_SPRITE(iLocal_64, 84);
      HUD::SET_BLIP_SCALE(iLocal_64, 1.2f);
      HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_64, "AMD_BLIPBALL");
    }
    else
    {
      HUD::SET_BLIP_SPRITE(iLocal_64, 351);
      HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_64, "AMD_BLIPN");
      HUD::SET_BLIP_SCALE(iLocal_64, 0.7f);
    }
    HUD::SET_BLIP_COLOUR(iLocal_64, 2);
    HUD::SET_BLIP_ALPHA(iLocal_64, 120);
  }
}