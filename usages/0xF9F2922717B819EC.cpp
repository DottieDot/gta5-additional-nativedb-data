// am_challenges.ysc @ L10377
float func_306(int iParam0, float fParam1)
{
  float fVar0;
  vector3 vVar1;
  var uVar2;
  
  vVar1 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
  MISC::GET_GROUND_Z_FOR_3D_COORD(vVar1, fParam1, 1, 0);
  MISC::GET_GROUND_Z_FOR_3D_COORD(vVar1, &uVar2, 0, 0);
  if (STATS::_0xF9F2922717B819EC())
  {
    func_538(3);
    MISC::SET_BIT(&iLocal_142, 10);
    func_27(&uLocal_138, 0, 0);
  }
  else if (MISC::IS_BIT_SET(iLocal_142, 10))
  {
    if (func_1(&uLocal_138, 2000, 0))
    {
      MISC::CLEAR_BIT(&iLocal_142, 10);
    }
  }
  if (*fParam1 < 0f)
  {
    *fParam1 = 0f;
  }
  fVar0 = (vVar1.z - *fParam1);
  if (fVar0 < 0f)
  {
    fVar0 = (fVar0 * -1f);
  }
  return fVar0;
}