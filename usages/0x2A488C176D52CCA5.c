// abigail2.c @ L36284
bool func_288(int iParam0, int iParam1, float fParam2)
{
  vector3 vVar0;
  vector3 vVar1;
  
  vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
  vVar1 = { ENTITY::GET_ENTITY_COORDS(iParam1, true) - ENTITY::GET_ENTITY_COORDS(iParam0, true) };
  return (((vVar0.x * vVar1.x) + (vVar0.y * vVar1.y)) / SYSTEM::VDIST(vVar1, 0f, 0f, 0f)) > SYSTEM::COS(fParam2);
}