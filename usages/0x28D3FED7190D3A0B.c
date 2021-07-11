// abigail1.c @ L39907
int func_339(int iParam0)
{
  if (func_303(iParam0))
  {
    if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
    {
      if (!FIRE::IS_ENTITY_ON_FIRE(iParam0))
      {
        return 1;
      }
    }
  }
  return 0;
}