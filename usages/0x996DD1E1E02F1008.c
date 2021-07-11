// achievement_controller.c @ L14076
int func_118()
{
  int iVar0;
  
  if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(22))
  {
    return 0;
  }
  iVar0 = MISC::GET_NUM_SUCCESSFUL_STUNT_JUMPS();
  if (iVar0 > 0)
  {
    if (Global_30998 < iVar0)
    {
      if (Global_30998 >= 0)
      {
        func_133(22, iVar0);
      }
      Global_30998 = iVar0;
    }
  }
  if (MISC::GET_NUM_SUCCESSFUL_STUNT_JUMPS() >= 50)
  {
    func_127(22, 1);
    return 1;
  }
  return 0;
}