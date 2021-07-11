// abigail2.ysc @ L35580
int func_260(bool bParam0, bool bParam1, bool bParam2)
{
  if (!func_244(bParam0, bParam1, bParam2))
  {
    return 0;
  }
  if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
  {
    PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
    if (CAM::IS_FOLLOW_VEHICLE_CAM_ACTIVE())
    {
      if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(0, 80))
      {
        CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
        return 1;
      }
    }
  }
  return 0;
}