// fm_mission_controller.ysc @ L905803
void func_14667()
{
  if (func_575(Global_4456448.f_190930))
  {
    GRAPHICS::_0x6A51F78772175A51(0);
    AUDIO::_OVERRIDE_MICROPHONE_SETTINGS(1704074839, 0);
    GRAPHICS::_0x5DBF05DB5926D089(1f);
    GRAPHICS::_0x2B40A97646381508(1f);
    GRAPHICS::_0x259BA6D4E6F808F1(0f);
    if (CAM::DOES_CAM_EXIST(Global_1672561))
    {
      CAM::DESTROY_CAM(Global_1672561, 0);
    }
    GRAPHICS::_0x0AE73D8DF3A762B2(false);
  }
}