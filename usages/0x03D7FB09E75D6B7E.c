// abigail2.c @ L35674
void func_265()
{
  if (!HUD::DOES_BLIP_EXIST(iLocal_62) && func_463(iLocal_61))
  {
    iLocal_62 = func_266(iLocal_61, 1, 0, 5);
  }
  if (HUD::DOES_BLIP_EXIST(iLocal_62) && HUD::GET_BLIP_COLOUR(iLocal_62) != 1)
  {
    HUD::SET_BLIP_AS_FRIENDLY(iLocal_62, false);
    HUD::SET_BLIP_COLOUR(iLocal_62, 1);
  }
}