// re_duel.ysc @ L4638
void func_74(int iParam0, vector3 vParam1)
{
  if (func_225(iParam0))
  {
    ENTITY::FREEZE_ENTITY_POSITION(iParam0, false);
    MISC::CLEAR_AREA_OF_PEDS(vParam1, 1.5f, 0);
    MISC::CLEAR_AREA_OF_VEHICLES(vParam1, 3f, 0, 0, 0, 0, false, 0);
    ENTITY::SET_ENTITY_COORDS(iParam0, vParam1, 1, false, 0, 1);
    VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iParam0, 1084227584);
    ENTITY::SET_ENTITY_HEADING(iParam0, func_75(ENTITY::GET_ENTITY_COORDS(iParam0, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)));
    if (func_225(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, 0)))
    {
      if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
      {
        TASK::TASK_VEHICLE_CHASE(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, 0), PLAYER::PLAYER_PED_ID());
      }
      else
      {
        TASK::TASK_VEHICLE_MISSION_PED_TARGET(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, 0), iParam0, PLAYER::PLAYER_PED_ID(), 2, 100f, 786469, -1f, -1f, 1);
      }
    }
    VEHICLE::SET_VEHICLE_FORWARD_SPEED(iParam0, (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) * 1.2f));
  }
}