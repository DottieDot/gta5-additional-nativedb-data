// extreme1.ysc @ L44806
int func_461()
{
  if (iLocal_299 == 1 && PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_380))
  {
    if ((iLocal_392 == 0 && CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_380) > 0.7f)
    {
      GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, 0);
      AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
      iLocal_392 = 1;
    }
    if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_380) > 0.92f)
    {
      TASK::OPEN_SEQUENCE_TASK(&iLocal_381);
      TASK::TASK_FORCE_MOTION_STATE(0, -1161760501, 0);
      TASK::TASK_PARACHUTE(0, 1, 0);
      TASK::CLOSE_SEQUENCE_TASK(iLocal_381);
      TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), iLocal_381);
      TASK::CLEAR_SEQUENCE_TASK(&iLocal_381);
      return 1;
    }
  }
  return 0;
}