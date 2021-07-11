// am_armwrestling.c @ L54904
void func_470(int iParam0, bool bParam1)
{
  if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_DEAD_OR_DYING(PLAYER::PLAYER_PED_ID(), 1))
  {
    if (func_211() == 0)
    {
      NETWORK::NETWORK_RESURRECT_LOCAL_PLAYER(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 0f, 0, (func_471(PLAYER::PLAYER_ID(), 1) && !bParam1), iParam0);
      Global_2405071.f_45.f_317 = 1;
    }
    else if (PED::IS_PED_DEAD_OR_DYING(PLAYER::PLAYER_PED_ID(), 1))
    {
      PED::RESURRECT_PED(PLAYER::PLAYER_PED_ID());
    }
    else
    {
      PED::REVIVE_INJURED_PED(PLAYER::PLAYER_PED_ID());
    }
  }
  PLAYER::RESET_PLAYER_ARREST_STATE(PLAYER::PLAYER_ID());
  MISC::_RESET_LOCALPLAYER_STATE();
}