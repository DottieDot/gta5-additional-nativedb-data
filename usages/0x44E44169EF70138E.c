// appcamera.c @ L1043
void func_1(int iParam0)
{
  if (func_2())
  {
    if (iParam0 == 1)
    {
      MOBILE::_CELL_CAM_SET_LEAN(1);
    }
    else if (Global_19486.f_1 > 3)
    {
      MOBILE::_CELL_CAM_SET_LEAN(0);
    }
  }
}