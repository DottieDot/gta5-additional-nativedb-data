// armenian1.c @ L52358
int func_496(int iParam0, int iParam1)
{
  vector3 vVar0;
  vector3 vVar1;
  float fVar2;
  
  if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
  {
    vVar0 = { ENTITY::GET_ENTITY_SPEED_VECTOR(iParam0, 0) };
  }
  else
  {
    return 0;
  }
  if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0))
  {
    vVar1 = { ENTITY::GET_ENTITY_SPEED_VECTOR(iParam1, 0) };
  }
  else
  {
    return 0;
  }
  vVar0.z = 0f;
  vVar1.z = 0f;
  fVar2 = func_484(vVar0, vVar1);
  if (fVar2 < 0f)
  {
    return 0;
  }
  return 1;
}