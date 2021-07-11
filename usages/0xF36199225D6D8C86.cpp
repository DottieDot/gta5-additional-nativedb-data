// main_persistent.ysc @ L78021
int func_462(bool bParam0)
{
  if (bParam0)
  {
    Global_2449755.f_6319 = (Global_2449755.f_6319 + 0.01f);
  }
  else
  {
    Global_2449755.f_6319 = (Global_2449755.f_6319 - 0.01f);
  }
  if (Global_2449755.f_6319 > 1f)
  {
    Global_2449755.f_6319 = 1f;
  }
  if (Global_2449755.f_6319 < 0f)
  {
    Global_2449755.f_6319 = 0f;
  }
  MISC::_SET_CLOUD_HAT_OPACITY(Global_2449755.f_6319);
  if (bParam0)
  {
    if (Global_2449755.f_6319 >= 1f)
    {
      return 1;
    }
  }
  else if (Global_2449755.f_6319 <= 0f)
  {
    return 1;
  }
  return 0;
}