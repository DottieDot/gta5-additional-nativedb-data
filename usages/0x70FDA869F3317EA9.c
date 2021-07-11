// country_race_controller.c @ L967
void func_33()
{
  if (((((CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() != 3 && CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() != 4) && !CAM::IS_GAMEPLAY_CAM_LOOKING_BEHIND()) && PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())) && func_34(iLocal_151)) && ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) < 20f)
  {
    if (iLocal_153)
    {
      if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
      {
        CAM::SET_GAMEPLAY_ENTITY_HINT(iLocal_151, 0f, 0f, 0f, 1, 2000, 2000, 2000, 0);
        iLocal_153 = 0;
      }
    }
  }
  else
  {
    if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
    {
      CAM::STOP_GAMEPLAY_HINT(0);
    }
    iLocal_153 = 1;
  }
}