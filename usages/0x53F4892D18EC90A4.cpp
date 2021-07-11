// appcamera.ysc @ L7608
void func_78(float fParam0)
{
  fLocal_107 = (fLocal_107 + fParam0);
  if (fLocal_107 > 2f)
  {
    fLocal_107 = 2f;
  }
  else if (fLocal_107 < -1.7f)
  {
    fLocal_107 = -1.7f;
  }
  MOBILE::_0x53F4892D18EC90A4(fLocal_107);
}