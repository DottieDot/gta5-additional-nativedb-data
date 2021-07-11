// appmpjoblistnew.c @ L283114
int func_3996()
{
  if (!Global_21865)
  {
    return 0;
  }
  if (Global_21863 != 2)
  {
    return 0;
  }
  if (HUD::THEFEED_GET_FIRST_VISIBLE_DELETE_REMAINING() < 0)
  {
    return 0;
  }
  if (func_3994(Global_21862))
  {
    return 1;
  }
  if (func_3992(Global_21862))
  {
    return 1;
  }
  if (func_3997(Global_21862))
  {
    return 1;
  }
  return 0;
}