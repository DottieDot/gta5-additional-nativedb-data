// act_cinema.c @ L100167
void func_672(int iParam0, bool bParam1)
{
  if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("deluxo") && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
  {
    VEHICLE::_SET_VEHICLE_HOVER_TRANSFORM_ACTIVE(iParam0, !bParam1);
  }
}