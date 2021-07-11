// fm_bj_race_controler.c @ L279618
void func_3775(var uParam0, var uParam1)
{
  if ((((!func_3992(uParam1->f_5244) && ((func_3974(uParam0) || VEHICLE::IS_VEHICLE_MODEL(uParam1->f_5244, joaat("stromberg"))) || VEHICLE::IS_VEHICLE_MODEL(uParam1->f_5244, joaat("thruster")))) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam1->f_5244)) && VEHICLE::_DOES_VEHICLE_HAVE_LANDING_GEAR(uParam1->f_5244)) && VEHICLE::GET_LANDING_GEAR_STATE(uParam1->f_5244) != 4)
  {
    PAD::_0xF239400E16C23E08(0, 0);
    VEHICLE::CONTROL_LANDING_GEAR(uParam1->f_5244, 3);
    MISC::SET_BIT(&(uParam1->f_5316), 23);
  }
  else if (MISC::IS_BIT_SET(uParam1->f_5316, 23))
  {
    PAD::_0xF239400E16C23E08(0, -1);
    MISC::CLEAR_BIT(&(uParam1->f_5316), 23);
  }
}