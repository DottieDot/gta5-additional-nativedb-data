// carsteal2.ysc @ L19930
void func_309(int iParam0, bool bParam1)
{
  if (iParam0 == 1)
  {
    if (!bParam1)
    {
      GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
    }
    GRAPHICS::SET_SEETHROUGH(true);
  }
  else
  {
    GRAPHICS::SET_SEETHROUGH(false);
    if (!bParam1)
    {
      GRAPHICS::SET_TIMECYCLE_MODIFIER("eyeinthesky");
    }
  }
}