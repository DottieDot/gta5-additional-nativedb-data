// fmmc_playlist_controller.ysc @ L186781
void func_1547()
{
  if (MISC::IS_BIT_SET(Global_1695546, 0))
  {
    GRAPHICS::RESET_PARTICLE_FX_OVERRIDE("ent_amb_fbi_fire_lg");
    if (Global_4456448.f_184556 == 2 && MISC::IS_BIT_SET(Global_1695546, 3))
    {
      GRAPHICS::RESET_PARTICLE_FX_OVERRIDE("exp_grd_tankshell");
      MISC::CLEAR_BIT(&Global_1695546, 3);
    }
    MISC::CLEAR_BIT(&Global_1695546, 0);
  }
}