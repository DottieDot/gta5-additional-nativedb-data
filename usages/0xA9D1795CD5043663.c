// agency_heist2.c @ L3412
float func_67(vector3 vParam0, vector3 vParam1, float fParam2, bool bParam3)
{
  vector3 vVar0;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  vVar0 = { vParam1 - vParam0 };
  fVar1 = vVar0.z;
  fVar2 = SYSTEM::SQRT(((vVar0.x * vVar0.x) + (vVar0.y * vVar0.y)));
  fVar3 = ((((fParam2 * fParam2) * fParam2) * fParam2) - (fLocal_219 * ((fLocal_219 * (fVar2 * fVar2)) + ((2f * fVar1) * (fParam2 * fParam2)))));
  if (bParam3)
  {
    fVar4 = MISC::ATAN((((fParam2 * fParam2) - SYSTEM::SQRT(fVar3)) / (fLocal_219 * fVar2)));
  }
  else
  {
    fVar4 = MISC::ATAN((((fParam2 * fParam2) + SYSTEM::SQRT(fVar3)) / (fLocal_219 * fVar2)));
  }
  return fVar4;
}