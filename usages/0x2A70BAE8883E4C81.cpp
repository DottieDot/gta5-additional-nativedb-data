// act_cinema.ysc @ L3534
int func_72(vector3 vParam0, int iParam1, float fParam2)
{
  vector3 vVar0;
  vector3 vVar1;
  float fVar2;
  
  if (func_70(iParam1))
  {
    func_73(iParam1, &vVar0, &vVar1, &fVar2, fParam2);
    return OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, vVar0, vVar1, fVar2, 0, true);
  }
  return 0;
}