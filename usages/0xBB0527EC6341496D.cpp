// main.ysc @ L379
void func_2(var uParam0)
{
  func_36();
  func_20();
  func_8(&(uParam0->f_1), &(uParam0->f_2));
  if (func_7())
  {
    if (GRAPHICS::_GET_EXTRA_TIMECYCLE_MODIFIER_INDEX() == -1)
    {
      func_5(1, uParam0);
      func_3();
    }
    else
    {
      func_3();
    }
  }
  else if (GRAPHICS::_GET_EXTRA_TIMECYCLE_MODIFIER_INDEX() != -1)
  {
    func_5(0, uParam0);
  }
}