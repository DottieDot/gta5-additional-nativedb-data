// am_mp_hangar.ysc @ L343190
float func_5289(var uParam0, var uParam1, var uParam2)
{
  if (MISC::IS_BIT_SET(*uParam2, 31))
  {
    if (((Global_98721.f_344 == 250816423 || Global_98721.f_344 == -1135649904) || Global_98721.f_344 == -478270020) || Global_98721.f_344 == 2084516274)
    {
      return func_5290(GRAPHICS::GET_TV_VOLUME(), -50f, 0.05f, 0);
    }
    else
    {
      return func_5290(GRAPHICS::GET_TV_VOLUME(), func_135(uParam0, uParam1), 0.05f, 0);
    }
  }
  if (MISC::IS_BIT_SET(*uParam2, 22) && !MISC::IS_BIT_SET(*uParam1, 3))
  {
    return -36f;
  }
  else
  {
    return func_135(uParam0, uParam1);
  }
  return -36f;
}