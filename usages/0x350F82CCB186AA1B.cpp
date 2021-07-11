// maintransition.ysc @ L258410
void func_3144(bool bParam0)
{
  vector3 vVar0;
  
  vVar0 = { func_3145(16, -1) };
  if (bParam0)
  {
    func_3143(&vVar0, 500f);
  }
  func_3219(vVar0, func_79(108, -1), 1120403456, 1, 0, 0, 1, 1115815936, 1, 0, 0, 1, -1082130432);
}

Vector3 func_3145(int iParam0, int iParam1)
{
  var uVar0;
  vector3 vVar1;
  
  uVar0 = Global_2577752[iParam0 /*3*/][func_49(iParam1)];
  if (STATS::STAT_GET_POS(uVar0, &vVar1, &(vVar1.f_1), &(vVar1.f_2), -1))
  {
    return vVar1;
  }
  return 0f, 0f, 0f;
}