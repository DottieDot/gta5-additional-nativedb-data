// agency_prep2amb.ysc @ L10683
int func_217(int iParam0)
{
  int iVar0;
  
  iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
  if (!func_218(iVar0))
  {
    if (VEHICLE::GET_VEHICLE_MODEL_ACCELERATION(iVar0) > 0.165f && VEHICLE::GET_VEHICLE_MODEL_ESTIMATED_MAX_SPEED(iVar0) > 31f)
    {
      return 1;
    }
  }
  func_69(14);
  return 0;
}