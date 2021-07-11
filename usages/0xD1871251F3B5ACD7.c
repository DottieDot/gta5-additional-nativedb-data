// fm_mission_controller.c @ L671082
int func_10898(int iParam0)
{
  if (ENTITY::DOES_ENTITY_EXIST(iLocal_1073) && ENTITY::DOES_ENTITY_EXIST(iParam0))
  {
    if ((((PED::IS_PED_RAGDOLL(iLocal_1073) || PED::IS_PED_DEAD_OR_DYING(iLocal_1073, 1)) || PED::IS_PED_INJURED(iLocal_1073)) || FIRE::IS_ENTITY_ON_FIRE(iLocal_1073)) || !bLocal_1079)
    {
      return 1;
    }
    if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iParam0, iLocal_1073))
    {
      if (((PED::IS_PED_SWIMMING(iLocal_1073) || PED::IS_PED_DIVING(iLocal_1073)) || PED::IS_PED_RUNNING_MELEE_TASK(iLocal_1073)) || PED::IS_PED_IN_PARACHUTE_FREE_FALL(iLocal_1073))
      {
        return 1;
      }
    }
    else if (PED::IS_PED_ON_VEHICLE(iLocal_1073))
    {
      return 1;
    }
  }
  return 0;
}