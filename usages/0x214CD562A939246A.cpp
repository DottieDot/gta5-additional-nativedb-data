// context_controller.ysc @ L703
int func_18(int iParam0)
{
  int iVar0;
  
  if (Global_95628 && Global_95627)
  {
    return 0;
  }
  if (iParam0 > 0)
  {
    if (func_23(iParam0, 1) || bLocal_112)
    {
      return 1;
    }
  }
  if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !HUD::_0x214CD562A939246A())
  {
    iVar0 = 0;
    while (iVar0 < 6)
    {
      if (func_23(iVar0, 1))
      {
        return 1;
      }
      iVar0++;
    }
    return 0;
  }
  return 1;
}