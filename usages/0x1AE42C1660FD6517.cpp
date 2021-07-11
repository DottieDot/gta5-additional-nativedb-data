// am_mp_drone.ysc @ L695
void func_20()
{
  char* sVar0;
  
  if (Local_117.f_44 == -1)
  {
    return;
  }
  if (!func_21(Local_117.f_44))
  {
    return;
  }
  if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(vLocal_115[Local_117.f_44 /*3*/].f_2))
  {
    sVar0 = "scr_xs_props";
    STREAMING::REQUEST_NAMED_PTFX_ASSET(sVar0);
    if (STREAMING::HAS_NAMED_PTFX_ASSET_LOADED(sVar0))
    {
      if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_117.f_136[Local_117.f_44]))
      {
        GRAPHICS::USE_PARTICLE_FX_ASSET(sVar0);
        Local_117.f_136[Local_117.f_44] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_xs_guided_missile_trail", NETWORK::NET_TO_OBJ(vLocal_115[Local_117.f_44 /*3*/].f_2), 0f, 0f, 0f, 0f, 0f, 0f, 1f, 0, 0, 0);
      }
    }
  }
  else if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_117.f_136[Local_117.f_44]))
  {
    GRAPHICS::STOP_PARTICLE_FX_LOOPED(Local_117.f_136[Local_117.f_44], 0);
  }
}