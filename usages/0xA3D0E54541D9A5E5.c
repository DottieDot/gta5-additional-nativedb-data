// am_casino_peds.c @ L221715
void func_2190(int iParam0, int iParam1, int iParam2)
{
  if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
  {
    func_2192();
    if (iParam2 == -1)
    {
      iParam2 = func_396(2040, -1, 0);
    }
    PLAYER::SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(iParam0, 5, func_2112(PLAYER::GET_PLAYER_PED(iParam0), iParam2), func_2111(PLAYER::GET_PLAYER_PED(iParam0), iParam2), 0);
    PLAYER::SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(iParam0, func_2110(PLAYER::GET_PLAYER_PED(iParam0), iParam2));
    PED::SET_PED_COMPONENT_VARIATION(PLAYER::GET_PLAYER_PED(iParam0), 5, func_2112(PLAYER::GET_PLAYER_PED(iParam0), iParam2), func_2111(PLAYER::GET_PLAYER_PED(iParam0), iParam2), func_2110(PLAYER::GET_PLAYER_PED(iParam0), iParam2));
    if (iParam1 == -1)
    {
      iParam1 = func_396(585, -1, 0);
    }
    if (func_1378(1) && func_2226(iParam0))
    {
      PLAYER::SET_PLAYER_PARACHUTE_TINT_INDEX(iParam0, func_2191(Global_2540475));
    }
    else
    {
      PLAYER::SET_PLAYER_PARACHUTE_TINT_INDEX(iParam0, iParam1);
    }
    if (MISC::IS_BIT_SET(Global_4456448.f_28, 4))
    {
      PLAYER::SET_PLAYER_PARACHUTE_TINT_INDEX(iParam0, Global_1574435);
      PLAYER::SET_PLAYER_PARACHUTE_MODEL_OVERRIDE(iParam0, joaat("xm_prop_x17_para_sp_s"));
    }
    func_2109(iParam0, iParam2);
    PED::SET_PED_RESET_FLAG(PLAYER::GET_PLAYER_PED(iParam0), 177, true);
  }
}