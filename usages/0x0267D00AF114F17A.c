// agency_heist2.c @ L20301
void func_332()
{
  if ((MISC::GET_GAME_TIMER() - iLocal_137) > 500)
  {
    if ((ENTITY::DOES_ENTITY_EXIST(iLocal_77) && !PED::IS_PED_INJURED(iLocal_77)) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
    {
      bLocal_136 = (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(iLocal_77, PLAYER::PLAYER_PED_ID()) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_77, true)) < 100f);
      iLocal_137 = MISC::GET_GAME_TIMER();
    }
  }
}