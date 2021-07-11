// agency_heist3a.ysc @ L132945
int func_922(int iParam0, float fParam1, float fParam2)
{
  float fVar0;
  
  fVar0 = (fParam1 - ENTITY::GET_ENTITY_HEADING(iParam0));
  if (fVar0 > 180f)
  {
    fVar0 = (fVar0 - 360f);
  }
  if (fVar0 < -180f)
  {
    fVar0 = (fVar0 + 360f);
  }
  if (MISC::ABSF(fVar0) <= fParam2)
  {
    return 1;
  }
  return 0;
}