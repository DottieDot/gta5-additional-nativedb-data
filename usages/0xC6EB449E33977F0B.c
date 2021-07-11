// am_mp_yacht.c @ L6896
void func_97()
{
  if (!MISC::IS_BIT_SET(Local_311, 2))
  {
    if (STREAMING::HAS_NAMED_PTFX_ASSET_LOADED("scr_apartment_mp"))
    {
      GRAPHICS::USE_PARTICLE_FX_ASSET("scr_apartment_mp");
      Local_311.f_8 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY_BONE("scr_apa_jacuzzi_drips", PLAYER::PLAYER_PED_ID(), 0f, 0f, 0f, 0f, 0f, 0f, PED::GET_PED_BONE_INDEX(PLAYER::PLAYER_PED_ID(), 18905), 1065353216, 0, 0, 0);
      GRAPHICS::USE_PARTICLE_FX_ASSET("scr_apartment_mp");
      Local_311.f_9 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY_BONE("scr_apa_jacuzzi_drips", PLAYER::PLAYER_PED_ID(), 0f, 0f, 0f, 0f, 0f, 0f, PED::GET_PED_BONE_INDEX(PLAYER::PLAYER_PED_ID(), 57005), 1065353216, 0, 0, 0);
      MISC::SET_BIT(&Local_311, 2);
      Local_311.f_10 = NETWORK::GET_NETWORK_TIME();
    }
  }
}