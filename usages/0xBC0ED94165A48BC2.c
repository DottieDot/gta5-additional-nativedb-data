// agency_heist3a.c @ L126634
void func_811(var uParam0)
{
  int iVar0;
  
  if (!MISC::IS_BIT_SET(uParam0->f_13, 25))
  {
    if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
    {
      PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, false);
    }
    iVar0 = 0;
    while (iVar0 < 3)
    {
      if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_17[iVar0]))
      {
        if (!PED::IS_PED_INJURED(uParam0->f_17[iVar0]))
        {
          PED::SET_PED_CONFIG_FLAG(uParam0->f_17[iVar0], 32, false);
          PED::SET_PED_CONFIG_FLAG(uParam0->f_17[iVar0], 305, true);
          PED::SET_PED_CONFIG_FLAG(uParam0->f_17[iVar0], 268, true);
          PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(uParam0->f_17[iVar0], 0);
        }
      }
      iVar0++;
    }
    MISC::SET_BIT(&(uParam0->f_13), 25);
  }
}