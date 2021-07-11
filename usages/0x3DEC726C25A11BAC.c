// cellphone_controller.c @ L652
void func_5()
{
  Global_21845 = -1;
  if (Global_76577)
  {
    if (func_6())
    {
      GRAPHICS::_0xF3F776ADA161E47D(Global_4456448.f_184556, Global_4456448.f_184556.f_1);
    }
  }
  if (GRAPHICS::SAVE_HIGH_QUALITY_PHOTO(Global_21845))
  {
    Global_21840 = 10;
    HUD::BEGIN_TEXT_COMMAND_BUSYSPINNER_ON("CELL_278");
    HUD::END_TEXT_COMMAND_BUSYSPINNER_ON(1);
  }
  else
  {
    func_13();
  }
}