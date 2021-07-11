// arena_carmod.c @ L191435
void func_1653(int iParam0)
{
  if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
  {
    if (!DECORATOR::DECOR_EXIST_ON(iParam0, "Sprayed_Vehicle_Decorator"))
    {
      DECORATOR::DECOR_SET_BOOL(iParam0, "Sprayed_Vehicle_Decorator", 1);
      if (!DECORATOR::DECOR_EXIST_ON(iParam0, "Sprayed_Vehicle_Timer_Dec"))
      {
        DECORATOR::DECOR_SET_TIME(iParam0, "Sprayed_Vehicle_Timer_Dec", NETWORK::GET_NETWORK_TIME());
      }
    }
  }
}