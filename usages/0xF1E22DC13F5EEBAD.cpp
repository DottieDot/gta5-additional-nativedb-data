// appcamera.ysc @ L7418
void func_72(float fParam0)
{
  fLocal_112 = (fLocal_112 + fParam0);
  if (fLocal_112 > 1f)
  {
    fLocal_112 = 1f;
  }
  else if (fLocal_112 < -1f)
  {
    fLocal_112 = -1f;
  }
  MOBILE::_0xF1E22DC13F5EEBAD(fLocal_112);
}