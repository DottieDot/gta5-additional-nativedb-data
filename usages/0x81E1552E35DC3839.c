// abigail1.c @ L38803
void func_298(int iParam0)
{
  if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
  {
    if (VEHICLE::_GET_HAS_ROCKET_BOOST(iParam0))
    {
      if (VEHICLE::_IS_VEHICLE_ROCKET_BOOST_ACTIVE(iParam0))
      {
        VEHICLE::_SET_VEHICLE_ROCKET_BOOST_ACTIVE(iParam0, 0);
      }
    }
  }
}