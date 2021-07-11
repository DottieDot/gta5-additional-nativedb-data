// achievement_controller.c @ L14600
float func_137(int iParam0, int iParam1, bool bParam2)
{
  float fVar0;
  float fVar1;
  
  if (bParam2)
  {
    return 0f;
  }
  if (iParam0 == iParam1)
  {
    return 100f;
  }
  fVar0 = (SYSTEM::TO_FLOAT(iParam0) / SYSTEM::TO_FLOAT(iParam1));
  fVar1 = ((50f * fVar0) + 50f);
  fVar1 = SYSTEM::TO_FLOAT(SYSTEM::CEIL(fVar1));
  if (fVar1 > 100f)
  {
    fVar1 = 100f;
  }
  return fVar1;
}