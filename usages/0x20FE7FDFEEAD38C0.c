// am_mp_drone.c @ L9822
void func_332()
{
  float fVar0;
  float fVar1;
  
  if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_117.f_121))
  {
    if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_117.f_121), 0))
    {
      if ((func_9() || func_29()) || func_27())
      {
        fVar0 = -323.1f;
        fVar1 = -1970.9f;
      }
      else
      {
        fVar0 = Local_117.f_112;
        fVar1 = Local_117.f_112.f_1;
      }
      HUD::_SET_PLAYER_BLIP_POSITION_THIS_FRAME(fVar0, fVar1);
      HUD::_0xA17784FCA9548D15(fVar0, fVar1, 0);
      if (!INTERIOR::IS_VALID_INTERIOR(Global_1687880.f_24) && !func_27())
      {
        if (!MISC::IS_BIT_SET(Local_117.f_5, 8))
        {
          HUD::HIDE_MINIMAP_INTERIOR_MAP_THIS_FRAME();
        }
        HUD::SET_RADAR_AS_EXTERIOR_THIS_FRAME();
      }
    }
  }
}