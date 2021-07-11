// am_pi_menu.ysc @ L386953
void func_4995(int iParam0, bool bParam1)
{
  if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
  {
    if (iParam0 == -1)
    {
      iParam0 = func_61(455, -1, -1);
    }
    else if (bParam1)
    {
      func_60(455, iParam0, -1, 1);
    }
  }
  PLAYER::SET_PLAYER_HAS_RESERVE_PARACHUTE(PLAYER::PLAYER_ID());
  PLAYER::SET_PLAYER_RESERVE_PARACHUTE_TINT_INDEX(PLAYER::PLAYER_ID(), iParam0);
  if (func_753())
  {
    PLAYER::SET_PLAYER_PARACHUTE_MODEL_OVERRIDE(PLAYER::PLAYER_ID(), joaat("lts_p_para_pilot2_sp_s"));
  }
  else if (func_752())
  {
    PLAYER::SET_PLAYER_PARACHUTE_MODEL_OVERRIDE(PLAYER::PLAYER_ID(), joaat("pil_p_para_pilot_sp_s"));
  }
}