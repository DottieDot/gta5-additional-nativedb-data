// fm_mission_controller.c @ L785332
void func_12825()
{
  char* sVar0;
  
  if (Local_5532[Local_6942[iLocal_1074 /*287*/].f_1] < 17)
  {
    if (MISC::IS_BIT_SET(Global_4456448.f_13, 16))
    {
      GRAPHICS::SET_ARTIFICIAL_LIGHTS_STATE(1);
      GRAPHICS::SET_TIMECYCLE_MODIFIER("NoPedLight");
      GRAPHICS::SET_TIMECYCLE_MODIFIER_STRENGTH(1f);
      if (!Global_1672541)
      {
        sVar0 = "DLC_HALLOWEEN_FVJ_Sounds";
        if (MISC::IS_BIT_SET(Global_4456448.f_27, 19))
        {
          sVar0 = "dlc_xm_sls_Sounds";
        }
        AUDIO::PLAY_SOUND_FRONTEND(-1, "Breaker_02", sVar0, false);
      }
      Global_1672541 = 1;
    }
  }
}