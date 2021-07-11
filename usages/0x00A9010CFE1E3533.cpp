// ambient_tonyacall.ysc @ L446
void func_2()
{
  if (ENTITY::DOES_ENTITY_EXIST(iLocal_38) && !ENTITY::IS_ENTITY_DEAD(iLocal_38, 0))
  {
    if (TASK::GET_SEQUENCE_PROGRESS(iLocal_38) == 1)
    {
      if (ENTITY::DOES_ENTITY_EXIST(iLocal_39))
      {
        OBJECT::DELETE_OBJECT(&iLocal_39);
        TASK::TASK_LOOK_AT_ENTITY(iLocal_38, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
      }
    }
  }
  if (ENTITY::DOES_ENTITY_EXIST(iLocal_38) && !ENTITY::IS_ENTITY_DEAD(iLocal_38, 0))
  {
    if (ENTITY::DOES_ENTITY_EXIST(iLocal_39))
    {
      if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_38, 993674639) == 1)
      {
        OBJECT::DELETE_OBJECT(&iLocal_39);
      }
    }
  }
}