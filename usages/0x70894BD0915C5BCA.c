// fbi2.c @ L132951
void func_766(bool bParam0, bool bParam1)
{
  int iVar0;
  
  iVar0 = func_700();
  if (!PED::IS_PED_INJURED(iVar0))
  {
    WEAPON::SET_CURRENT_PED_WEAPON(iVar0, func_702(4), true);
  }
  if (!bParam1)
  {
    CAM::SET_FIRST_PERSON_AIM_CAM_ZOOM_FACTOR(3f);
    CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-2.7f, 1065353216);
    if (bParam0)
    {
      CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0.3f);
    }
    else
    {
      CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
    }
  }
  else
  {
    CAM::SET_FIRST_PERSON_AIM_CAM_ZOOM_FACTOR(1f);
    CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(4f, 1065353216);
    CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
  }
}