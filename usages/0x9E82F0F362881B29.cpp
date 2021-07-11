// am_casino_peds.ysc @ L240618
int func_2565(int iParam0, vector3 vParam1, var uParam2)
{
  float fVar0;
  vector3 vVar1;
  
  MISC::_GET_GROUND_Z_FOR_3D_COORD_2(ENTITY::GET_ENTITY_COORDS(iParam0, true), &fVar0, 0, 0);
  vVar1 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
  MISC::_GET_GROUND_Z_FOR_3D_COORD_2(vParam1, uParam2, 0, 0);
  *uParam2 = (*uParam2 + ((vVar1.z - fVar0) + 0.5f));
  return 1;
}