// carwash1.ysc @ L8037
void func_173(int iParam0)
{
  if (!func_5(iParam0))
  {
    return;
  }
  if (VEHICLE::DOES_VEHICLE_HAVE_STUCK_VEHICLE_CHECK(iParam0))
  {
    VEHICLE::REMOVE_VEHICLE_STUCK_CHECK(iParam0);
  }
  if (DECORATOR::DECOR_EXIST_ON(iParam0, "Carwash_Vehicle_Decorator"))
  {
    DECORATOR::DECOR_REMOVE(iParam0, "Carwash_Vehicle_Decorator");
  }
  if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
  {
    if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
    {
      VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(iParam0, 0);
    }
  }
}