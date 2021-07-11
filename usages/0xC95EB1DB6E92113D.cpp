// am_mp_drone.ysc @ L4335
void func_171()
{
  if ((MISC::IS_BIT_SET(Local_117.f_5, 24) && !MISC::IS_BIT_SET(Local_117.f_5, 3)) && !Local_117.f_118)
  {
    if (STREAMING::HAS_NAMED_PTFX_ASSET_LOADED("scr_xs_dr"))
    {
      if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_117.f_121))
      {
        GRAPHICS::USE_PARTICLE_FX_ASSET("scr_xs_dr");
        GRAPHICS::START_NETWORKED_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_xs_dr_emp", NETWORK::NET_TO_OBJ(Local_117.f_121), 0f, -0.5f, 0f, 0f, 0f, 0f, 3f, 0, 0, 0);
      }
    }
    Local_117.f_17 = 100;
    PAD::SET_PAD_SHAKE(0, 300, 150);
    if (AUDIO::HAS_SOUND_FINISHED(Local_117.f_34))
    {
      Local_117.f_34 = AUDIO::GET_SOUND_ID();
      AUDIO::PLAY_SOUND_FROM_ENTITY(Local_117.f_34, "Shock_Fire", NETWORK::NET_TO_OBJ(Local_117.f_121), Local_117.f_119, true, 0);
    }
    if (Local_117.f_32 != -1)
    {
      AUDIO::STOP_SOUND(Local_117.f_32);
      AUDIO::RELEASE_SOUND_ID(Local_117.f_32);
      Local_117.f_32 = -1;
    }
    func_172(ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_OBJ(Local_117.f_121), true), 0);
    MISC::SET_BIT(&(Local_117.f_5), 3);
    Local_117.f_118 = 1;
    func_8(&(Local_117.f_178), 0, 0);
  }
}