// fm_race_creator.c @ L430991
float func_6933(int iParam0)
{
  float fVar0;
  
  fVar0 = (WEAPON::GET_MAX_RANGE_OF_CURRENT_PED_WEAPON(iParam0) * 2.5f);
  if (fVar0 > 400f)
  {
    fVar0 = 400f;
  }
  return fVar0;
}