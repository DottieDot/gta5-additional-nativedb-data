// freemode.c @ L154107
void func_1864(var uParam0, int iParam1)
{
  if (uParam0->f_2047[iParam1])
  {
    if (WEAPON::_REMOVE_AIR_DEFENSE_ZONE(uParam0->f_2160[iParam1]))
    {
    }
    uParam0->f_2047[iParam1] = 0;
    uParam0->f_2160[iParam1] = 0;
  }
}