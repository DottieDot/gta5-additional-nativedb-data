// freemode.c @ L843509
void func_12068()
{
  if ((((((func_148(PLAYER::PLAYER_ID(), 1, 0) || func_3583()) || !func_157(PLAYER::PLAYER_ID())) || func_1594()) || func_6827(0, 2481)) || func_8944()) || func_6827(8, 2481))
  {
    func_12069();
  }
  else
  {
    if (!HUD::DOES_BLIP_EXIST(uLocal_9045[0]))
    {
      uLocal_9045[0] = func_5888(50.9f, -1392.7f, 28.9f, 0);
      HUD::SET_BLIP_SPRITE(uLocal_9045[0], 100);
      HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uLocal_9045[0], "MP_CARWASH");
      HUD::SET_BLIP_AS_SHORT_RANGE(uLocal_9045[0], true);
      HUD::SET_BLIP_HIGH_DETAIL(uLocal_9045[0], 0);
    }
    if (!HUD::DOES_BLIP_EXIST(uLocal_9045[1]))
    {
      uLocal_9045[1] = func_5888(-699.7f, -922.9f, 18.5f, 0);
      HUD::SET_BLIP_SPRITE(uLocal_9045[1], 100);
      HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uLocal_9045[1], "MP_CARWASH");
      HUD::SET_BLIP_AS_SHORT_RANGE(uLocal_9045[1], true);
      HUD::SET_BLIP_HIGH_DETAIL(uLocal_9045[1], 0);
    }
  }
}