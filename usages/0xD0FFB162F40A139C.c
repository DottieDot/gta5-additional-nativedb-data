// abigail2.c @ L36199
int func_282(int iParam0, int iParam1, float fParam2, int iParam3)
{
  vector3 vVar0;
  vector3 vVar1;
  float fVar2;
  
  vVar0 = { func_284(ENTITY::GET_ENTITY_COORDS(iParam1, true) - ENTITY::GET_ENTITY_COORDS(iParam0, true)) };
  if (fParam2 < 0.1f || fParam2 > 360f)
  {
    return 1;
  }
  if (iParam3 == 0)
  {
    vVar1 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
  }
  else
  {
    vVar1 = { func_284(PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 5f, 0f) - PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f)) };
  }
  fVar2 = func_283(vVar1, vVar0);
  if (fVar2 <= SYSTEM::COS((fParam2 / 2f)))
  {
    return 0;
  }
  return 1;
}