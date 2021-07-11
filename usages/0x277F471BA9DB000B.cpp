// am_mp_hangar.ysc @ L342171
int func_5269(var uParam0, var uParam1, int iParam2, bool bParam3)
{
  vector3 vVar0;
  
  bParam3 = bParam3;
  if (TASK::_0x621C6E4729388E41(PLAYER::PLAYER_PED_ID()))
  {
    return 1;
  }
  else
  {
    vVar0 = { func_5268(uParam1, uParam0->f_6, iParam2) };
    vVar0 = { vVar0 };
    if (!bParam3)
    {
      if (!TASK::PED_HAS_USE_SCENARIO_TASK(PLAYER::PLAYER_PED_ID()))
      {
        if (TASK::DOES_SCENARIO_EXIST_IN_AREA(func_5268(uParam1, uParam0->f_6, iParam2), 2f, 1))
        {
          if ((((((((((func_85(uParam1->f_31) || func_83(uParam1->f_31)) || func_84(uParam1->f_31, -1)) || func_82(uParam1->f_31)) || func_96(uParam1->f_31, -1)) || func_77(uParam1->f_31, 0, 0)) || func_5270(uParam1->f_31)) || func_52(PLAYER::PLAYER_ID())) || func_51(PLAYER::PLAYER_ID())) || iParam2->f_2465) || iParam2->f_2466)
          {
            PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 414, true);
          }
          TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(PLAYER::PLAYER_PED_ID(), func_5268(uParam1, uParam0->f_6, iParam2), 2f, 0);
        }
      }
    }
  }
  return 0;
}