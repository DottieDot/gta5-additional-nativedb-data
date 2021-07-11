// am_hold_up.ysc @ L815
int func_16(var uParam0, int iParam1, bool bParam2, int iParam3)
{
  ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam1, bParam2, iParam3);
  *uParam0 = NETWORK::NETWORK_GET_NETWORK_ID_FROM_ENTITY(iParam1);
  if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
  {
    if (bParam2)
    {
      NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, 1);
    }
    return 1;
  }
  return 0;
}