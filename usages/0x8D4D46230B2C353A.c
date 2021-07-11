// drunk.c @ L5205
void func_174()
{
  int iVar0;
  int iVar1;
  int iVar2;
  
  if (ENTITY::IS_ENTITY_DEAD(Local_43.f_1, 0))
  {
    return;
  }
  iVar0 = Local_43.f_1;
  if (PED::IS_PED_IN_ANY_VEHICLE(Local_43.f_1, 0))
  {
    iVar1 = PED::GET_VEHICLE_PED_IS_IN(Local_43.f_1, 0);
    iVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar1, -1, 0);
    if (!Local_43.f_1 == iVar2)
    {
      return;
    }
    iVar0 = iVar1;
  }
  else if (!CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4 || !PLAYER::PLAYER_PED_ID() == Local_43.f_1)
  {
    return;
  }
  fLocal_49 = 0f;
  func_137(iVar0, 0f);
}