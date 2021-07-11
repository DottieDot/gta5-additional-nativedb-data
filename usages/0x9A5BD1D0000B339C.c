// am_mp_arena_box.c @ L82261
void func_404(var uParam0, int iParam1)
{
  if (MISC::IS_BIT_SET(uParam0->f_1, 16))
  {
    return;
  }
  if (func_388())
  {
    func_397(uParam0, 1);
    uParam0->f_27 = iParam1;
  }
  else
  {
    MONEY::_NETWORK_SPENT_SPIN_THE_WHEEL_PAYMENT(Global_262145.f_23550, 0, 1);
    Global_2508071 = 0;
  }
  HUD::HIDE_HUD_COMPONENT_THIS_FRAME(4);
  HUD::HIDE_HUD_COMPONENT_THIS_FRAME(5);
  HUD::HIDE_HUD_COMPONENT_THIS_FRAME(13);
  HUD::HIDE_HUD_COMPONENT_THIS_FRAME(3);
}