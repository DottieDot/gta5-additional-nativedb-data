// dreyfuss1.c @ L42828
void func_424()
{
  if (!func_437(Local_82.f_35[0]))
  {
    STREAMING::REQUEST_MODEL(iLocal_96);
    while (!STREAMING::HAS_MODEL_LOADED(iLocal_96))
    {
      SYSTEM::WAIT(0);
    }
    Local_82.f_35[0] = VEHICLE::CREATE_VEHICLE(iLocal_96, vLocal_80, fLocal_81, true, true, false);
    STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_96);
  }
  if (func_437(Local_82.f_35[0]))
  {
    VEHICLE::_0x0AD9E8F87FF7C16F(Local_82.f_35[0], 0);
    VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_82.f_35[0], 1);
    VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(Local_82.f_35[0], "DR3YFU55");
  }
}