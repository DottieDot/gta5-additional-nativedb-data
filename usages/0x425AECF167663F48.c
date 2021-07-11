// am_mp_hangar.c @ L342269
int func_5273(int iParam0, var uParam1)
{
  if (((!func_82(uParam1->f_31) && !func_96(uParam1->f_31, -1)) && !func_77(uParam1->f_31, 0, 0)) && !func_52(PLAYER::PLAYER_ID()))
  {
    if (!TASK::PED_HAS_USE_SCENARIO_TASK(PLAYER::PLAYER_PED_ID()))
    {
      PED::_0x425AECF167663F48(PLAYER::PLAYER_PED_ID(), 0);
      MISC::CLEAR_BIT(iParam0, 6);
      return 1;
    }
    else if (!MISC::IS_BIT_SET(*iParam0, 6))
    {
      PED::_0x425AECF167663F48(PLAYER::PLAYER_PED_ID(), 1);
      TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
      MISC::SET_BIT(iParam0, 6);
    }
  }
  else if ((!func_51(PLAYER::PLAYER_ID()) && !iParam0->f_2465) && !iParam0->f_2466)
  {
    if (!func_5274(PLAYER::PLAYER_ID()))
    {
      Global_31008 = 14;
    }
    return 1;
  }
  return 0;
}