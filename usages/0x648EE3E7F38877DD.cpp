// am_vehicle_spawn.ysc @ L11322
void func_282()
{
  if (func_285(PLAYER::PLAYER_PED_ID()))
  {
    if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
    {
      if (func_284(0))
      {
        if (((((PAD::IS_CONTROL_JUST_PRESSED(2, 201) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 201)) || PAD::IS_DISABLED_CONTROL_PRESSED(2, 201)) || PAD::IS_CONTROL_PRESSED(2, 201)) || PAD::IS_DISABLED_CONTROL_RELEASED(2, 201)) || PAD::IS_CONTROL_RELEASED(2, 201))
        {
          func_283();
        }
      }
    }
  }
}