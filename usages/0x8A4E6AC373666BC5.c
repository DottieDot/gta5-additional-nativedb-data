// josh2.c @ L42532
void func_374()
{
  if (func_32(iLocal_348))
  {
    if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_348))
    {
      if ((((PAD::IS_CONTROL_PRESSED(0, 71) || PAD::IS_CONTROL_PRESSED(0, 72)) || PAD::IS_CONTROL_PRESSED(0, 278)) || PAD::IS_CONTROL_PRESSED(0, 279)) || MISC::GET_GAME_TIMER() > iLocal_246 + 2500)
      {
        if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_348))
        {
          TASK::VEHICLE_WAYPOINT_PLAYBACK_PAUSE(iLocal_348);
        }
        ENTITY::SET_ENTITY_INVINCIBLE(iLocal_348, false);
        VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(iLocal_348, true);
        TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
        PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
      }
    }
  }
}