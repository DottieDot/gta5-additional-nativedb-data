// fm_mission_controller.ysc @ L361670
int func_5208(int iParam0)
{
  if (func_5209(iParam0))
  {
    PAD::DISABLE_CONTROL_ACTION(0, 86, 1);
    PAD::DISABLE_CONTROL_ACTION(0, 74, 1);
    return (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 86) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 74));
  }
  else
  {
    if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0) && VEHICLE::IS_VEHICLE_SIREN_ON(iParam0))
    {
      VEHICLE::SET_VEHICLE_SIREN(iParam0, false);
    }
    PAD::DISABLE_CONTROL_ACTION(0, 51, 1);
    return PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 51);
  }
  return 0;
}