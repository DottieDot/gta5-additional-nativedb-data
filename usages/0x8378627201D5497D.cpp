// chinese1.ysc @ L116779
void func_694(int iParam0, int iParam1, float fParam2, float fParam3)
{
  if (func_695(iParam0))
  {
    WEAPON::SET_PED_CHANCE_OF_FIRING_BLANKS(iParam0, fParam2, fParam3);
    PED::SET_PED_ACCURACY(iParam0, iParam1);
  }
}