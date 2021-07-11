// josh3.c @ L43477
void func_427()
{
  if (((func_16(iLocal_395) && PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_397)) && !PED::IS_SYNCHRONIZED_SCENE_LOOPED(iLocal_397)) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_397) > 0.99f)
  {
    iLocal_397 = PED::CREATE_SYNCHRONIZED_SCENE(vLocal_398, vLocal_399, 2);
    PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_397, true);
    TASK::TASK_SYNCHRONIZED_SCENE(iLocal_395, iLocal_397, "rcmjosh3", "josh3_leadout_loop", 8f, -8f, 21, 0, 1148846080, 0);
    TASK::TASK_LOOK_AT_ENTITY(iLocal_395, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
  }
}