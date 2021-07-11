// pb_prostitute.c @ L2963
void func_64(bool bParam0)
{
  vector3 vVar0;
  
  if (((TASK::PED_HAS_USE_SCENARIO_TASK(iLocal_90) || TASK::IS_PED_ACTIVE_IN_SCENARIO(iLocal_90)) || PED::IS_PED_USING_SCENARIO(iLocal_90, func_65(0))) || PED::IS_PED_USING_SCENARIO(iLocal_90, func_65(1)))
  {
    return;
  }
  vVar0 = { ENTITY::GET_ENTITY_COORDS(iLocal_90, true) };
  if (!TASK::DOES_SCENARIO_OF_TYPE_EXIST_IN_AREA(vVar0, func_65(0), 20f, 1) && !TASK::DOES_SCENARIO_OF_TYPE_EXIST_IN_AREA(vVar0, func_65(1), 20f, 1))
  {
    if (bParam0)
    {
      TASK::TASK_WANDER_STANDARD(0, 1193033728, 0);
    }
    else
    {
      TASK::TASK_WANDER_STANDARD(iLocal_90, 1193033728, 0);
    }
    return;
  }
  if (!bParam0)
  {
    TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(iLocal_90, vVar0, 20f, 0);
  }
  else
  {
    TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(0, vVar0, 20f, 0);
  }
}