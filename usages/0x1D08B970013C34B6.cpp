// am_mp_bunker.ysc @ L308518
bool func_4531(vector3 vParam0, float fParam1, vector3 vParam2, float fParam3)
{
  vector3 vVar0;
  float fVar1;
  
  vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(0f, 0f, 0f, fParam1, 0f, 1f, 0f) };
  fVar1 = func_3020(func_3021(vVar0), func_3021(vParam2 - vParam0));
  return MISC::ACOS(fVar1) <= fParam3;
}