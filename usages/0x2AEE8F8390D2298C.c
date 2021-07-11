// fm_race_creator.c @ L427776
void func_6831(var uParam0)
{
  if (HUD::DOES_BLIP_EXIST(*uParam0))
  {
    HUD::SET_BLIP_FADE(*uParam0, 255, 0);
    HUD::SET_BLIP_ALPHA(*uParam0, 255);
  }
}