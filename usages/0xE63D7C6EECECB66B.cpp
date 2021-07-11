// main.ysc @ L107258
void func_560(int iParam0)
{
  if (iParam0 == 1)
  {
    if (!MISC::IS_BIT_SET(Global_98669.f_20, 18))
    {
      GRAPHICS::_0xE63D7C6EECECB66B(0);
      MISC::SET_BIT(&(Global_98669.f_20), 18);
    }
  }
  else if (MISC::IS_BIT_SET(Global_98669.f_20, 18))
  {
    GRAPHICS::_0xE63D7C6EECECB66B(1);
    MISC::CLEAR_BIT(&(Global_98669.f_20), 18);
  }
}