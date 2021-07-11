// am_armwrestling.ysc @ L53815
void func_431(int iParam0, bool bParam1, bool bParam2)
{
  if (func_432())
  {
    return;
  }
  if ((func_715() == 1 || HUD::IS_PAUSE_MENU_ACTIVE()) || iParam0)
  {
    func_714(0);
    GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(1);
    if (!bParam1)
    {
      GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(1);
    }
    if (bParam2)
    {
      GRAPHICS::RESET_PAUSED_RENDERPHASES();
    }
  }
}