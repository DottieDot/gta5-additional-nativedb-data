// altruist_cult.ysc @ L1866
void func_51(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
  if (*uParam0 == 0)
  {
    *uParam0 = GRAPHICS::REQUEST_SCALEFORM_MOVIE_INSTANCE("instructional_buttons");
  }
  uParam0->f_1 = 0;
  uParam0->f_123 = 0;
  if (bParam1)
  {
    func_40(&(uParam0->f_1), 32);
  }
  if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
  {
    func_40(&(uParam0->f_1), 1);
    if (bParam2)
    {
      GRAPHICS::SET_SCALEFORM_MOVIE_TO_USE_SYSTEM_TIME(*uParam0, 1);
    }
  }
  if (MISC::IS_PC_VERSION())
  {
    if (bParam3)
    {
      func_40(&(uParam0->f_1), 4096);
    }
  }
  if (bParam4)
  {
    func_40(&(uParam0->f_1), 8192);
  }
}