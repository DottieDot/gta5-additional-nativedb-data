// am_mp_hacker_truck.c @ L300820
void func_4468()
{
  if (ENTITY::DOES_ENTITY_EXIST(iLocal_628[0]))
  {
    if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iLocal_628[0]))
    {
      if (OBJECT::_GET_OBJECT_TEXTURE_VARIATION(iLocal_628[0]) != func_296(Local_583.f_7))
      {
        OBJECT::_SET_OBJECT_TEXTURE_VARIATION(iLocal_628[0], func_296(Local_583.f_7));
      }
    }
  }
  else
  {
    iLocal_628[0] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1421.976f, -3011.691f, -79.4f, 2f, joaat("ba_prop_battle_control_seat"), 0, 0, 0);
  }
  if (ENTITY::DOES_ENTITY_EXIST(iLocal_628[1]))
  {
    if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iLocal_628[1]))
    {
      if (OBJECT::_GET_OBJECT_TEXTURE_VARIATION(iLocal_628[1]) != func_296(Local_583.f_7))
      {
        OBJECT::_SET_OBJECT_TEXTURE_VARIATION(iLocal_628[1], func_296(Local_583.f_7));
      }
    }
  }
  else
  {
    iLocal_628[1] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1420.153f, -3010.176f, -79.4f, 2f, joaat("ba_prop_battle_control_seat"), 0, 0, 0);
  }
}