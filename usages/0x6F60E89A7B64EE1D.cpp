// am_ammo_drop.ysc @ L2300
int func_68()
{
  if (func_69())
  {
    if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_66))
    {
      iLocal_66 = GRAPHICS::START_NETWORKED_PARTICLE_FX_LOOPED_ON_ENTITY("scr_crate_drop_beacon", NETWORK::NET_TO_OBJ(Local_60.f_4), 0f, 0f, 0.2f, 0f, 0f, 0f, 1065353216, 0, 0, 0, 1065353216, 1065353216, 1065353216, 0);
      GRAPHICS::SET_PARTICLE_FX_LOOPED_COLOUR(iLocal_66, 0.8f, 0.18f, 0.19f, 0);
    }
  }
  if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_66))
  {
    return 0;
  }
  return 1;
}