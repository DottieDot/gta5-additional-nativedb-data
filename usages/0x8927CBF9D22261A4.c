// agency_heist1.c @ L117589
float func_695(vector3 vParam0, vector3 vParam1)
{
  float fVar0;
  
  vParam0 = { func_696(vParam0) };
  vParam1 = { func_696(vParam1) };
  fVar0 = (MISC::ATAN2(vParam1.y, vParam1.x) - MISC::ATAN2(vParam0.y, vParam0.x));
  if (fVar0 > 180f)
  {
    fVar0 = (fVar0 - 360f);
  }
  else if (fVar0 < -180f)
  {
    fVar0 = (fVar0 + 360f);
  }
  return fVar0;
}