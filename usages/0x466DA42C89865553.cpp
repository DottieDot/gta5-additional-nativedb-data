// appcamera.ysc @ L7432
void func_73(float fParam0)
{
  fLocal_113 = (fLocal_113 + fParam0);
  if (fLocal_113 > 1f)
  {
    fLocal_113 = 1f;
  }
  else if (fLocal_113 < -1f)
  {
    fLocal_113 = -1f;
  }
  MOBILE::_0x466DA42C89865553(fLocal_113);
}