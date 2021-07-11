// abigail2.c @ L36226
float func_283(vector3 vParam0, vector3 vParam1)
{
  return (((vParam0.x * vParam1.x) + (vParam0.y * vParam1.y)) + (vParam0.z * vParam1.z));
}

Vector3 func_284(vector3 vParam0)
{
  float fVar0;
  float fVar1;
  
  fVar0 = SYSTEM::VMAG(vParam0);
  if (fVar0 != 0f)
  {
    fVar1 = (1f / fVar0);
    vParam0 = { vParam0 * Vector(fVar1, fVar1, fVar1) };
  }
  else
  {
    vParam0.x = 0f;
    vParam0.y = 0f;
    vParam0.z = 0f;
  }
  return vParam0;
}