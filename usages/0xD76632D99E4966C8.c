// nigel1c.c @ L32855
void func_243()
{
  if (func_283(Local_421[4 /*16*/]) && func_283(iLocal_423))
  {
    if (Local_421[4 /*16*/].f_13 == 0)
    {
      if (ENTITY::IS_ENTITY_AT_ENTITY(Local_421[4 /*16*/], iLocal_423, 2.5f, 2.5f, 2f, 0, 1, 0))
      {
        TASK::CLEAR_PED_TASKS(Local_421[4 /*16*/]);
        PED::SET_PED_TO_RAGDOLL_WITH_FALL(Local_421[4 /*16*/], 1500, 2000, 1, -ENTITY::GET_ENTITY_FORWARD_VECTOR(Local_421[4 /*16*/]), 1f, 0f, 0f, 0f, 0f, 0f, 0f);
        TASK::OPEN_SEQUENCE_TASK(&iLocal_617);
        TASK::TASK_LOOK_AT_ENTITY(0, iLocal_423, -1, 0, 2);
        TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -631.84f, -153.48f, 36.83f, 1f, 20000, 1048576000, 0, 1193033728);
        TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_423, 0);
        TASK::TASK_PAUSE(0, 1500);
        TASK::TASK_WANDER_STANDARD(0, 1193033728, 0);
        TASK::CLOSE_SEQUENCE_TASK(iLocal_617);
        TASK::TASK_PERFORM_SEQUENCE(Local_421[4 /*16*/], iLocal_617);
        TASK::CLEAR_SEQUENCE_TASK(&iLocal_617);
        Local_421[4 /*16*/].f_13 = 1;
      }
    }
  }
}