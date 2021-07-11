// benchmark.c @ L402
void func_6()
{
  func_7(500, 1);
  if (MISC::_LANDING_MENU_IS_ACTIVE())
  {
    MISC::_RESTART_GAME();
  }
  else
  {
    MISC::_FORCE_SOCIAL_CLUB_UPDATE();
  }
  SCRIPT::TERMINATE_THIS_THREAD();
}