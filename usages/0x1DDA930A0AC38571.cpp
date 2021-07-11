// chop.ysc @ L2209
void func_20()
{
  if (!func_113(iLocal_69, 242628503))
  {
    STREAMING::REQUEST_ANIM_DICT("creatures@rottweiler@indication@");
    if (STREAMING::HAS_ANIM_DICT_LOADED("creatures@rottweiler@indication@"))
    {
      TASK::CLEAR_PED_TASKS(iLocal_69);
      TASK::OPEN_SEQUENCE_TASK(&iLocal_95);
      TASK::TASK_TURN_PED_TO_FACE_COORD(0, vLocal_322, 0);
      TASK::TASK_PLAY_ANIM(0, "creatures@rottweiler@indication@", func_21(), 8f, -4f, -1, 1, 0, 0, 0, 0);
      TASK::CLOSE_SEQUENCE_TASK(iLocal_95);
      TASK::TASK_PERFORM_SEQUENCE(iLocal_69, iLocal_95);
      TASK::CLEAR_SEQUENCE_TASK(&iLocal_95);
    }
  }
}