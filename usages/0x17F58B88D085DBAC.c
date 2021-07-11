// jewelry_heist.c @ L131605
int func_949(int iParam0, vector3 vParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
  vector3 vVar0;
  vector3 vVar1;
  
  vVar0.x = fParam2;
  vVar1 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) + Vector(-1f, 0f, 0f) };
  if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
  {
    if (!func_907(iParam0, 242628503))
    {
      ENTITY::FREEZE_ENTITY_POSITION(iParam0, false);
      TASK::OPEN_SEQUENCE_TASK(&iLocal_480);
      TASK::TASK_FOLLOW_NAV_MESH_TO_COORD_ADVANCED(0, vParam1, fParam3, 40000, fParam4, 2, vVar0, 1193033728);
      TASK::CLOSE_SEQUENCE_TASK(iLocal_480);
      TASK::TASK_PERFORM_SEQUENCE(iParam0, iLocal_480);
      TASK::CLEAR_SEQUENCE_TASK(&iLocal_480);
    }
    else if (MISC::GET_DISTANCE_BETWEEN_COORDS(vVar1, vParam1, true) < fParam4 && func_950(iParam0, fParam2, fParam5))
    {
      return 1;
    }
  }
  return 0;
}