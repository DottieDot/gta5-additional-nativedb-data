// altruist_cult.ysc @ L1776
int func_46(var uParam0, bool bParam1, bool bParam2)
{
  if (!func_49(&(uParam0->f_2)))
  {
    func_34(&(uParam0->f_2));
  }
  HUD::HIDE_HUD_COMPONENT_THIS_FRAME(14);
  if (!bParam2)
  {
    GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*uParam0, 255, 255, 255, 255, 0);
  }
  else if (bParam2)
  {
    GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*uParam0, 255, 255, 255, 255, 0);
  }
  if (bParam1)
  {
    if (PAD::IS_CONTROL_PRESSED(2, 201))
    {
      return 0;
    }
  }
  if (uParam0->f_1 == -1)
  {
    return 1;
  }
  if (func_44(&(uParam0->f_2)) * 1000f) > SYSTEM::TO_FLOAT(uParam0->f_1)
  {
    func_47(&(uParam0->f_2));
    return 0;
  }
  return 1;
}