// fm_race_creator.ysc @ L224852
void func_2273(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6)
{
  if (iParam0 == PLAYER::PLAYER_ID())
  {
    if ((iParam1 != func_31() && func_846(iParam0, 1)) && !func_2031(iParam0, iParam1))
    {
      STATS::_0x27AA1C973CACFE63(func_1991(func_851(iParam0)), func_1990(func_851(iParam0)), Global_1628955[iParam1 /*614*/].f_548, Global_1628955[iParam1 /*614*/].f_549, uParam2, iParam5, iParam6, uParam3, uParam4, func_1460(iParam1) == 178);
    }
  }
}