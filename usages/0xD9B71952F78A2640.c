// gb_ie_delivery_cutscene.c @ L268121
int func_3916(int iParam0, float fParam1, bool bParam2)
{
  if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iParam0))
  {
    if (!NETWORK::NETWORK_HAS_CONTROL_OF_DOOR(iParam0))
    {
      NETWORK::NETWORK_REQUEST_CONTROL_OF_DOOR(iParam0);
    }
    else
    {
      OBJECT::DOOR_SYSTEM_SET_HOLD_OPEN(iParam0, 0);
      OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, fParam1, false, bParam2);
      OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 1, false, bParam2);
      return 1;
    }
  }
  return 0;
}