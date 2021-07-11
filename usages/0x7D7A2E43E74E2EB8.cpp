// mission_triggerer_a.ysc @ L4289
void func_58()
{
  int iVar0;
  
  iVar0 = 0;
  while (iVar0 < 18)
  {
    if (ENTITY::DOES_ENTITY_EXIST(Global_95196.f_9[iVar0]))
    {
      if (!PED::IS_PED_INJURED(Global_95196.f_9[iVar0]))
      {
        if (!PED::IS_PED_TRACKED(Global_95196.f_9[iVar0]))
        {
          PED::REQUEST_PED_VISIBILITY_TRACKING(Global_95196.f_9[iVar0]);
        }
      }
    }
    iVar0++;
  }
}