// chop.ysc @ L3779
void func_56()
{
  if (((iLocal_385 == 1 && func_125(VEHICLE::GET_LAST_DRIVEN_VEHICLE())) && VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(VEHICLE::GET_LAST_DRIVEN_VEHICLE()) > 1) && !VEHICLE::IS_VEHICLE_DOOR_DAMAGED(VEHICLE::GET_LAST_DRIVEN_VEHICLE(), iLocal_94))
  {
    VEHICLE::SET_VEHICLE_DOOR_LATCHED(VEHICLE::GET_LAST_DRIVEN_VEHICLE(), iLocal_94, 0, 1, 0);
  }
}