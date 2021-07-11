// carwash1.c @ L3998
void func_56(int iParam0, float fParam1, float fParam2)
{
  if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
  {
    GRAPHICS::WASH_DECALS_FROM_VEHICLE(iParam0, fParam1);
    VEHICLE::SET_VEHICLE_DIRT_LEVEL(iParam0, fParam2);
  }
}