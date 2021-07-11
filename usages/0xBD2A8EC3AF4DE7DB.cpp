// appcontacts.ysc @ L13910
void func_283()
{
  if (!Global_76577)
  {
    if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
    {
      if (MISC::IS_BIT_SET(Global_7356, 11))
      {
        if (!Global_19429)
        {
          TASK::TASK_USE_MOBILE_PHONE(PLAYER::PLAYER_PED_ID(), 0, 1);
        }
        if (Global_76577)
        {
          PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 244, true);
          PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 243, true);
          PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 242, true);
        }
        MISC::CLEAR_BIT(&Global_7356, 11);
      }
    }
  }
}