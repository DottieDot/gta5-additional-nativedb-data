// appcamera.ysc @ L7404
void func_71(float fParam0)
{
  fLocal_111 = (fLocal_111 + fParam0);
  if (fLocal_111 > 1f)
  {
    fLocal_111 = 1f;
  }
  else if (fLocal_111 < -1f)
  {
    fLocal_111 = -1f;
  }
  MOBILE::_0xD6ADE981781FCA09(fLocal_111);
}