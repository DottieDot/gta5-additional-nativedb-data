// fm_bj_race_controler.ysc @ L514699
void func_8472(var uParam0)
{
  func_8473();
  NETWORK::_0x68103E2247887242();
  if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_104))
  {
    GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_104, "CLEANUP_MOVIE");
    GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
    GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_104));
  }
  NETWORK::NETWORK_SET_OVERRIDE_SPECTATOR_MODE(false);
  func_4461();
  func_4559(0);
  func_4557(0);
  HUD::THEFEED_FLUSH_QUEUE();
}