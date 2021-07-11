// am_armwrestling.c @ L54881
void func_468(int iParam0)
{
  func_469();
  if (iParam0 == 0)
  {
    if (LOADINGSCREEN::_LOADINGSCREEN_GET_LOAD_FREEMODE())
    {
      return;
    }
  }
  if (func_715() == 0 || HUD::IS_PAUSE_MENU_ACTIVE())
  {
    func_714(1);
    GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(0);
    GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(0);
  }
}