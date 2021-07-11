// am_casino_limo.ysc @ L52734
void func_583()
{
  if (func_589())
  {
    if (!HUD::DOES_BLIP_EXIST(iLocal_185))
    {
      iLocal_185 = HUD::ADD_BLIP_FOR_ENTITY(func_7());
      HUD::SET_BLIP_SPRITE(iLocal_185, func_588());
      func_585(&iLocal_185, func_587());
      HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_185, func_584());
    }
    if (HUD::DOES_BLIP_EXIST(iLocal_185))
    {
      HUD::_SET_BLIP_SQUARED_ROTATION(iLocal_185, ENTITY::GET_ENTITY_HEADING(func_7()));
    }
  }
  else if (HUD::DOES_BLIP_EXIST(iLocal_185))
  {
    HUD::REMOVE_BLIP(&iLocal_185);
  }
}