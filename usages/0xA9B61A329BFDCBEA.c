// re_prison.c @ L2711
void func_67()
{
  int iVar0;
  
  iVar0 = 0;
  while (iVar0 < 3)
  {
    if (ENTITY::DOES_ENTITY_EXIST(Local_307.f_27[iVar0]) && !ENTITY::IS_ENTITY_DEAD(Local_307.f_27[iVar0], 0))
    {
      WEAPON::GIVE_WEAPON_TO_PED(Local_307.f_27[iVar0], joaat("WEAPON_ASSAULTRIFLE"), -1, true, true);
      ENTITY::SET_ENTITY_LOD_DIST(Local_307.f_27[iVar0], 1000);
      PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_307.f_27[iVar0], -183807561);
      PED::_0xA9B61A329BFDCBEA(Local_307.f_27[iVar0], false);
      PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_307.f_27[iVar0], true);
      if (!PED::IS_PED_INJURED(Local_307.f_27[iVar0]))
      {
        TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Local_307.f_27[iVar0], Local_307.f_14[iVar0], 0, 0, -1);
      }
    }
    iVar0++;
  }
}