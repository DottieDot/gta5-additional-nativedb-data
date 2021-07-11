// am_darts.ysc @ L126537
void func_985(var uParam0)
{
  if (!HUD::IS_PAUSE_MENU_ACTIVE())
  {
    if (!func_995(&(uParam0->f_666), 8))
    {
      func_992(&(uParam0->f_666), 8, 1);
      func_992(&(uParam0->f_666), 15, 0);
      func_992(&(uParam0->f_666), 16, 0);
      func_992(&(uParam0->f_666), 17, 0);
    }
    HUD::CLEAR_SMALL_PRINTS();
    HUD::SET_WARNING_MESSAGE_WITH_HEADER("DARTS_QUIT", "DARTS_QUIT_DET", 36, 0, 0, -1, 0, 0, 1, 0);
  }
  else if (func_995(&(uParam0->f_666), 8))
  {
    func_992(&(uParam0->f_666), 8, 0);
  }
}