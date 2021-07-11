// act_cinema.ysc @ L75987
int func_370(int iParam0)
{
  if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
  {
    if (GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(iParam0, 0) || func_371(iParam0))
    {
      return 1;
    }
  }
  return 0;
}