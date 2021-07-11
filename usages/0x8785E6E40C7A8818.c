// re_bikethief.c @ L3724
void func_106()
{
  if (((((((((iLocal_73 < 5 && !func_25()) && func_64(iLocal_49)) && func_64(iLocal_50)) && func_73(iLocal_51)) && PED::IS_PED_IN_VEHICLE(iLocal_49, iLocal_51, 0)) && ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_49, 13f, 13f, 13f, 0, 1, 0)) && !ENTITY::IS_ENTITY_AT_ENTITY(iLocal_50, iLocal_49, 13f, 13f, 13f, 0, 1, 0)) && (MISC::GET_GAME_TIMER() - iLocal_74) > 15000) && func_2(&uLocal_82, "REBTHAU", sLocal_252, 4, 0, 0, 0))
  {
    if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_49, -1273030092) == 1 && !TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(iLocal_49))
    {
      TASK::TASK_DRIVE_BY(iLocal_49, PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 15f, 50, 1, -753768974);
    }
    iLocal_74 = MISC::GET_GAME_TIMER();
    iLocal_73++;
  }
}