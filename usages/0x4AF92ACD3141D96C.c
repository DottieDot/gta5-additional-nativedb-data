// appmedia.c @ L645
void func_26()
{
  if ((MISC::IS_XBOX360_VERSION() || MISC::IS_DURANGO_VERSION()) || MISC::IS_PC_VERSION())
  {
    GRAPHICS::_0x4AF92ACD3141D96C();
    if (GRAPHICS::_0x2A893980E96B659A(0))
    {
      iLocal_24 = 1;
    }
    else
    {
      Global_21842 = 1;
      Global_19486.f_1 = 3;
      func_11();
    }
  }
  else
  {
    func_3();
  }
}