// am_lester_cut.ysc @ L4204
void func_113()
{
  if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
  {
    PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 346, true);
    if (NETWORK::NETWORK_PLAYER_HAS_HEADSET(PLAYER::PLAYER_ID()))
    {
      if (NETWORK::NETWORK_IS_PLAYER_TALKING(PLAYER::PLAYER_ID()))
      {
      }
    }
  }
}