// abigail2.c @ L34876
void func_239(var uParam0)
{
  if (func_263(PLAYER::PLAYER_PED_ID()))
  {
    TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
  }
  if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
  {
    CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
    CAM::STOP_GAMEPLAY_HINT(0);
    AUDIO::STOP_AUDIO_SCENE("HINT_CAM_SCENE");
    GRAPHICS::ANIMPOSTFX_STOP("FocusIn");
    if (uParam0->f_11)
    {
      GRAPHICS::ANIMPOSTFX_PLAY("FocusOut", 0, 0);
      AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusOut", "HintCamSounds", true);
      uParam0->f_11 = 0;
    }
  }
  uParam0->f_2 = -1;
  *uParam0 = 1;
}