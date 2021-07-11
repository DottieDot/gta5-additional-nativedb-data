// epsilon4.ysc @ L35565
int func_251()
{
  if (func_231(PLAYER::PLAYER_PED_ID()))
  {
    if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
    {
      if (iLocal_283 >= 2)
      {
        func_402("*** Forcing Michael's move state (end cutscene)");
        PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -1871534317, false, 1, 0);
        return 1;
      }
      else
      {
        func_402("*** Forcing Michael's move state");
        if (func_346(PLAYER::PLAYER_PED_ID()) != iLocal_89)
        {
          WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), iLocal_89, -1, true, true);
        }
        PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -1871534317, false, 1, 0);
        return 1;
      }
    }
  }
  return 0;
}