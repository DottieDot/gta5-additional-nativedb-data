// am_casino_peds.c @ L158108
int func_1525(int iParam0, int iParam1)
{
  if (iParam1 && (!ENTITY::DOES_ENTITY_EXIST(iParam0) || ENTITY::IS_ENTITY_DEAD(iParam0, 0)))
  {
    return 0;
  }
  if (TASK::GET_IS_TASK_ACTIVE(iParam0, 2))
  {
    return 1;
  }
  if (PED::GET_VEHICLE_PED_IS_TRYING_TO_ENTER(iParam0) != 0 || PED::GET_VEHICLE_PED_IS_ENTERING(iParam0) != 0)
  {
    return 1;
  }
  return 0;
}