// carsteal3.c @ L115933
void func_660(int iParam0, vector3 vParam1, float fParam2)
{
  if (*iParam0 == -1)
  {
    *iParam0 = GRAPHICS::CREATE_TRACKED_POINT();
    GRAPHICS::SET_TRACKED_POINT_INFO(*iParam0, vParam1, fParam2);
  }
}