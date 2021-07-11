// exile1.c @ L132401
void func_937()
{
  int iVar0;
  
  if (func_12() == 0)
  {
    iVar0 = PLAYER::PLAYER_PED_ID();
  }
  else
  {
    iVar0 = uLocal_77[0];
  }
  if (ENTITY::DOES_ENTITY_EXIST(iVar0))
  {
    if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0))
    {
      if (!PED::IS_PED_INJURED(iVar0))
      {
        iLocal_1935 = PED::CREATE_SYNCHRONIZED_SCENE(vLocal_1938, vLocal_1939, 2);
        ENTITY::FREEZE_ENTITY_POSITION(iVar0, false);
        ENTITY::SET_ENTITY_COLLISION(iVar0, false, 0);
        PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
        TASK::CLEAR_PED_TASKS(iVar0);
        TASK::TASK_SYNCHRONIZED_SCENE(iVar0, iLocal_1935, sLocal_1930, "Michael_inTrailer", 1000f, -1000f, 4, 0, 1148846080, 1);
        PED::_0x2208438012482A1A(iVar0, 0, 0);
        PED::SET_SYNCHRONIZED_SCENE_RATE(iLocal_1935, 1f);
      }
    }
  }
}