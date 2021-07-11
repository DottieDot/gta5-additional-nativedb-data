// chop.ysc @ L7378
int func_107()
{
  if ((TASK::GET_SCRIPT_TASK_STATUS(iLocal_69, 242628503) == 7 || PED::IS_PED_RAGDOLL(iLocal_69)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(iLocal_69))
  {
    WEAPON::CLEAR_PED_LAST_WEAPON_DAMAGE(iLocal_69);
    return 1;
  }
  return 0;
}