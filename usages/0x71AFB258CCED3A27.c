// freemode.c @ L846314
char* func_12137(var uParam0)
{
  if (!VEHICLE::_GET_DOES_VEHICLE_HAVE_TOMBSTONE(func_12139()))
  {
    return "";
  }
  if ((func_12138(uParam0, joaat("dominator4"), 6, -1) || func_12138(uParam0, joaat("dominator5"), 6, -1)) || func_12138(uParam0, joaat("dominator6"), 6, -1))
  {
    if (PAD::_IS_INPUT_DISABLED(0))
    {
      return "AVMH_TOMBSTONE_PC";
    }
    return "AVMH_TOMBSTONE";
  }
  return "";
}