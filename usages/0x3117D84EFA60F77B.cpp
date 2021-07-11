// appcamera.ysc @ L7594
void func_77(float fParam0)
{
  fLocal_108 = (fLocal_108 + fParam0);
  if (fLocal_108 > 1.5f)
  {
    fLocal_108 = 1.5f;
  }
  else if (fLocal_108 < 0.5f)
  {
    fLocal_108 = 0.5f;
  }
  MOBILE::_0x3117D84EFA60F77B(fLocal_108);
}