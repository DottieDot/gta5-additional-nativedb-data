// benchmark.c @ L589
int func_16()
{
  if (iLocal_101 == 1)
  {
    return 0;
  }
  if ((MISC::GET_GAME_TIMER() - iLocal_102) > iLocal_103)
  {
    return 1;
  }
  if (func_536(iLocal_97) && ENTITY::IS_ENTITY_TOUCHING_ENTITY(iLocal_77, iLocal_97))
  {
    VEHICLE::EXPLODE_VEHICLE(iLocal_97, 1, 0);
    return 1;
  }
  if (func_536(iLocal_91[0]) && ENTITY::IS_ENTITY_TOUCHING_ENTITY(iLocal_77, iLocal_91[0]))
  {
    VEHICLE::EXPLODE_VEHICLE(iLocal_91[0], 1, 0);
    return 1;
  }
  if ((CAM::DOES_CAM_EXIST(iLocal_99) && ENTITY::GET_ENTITY_SPEED(iLocal_77) < 1f) && func_17(iLocal_77, iLocal_97, 1) < 15f)
  {
    return 1;
  }
  if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_77) && VEHICLE::GET_POSITION_IN_RECORDING(iLocal_77) > 849f)
  {
    return 1;
  }
  return 0;
}