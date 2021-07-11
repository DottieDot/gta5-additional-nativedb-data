// agency_prep2amb.ysc @ L8888
int func_172(int iParam0)
{
  if (!DECORATOR::DECOR_EXIST_ON(iParam0, "IgnoredByQuickSave"))
  {
    if (DECORATOR::DECOR_SET_BOOL(iParam0, "IgnoredByQuickSave", 1))
    {
      return 1;
    }
  }
  else
  {
    return 1;
  }
  return 0;
}