// appcamera.ysc @ L9464
void func_112(bool bParam0)
{
  if (func_158())
  {
    if (bParam0)
    {
      if (!GRAPHICS::_0xBCEDB009461DA156())
      {
        GRAPHICS::_0x7AC24EAB6D74118D(1);
        if (Global_4268340 > 0 && Global_4268340 < 99)
        {
          GRAPHICS::_0x27FEB5254759CDE3(sLocal_20[Global_4268340], 0);
          MOBILE::_0x1B0B4AEED5B9B41C(0.25f);
        }
      }
    }
    else if (GRAPHICS::_0xBCEDB009461DA156())
    {
      GRAPHICS::_0x7AC24EAB6D74118D(0);
    }
  }
}