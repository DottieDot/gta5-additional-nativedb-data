// extreme2.c @ L107773
void func_626(vector3 vParam0)
{
  vector3 vVar0;
  vector3 vVar1;
  
  iLocal_98 = MISC::GET_GAME_TIMER();
  if (func_851(PLAYER::PLAYER_PED_ID()) && func_444(PLAYER::PLAYER_PED_ID(), vParam0, 4f))
  {
    if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
    {
      PED::KNOCK_PED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID());
    }
    else if (!PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_RUNNING_RAGDOLL_TASK(PLAYER::PLAYER_PED_ID()))
    {
      vVar0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
      vVar1 = { func_627(vParam0 - vVar0) };
      vVar1 = { vVar1 * Vector(15f, 15f, 15f) };
      PED::SET_PED_TO_RAGDOLL(PLAYER::PLAYER_PED_ID(), 0, 1000, 0, 0, 1, 0);
      ENTITY::APPLY_FORCE_TO_ENTITY(PLAYER::PLAYER_PED_ID(), 1, vVar1, 0f, 0f, 1f, 0, 0, 1, 1, 0, 1);
    }
  }
}