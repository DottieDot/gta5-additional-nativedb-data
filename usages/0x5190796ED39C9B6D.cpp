// rural_bank_heist.ysc @ L108888
void func_587()
{
  if ((MISC::GET_GAME_TIMER() - iLocal_1257) > 10000)
  {
    if (!PED::IS_PED_INJURED(Local_669.f_1))
    {
      if (!ENTITY::IS_ENTITY_DEAD(iLocal_626, 0))
      {
        PED::SET_PED_FIRING_PATTERN(Local_669.f_1, 1566631136);
        TASK::TASK_VEHICLE_SHOOT_AT_COORD(Local_669.f_1, ENTITY::GET_ENTITY_COORDS(iLocal_626, true), 1101004800);
        ENTITY::SET_ENTITY_PROOFS(iLocal_626, false, false, false, false, false, false, 0, false);
        ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_626);
        STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("bulldozer"));
        iLocal_1257 = MISC::GET_GAME_TIMER();
      }
      else
      {
        PED::SET_PED_FIRING_PATTERN(Local_669.f_1, 1566631136);
        TASK::TASK_VEHICLE_SHOOT_AT_PED(Local_669.f_1, PLAYER::PLAYER_PED_ID(), 1101004800);
        iLocal_1257 = MISC::GET_GAME_TIMER();
      }
    }
  }
}