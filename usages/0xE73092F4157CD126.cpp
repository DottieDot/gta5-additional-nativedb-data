// am_mp_arena_garage.ysc @ L262294
void func_3795()
{
  if (Local_378.f_363 == PLAYER::PLAYER_ID())
  {
    if (((((((!MISC::IS_BIT_SET(Global_1676734, 18) && !MISC::IS_BIT_SET(Local_378, 17)) && func_176() == 0) && CAM::IS_SCREEN_FADED_IN()) && !func_103(Local_378.f_363)) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) && !NETWORK::IS_PLAYER_IN_CUTSCENE(PLAYER::PLAYER_ID()))
    {
      if (!func_3797(25015))
      {
        func_3796(25015);
        func_1125("ACW_REMIND_HELP", -1);
      }
      MISC::SET_BIT(&Global_1676734, 18);
    }
  }
}