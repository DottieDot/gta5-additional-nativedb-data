// am_mp_hangar.ysc @ L70114
void func_861()
{
  if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
  {
    if (VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), joaat("VALKYRIE")))
    {
      if (!MISC::IS_BIT_SET(Local_457.f_1, 20))
      {
        PAD::STOP_PAD_SHAKE(0);
        PAD::_0xF239400E16C23E08(0, 1);
        MISC::SET_BIT(&(Local_457.f_1), 20);
      }
    }
  }
  else if (MISC::IS_BIT_SET(Local_457.f_1, 20))
  {
    PAD::_0xF239400E16C23E08(0, -1);
    MISC::CLEAR_BIT(&(Local_457.f_1), 20);
  }
}