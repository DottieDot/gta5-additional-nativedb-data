// trevor2.ysc @ L140203
int func_876(int iParam0)
{
  if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
  {
    return 0;
  }
  if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
  {
    if (func_877(&iParam0))
    {
      return 0;
    }
    else if (!VEHICLE::ARE_PLANE_PROPELLERS_INTACT(iParam0))
    {
      return 0;
    }
  }
  return 1;
}