// appcamera.c @ L7580
void func_76(float fParam0)
{
  fLocal_110 = (fLocal_110 + fParam0);
  if (fLocal_110 > 1f)
  {
    fLocal_110 = 1f;
  }
  else if (fLocal_110 < -1f)
  {
    fLocal_110 = -1f;
  }
  MOBILE::_0x15E69E2802C24B8D(fLocal_110);
}