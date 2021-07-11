// freemode.c @ L421054
void func_6260(int iParam0, vector3 vParam1, int iParam2)
{
  var uVar0;
  
  uVar0 = Global_2577752[iParam0 /*3*/][func_556(iParam2)];
  STATS::STAT_SET_POS(uVar0, vParam1.x, vParam1.y, vParam1.z, 1);
}