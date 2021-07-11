// act_cinema.c @ L100175
void func_673(int iParam0, int iParam1)
{
  if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("deluxo") && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
  {
    VEHICLE::_SET_VEHICLE_HOVER_TRANSFORM_ENABLED(iParam0, iParam1);
  }
}