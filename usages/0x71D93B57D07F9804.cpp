// act_cinema.ysc @ L4176
float func_104(int iParam0, float fParam1)
{
  vector3 vVar0;
  vector3 vVar1;
  vector3 vVar2;
  float fVar3;
  
  if (iParam0 == 0)
  {
    return 5f;
  }
  func_84(iParam0, &vVar0, &vVar1, 1086324736, 1080033280, 1077936128);
  vVar2 = { vVar1 - vVar0 };
  fVar3 = (SYSTEM::SQRT(((((vVar2.x * 0.5f) * (vVar2.x * 0.5f)) + ((vVar2.y * 0.5f) * (vVar2.y * 0.5f))) + ((vVar2.z * 0.5f) * (vVar2.z * 0.5f)))) + fParam1);
  return fVar3;
}