// abigail1.ysc @ L34255
int func_225()
{
  if (HUD::IS_PAUSE_MENU_ACTIVE())
  {
    return 0;
  }
  if (PAD::IS_CONTROL_JUST_PRESSED(0, 18) || PAD::IS_CONTROL_JUST_PRESSED(2, 18))
  {
    return 1;
  }
  return 0;
}