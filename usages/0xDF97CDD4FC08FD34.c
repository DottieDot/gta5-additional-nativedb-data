// agency_heist3a.c @ L135523
void func_951()
{
  float fVar0;
  
  if (OBJECT::DOOR_SYSTEM_GET_IS_PHYSICS_LOADED(iLocal_2139[12]))
  {
    fVar0 = OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(iLocal_2139[12]);
    if (MISC::ABSF(fVar0) < 0.1f)
    {
      if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_2552))
      {
        iLocal_2552 = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_agency3a_door_hvy_stat", 128.6654f, -730.9644f, 258.2f, 0f, 0f, 344.9527f, 1065353216, 0, 0, 0, 0);
      }
      if (func_3(&iLocal_2553, 3000))
      {
        iLocal_2551 = 1;
      }
    }
    else
    {
      if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_2552))
      {
        GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_2552, 0);
      }
      iLocal_2553 = MISC::GET_GAME_TIMER();
    }
    if (fVar0 < -0.4f && iLocal_2551)
    {
      GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD("scr_agency3a_door_hvy_trig", 128.6654f, -730.9644f, 258.2f, 0f, 0f, 344.9527f, 1065353216, 0, 0, 0);
      iLocal_2551 = 0;
    }
  }
}