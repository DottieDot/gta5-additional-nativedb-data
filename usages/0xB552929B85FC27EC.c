// am_lester_cut.c @ L6460
void func_212(var uParam0)
{
  if (func_214(1))
  {
    if (HUD::DOES_BLIP_EXIST(*uParam0) && !HUD::IS_BLIP_SHORT_RANGE(*uParam0))
    {
      HUD::SET_BLIP_AS_SHORT_RANGE(*uParam0, true);
      HUD::_0xB552929B85FC27EC(*uParam0, 0);
      HUD::SET_BLIP_PRIORITY(*uParam0, 5);
    }
  }
  else if (HUD::DOES_BLIP_EXIST(*uParam0) && (HUD::IS_BLIP_SHORT_RANGE(*uParam0) && !func_213()))
  {
    HUD::SET_BLIP_AS_SHORT_RANGE(*uParam0, false);
    HUD::_0xB552929B85FC27EC(*uParam0, 1);
  }
}