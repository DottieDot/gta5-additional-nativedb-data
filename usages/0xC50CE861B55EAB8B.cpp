// agency_heist3b.ysc @ L143511
void func_1046(int iParam0, int iParam1)
{
  if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
  {
    VEHICLE::_0xC50CE861B55EAB8B(iParam0, iParam1);
  }
  else
  {
    ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, true, 0);
    VEHICLE::_0xC50CE861B55EAB8B(iParam0, iParam1);
    ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iParam0);
  }
}