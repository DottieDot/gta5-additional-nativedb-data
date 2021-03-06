// am_mp_defunct_base.ysc @ L351382
void func_5387()
{
  if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
  {
    if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(func_900(2)))
    {
      if (!NETWORK::NETWORK_HAS_CONTROL_OF_DOOR(func_900(2)) && NETWORK::NETWORK_IS_DOOR_NETWORKED(func_900(2)))
      {
        NETWORK::NETWORK_REQUEST_CONTROL_OF_DOOR(func_900(2));
      }
      if (NETWORK::NETWORK_HAS_CONTROL_OF_DOOR(func_900(2)))
      {
        OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(func_900(2), 0, 0, 1);
        OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(func_900(2), 0f, 0, 1);
        OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_RATE(func_900(2), 30f, 0, 1);
        OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(func_900(2), 8.5f, 0, 1);
      }
    }
  }
}