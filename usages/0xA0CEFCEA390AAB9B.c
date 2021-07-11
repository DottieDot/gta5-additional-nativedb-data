// am_mp_rc_vehicle.c @ L116228
void func_1084()
{
  if (!func_1090())
  {
    CAM::DO_SCREEN_FADE_OUT(500);
    func_959(PLAYER::PLAYER_ID(), 0, 0, 0);
    PAD::_0xA0CEFCEA390AAB9B(0);
    func_1085(1);
    MISC::SET_BIT(&(uLocal_115[PLAYER::PLAYER_ID()]), 0);
    func_937(&(Local_117.f_35), 0, 0);
    func_1064(1);
  }
}