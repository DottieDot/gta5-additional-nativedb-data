// fm_mission_controller.c @ L538552
void func_8460(int iParam0, bool bParam1)
{
  int iVar0;
  int iVar1;
  
  if (bParam1)
  {
    CAM::SHAKE_GAMEPLAY_CAM("SMALL_EXPLOSION_SHAKE", 1f);
    GRAPHICS::SET_PARTICLE_FX_NON_LOOPED_COLOUR(func_8461(0, 0), func_8461(1, 0), func_8461(2, 0));
    GRAPHICS::USE_PARTICLE_FX_ASSET("scr_powerplay");
    GRAPHICS::START_NETWORKED_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_powerplay_beast_vanish", iParam0, 0f, 0f, 0f, 0f, 0f, 0f, 4f, 0, 0, 0);
    iVar0 = func_5015();
    AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Beast_Attack", iLocal_1073, iVar0, true, 250);
  }
  else
  {
    CAM::SHAKE_GAMEPLAY_CAM("SMALL_EXPLOSION_SHAKE", 1f);
    GRAPHICS::SET_PARTICLE_FX_NON_LOOPED_COLOUR(func_8461(0, 0), func_8461(1, 0), func_8461(2, 0));
    GRAPHICS::USE_PARTICLE_FX_ASSET("scr_powerplay");
    GRAPHICS::START_NETWORKED_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_powerplay_beast_appear", iParam0, 0f, 0f, 0f, 0f, 0f, 0f, 2.5f, 0, 0, 0);
    iVar1 = func_5015();
    AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Beast_Attack", iLocal_1073, iVar1, true, 250);
  }
}