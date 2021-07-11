// fm_capture_creator.c @ L63318
void func_734(int iParam0, int iParam1)
{
  int iVar0;
  
  iVar0 = 0;
  while (iVar0 <= 3)
  {
    if (func_735(iParam0, iVar0))
    {
      if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iParam1))
      {
        VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_TEAM(iParam1, iVar0, 1);
        VEHICLE::_0xDBC631F109350B8C(iParam1, 1);
        VEHICLE::_0x2311DD7159F00582(iParam1, 1);
      }
      else if (iVar0 == Global_4456448.f_55)
      {
        VEHICLE::SET_VEHICLE_DOORS_LOCKED(iParam1, 3);
      }
    }
    iVar0++;
  }
}