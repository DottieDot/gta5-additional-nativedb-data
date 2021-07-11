// nigel1c.ysc @ L31909
int func_224(float fParam0)
{
  vector3 vVar0;
  
  if (func_283(PLAYER::PLAYER_PED_ID()) && func_283(iLocal_423))
  {
    if (((((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || TASK::IS_PED_GETTING_UP(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_PRONE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_JUMPING(PLAYER::PLAYER_PED_ID()))
    {
      return 0;
    }
    if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_423, vLocal_662, vLocal_663, fLocal_664, 0, true, 0) && func_225(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_423, 0f, 1f, 0f), 1.5f)) && !ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(iLocal_423))
    {
      PED::SET_PED_TO_RAGDOLL(PLAYER::PLAYER_PED_ID(), 500, 1000, 0, 0, 0, 0);
      PED::SET_PED_RAGDOLL_FORCE_FALL(PLAYER::PLAYER_PED_ID());
      func_2(&uLocal_452, "NIG1CAU", "NIG1C_CLOSE", 7, func_25(), 0, 0);
      return 0;
    }
    if (func_27(iLocal_423, PLAYER::PLAYER_PED_ID(), (0.8f + fParam0), 1))
    {
      vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(iLocal_423, true)) };
      if (vVar0.y > 0f && vVar0.z < 0.1f)
      {
        return 1;
      }
    }
  }
  return 0;
}