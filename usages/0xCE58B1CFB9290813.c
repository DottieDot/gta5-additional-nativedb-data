// mission_triggerer_a.c @ L112018
void func_711()
{
  RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
  STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ig_lestercrest"));
  STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_wheelchair_01_s"));
  STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("p_cctv_s"));
  AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
  STREAMING::REMOVE_ANIM_DICT("MissLester1ALeadInOut");
  ENTITY::REMOVE_MODEL_HIDE(1276.49f, -1720.06f, 56.47f, 0.5f, joaat("prop_cctv_cam_06a"), false);
  PED::REMOVE_RELATIONSHIP_GROUP(Global_95196.f_42);
  STREAMING::CLEAR_HD_AREA();
  GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_1467);
  if (func_712() != 44)
  {
    func_706(6, 1);
  }
}