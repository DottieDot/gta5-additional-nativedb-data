// taxi_clowncar.ysc @ L5790
void func_195(var uParam0, bool bParam1)
{
  func_196(uParam0);
  if (bParam1)
  {
    if (!HUD::DOES_BLIP_EXIST(uParam0->f_9))
    {
      uParam0->f_9 = func_190(uParam0->f_17, 1);
    }
    else if (HUD::GET_BLIP_ALPHA(uParam0->f_9) == 0)
    {
      HUD::SET_GPS_FLAGS(1, 0f);
      HUD::SET_BLIP_ALPHA(uParam0->f_9, 255);
      HUD::SET_BLIP_COORDS(uParam0->f_9, uParam0->f_17);
      HUD::SET_BLIP_ROUTE(uParam0->f_9, true);
    }
  }
}