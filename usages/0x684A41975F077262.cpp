// freemode.ysc @ L847351
var func_12181(var uParam0)
{
  if (MISC::_IS_IN_POWER_SAVING_MODE())
  {
    *uParam0 = MISC::_GET_POWER_SAVING_MODE_DURATION();
  }
  else
  {
    *uParam0 = -1;
  }
  return *uParam0;
}