// abigail1.c @ L36732
void func_255(var uParam0, int iParam1)
{
  if (iParam1 <= 0)
  {
    return;
  }
  if (iParam1 > 2043 || iParam1 < 1979)
  {
    return;
  }
  *uParam0 = (*uParam0 - *uParam0 & 2080374784);
  if (iParam1 < 2011)
  {
    *uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((2011 - iParam1), 26));
    *uParam0 |= -2147483648;
  }
  else
  {
    *uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((iParam1 - 2011), 26));
    *uParam0 = (*uParam0 - *uParam0 & -2147483648);
  }
}