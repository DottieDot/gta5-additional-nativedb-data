// business_battles.c @ L238028
void func_3661(int iParam0)
{
  vector3 vVar0;
  vector3 vVar1;
  
  if (!ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "mini@safe_cracking", "dial_turn_anti_fast", 3))
  {
    vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, vLocal_230) };
    vVar1 = { 0f, 0f, ENTITY::GET_ENTITY_HEADING(iParam0) };
    TASK::TASK_PLAY_ANIM_ADVANCED(PLAYER::PLAYER_PED_ID(), "mini@safe_cracking", "dial_turn_anti_fast", vVar0, vVar1, 4f, 0.1f, -1, 1835009, 0, 2, 0);
  }
}