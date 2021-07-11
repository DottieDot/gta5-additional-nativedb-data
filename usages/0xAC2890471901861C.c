// appcamera.c @ L7566
void func_75(float fParam0)
{
  fLocal_109 = (fLocal_109 + fParam0);
  if (fLocal_109 > 1f)
  {
    fLocal_109 = 1f;
  }
  else if (fLocal_109 < 0f)
  {
    fLocal_109 = 0f;
  }
  MOBILE::_0xAC2890471901861C(fLocal_109);
}