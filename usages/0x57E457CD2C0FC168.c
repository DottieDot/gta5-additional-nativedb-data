// am_ferriswheel.c @ L4032
void func_32()
{
  vector3 vVar0;
  
  if (VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(-1666.711f, -1127.518f, 12.6973f, 3f) && (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -1666.711f, -1127.518f, 12.6973f, 0.5f, 0.5f, 1f, false, true, 0) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -1666.383f, -1126.286f, 12.6973f, 0.5f, 0.5f, 1f, false, true, 0)))
  {
    if (!MISC::IS_BIT_SET(iLocal_369, 5))
    {
      if (((TASK::IS_PED_WALKING(PLAYER::PLAYER_PED_ID()) || TASK::IS_PED_RUNNING(PLAYER::PLAYER_PED_ID())) || TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID())) || TASK::IS_PED_STRAFING(PLAYER::PLAYER_PED_ID()))
      {
        func_5(&uLocal_373);
        MISC::SET_BIT(&iLocal_369, 5);
      }
    }
    else if (func_20(&uLocal_373, 2000, 0))
    {
      if (((TASK::IS_PED_WALKING(PLAYER::PLAYER_PED_ID()) || TASK::IS_PED_RUNNING(PLAYER::PLAYER_PED_ID())) || TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID())) || TASK::IS_PED_STRAFING(PLAYER::PLAYER_PED_ID()))
      {
        vVar0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
        ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), vVar0.x, vVar0.y, (vVar0.z + 2f), 1, false, 0, 1);
        MISC::CLEAR_BIT(&iLocal_369, 5);
      }
    }
  }
}