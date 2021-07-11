// am_mp_defunct_base.ysc @ L351363
void func_5385(int iParam0)
{
  if (func_900(iParam0) != 0)
  {
    if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(func_900(iParam0)))
    {
      OBJECT::ADD_DOOR_TO_SYSTEM(func_900(iParam0), func_914(iParam0), func_913(iParam0), 0, 0, 0);
      NETWORK::NETWORK_REQUEST_CONTROL_OF_DOOR(func_900(iParam0));
    }
  }
}