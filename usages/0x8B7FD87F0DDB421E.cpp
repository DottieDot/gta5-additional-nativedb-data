// business_battles.ysc @ L107998
void func_713(int iParam0, int iParam1, bool bParam2)
{
  int iVar0;
  
  iVar0 = func_714(func_715());
  if ((iVar0 > 19 || iVar0 < 7) || iParam1)
  {
    VEHICLE::SET_VEHICLE_LIGHTS(iParam0, 3);
    if (bParam2)
    {
      VEHICLE::SET_VEHICLE_FULLBEAM(iParam0, 1);
    }
  }
}