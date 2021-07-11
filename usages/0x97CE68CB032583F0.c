// extreme2.c @ L107028
void func_605(int iParam0)
{
  if (func_851(iParam0))
  {
    VEHICLE::REQUEST_VEHICLE_HIGH_DETAIL_MODEL(iParam0);
    if (VEHICLE::IS_VEHICLE_HIGH_DETAIL(iParam0))
    {
      VEHICLE::SET_FORCE_HD_VEHICLE(iParam0, 1);
    }
  }
}