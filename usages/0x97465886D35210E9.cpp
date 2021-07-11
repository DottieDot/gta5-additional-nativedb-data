// assassin_valet.ysc @ L6088
void func_129(int iParam0, vector3 vParam1)
{
  if (!iLocal_959)
  {
    if (!PED::IS_PED_INJURED(iParam0))
    {
      if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_938, iParam0, vParam1, 0, 1, 0))
      {
        if (PED::IS_PED_FACING_PED(iParam0, iLocal_938, 160f))
        {
          if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, iLocal_938, 17))
          {
            TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(iParam0, iLocal_938, iLocal_938, 1f, 0, -1f, 1082130432, 1, 0, -957453492);
            iLocal_937 = 5;
            iLocal_959 = 1;
          }
        }
      }
      else if (!PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0))
      {
        if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, -1207174364) != 1)
        {
          TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(iParam0, iLocal_938, iLocal_938, 1f, 0, -1f, 1082130432, 1, 0, -957453492);
        }
      }
    }
  }
}