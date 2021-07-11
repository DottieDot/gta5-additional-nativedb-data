// agency_prep2amb.ysc @ L10600
int func_211(int iParam0)
{
  if (DECORATOR::DECOR_EXIST_ON(iParam0, "GetawayVehicleValid"))
  {
    if (DECORATOR::DECOR_GET_BOOL(iParam0, "GetawayVehicleValid"))
    {
      return 1;
    }
  }
  return 0;
}