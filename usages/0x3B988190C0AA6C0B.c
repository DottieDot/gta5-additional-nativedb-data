// am_casino_peds.c @ L171090
void func_1724()
{
  if (ENTITY::DOES_ENTITY_EXIST(Global_2531497.f_296) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_2531497.f_296, 0))
  {
    if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Global_2531497.f_296))
    {
      VEHICLE::SET_VEHICLE_HANDBRAKE(Global_2531497.f_296, false);
      ENTITY::SET_ENTITY_CAN_BE_DAMAGED(Global_2531497.f_296, true);
      AUDIO::SET_VEHICLE_RADIO_ENABLED(Global_2531497.f_296, true);
      Global_2437549.f_502.f_43 = 0;
    }
    else
    {
      NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(Global_2531497.f_296);
    }
  }
  else
  {
    Global_2437549.f_502.f_43 = 0;
  }
}