// fm_deathmatch_creator.c @ L151527
void func_1062()
{
  float fVar0;
  
  if (((((func_1126(PLAYER::PLAYER_ID()) || func_1127(PLAYER::PLAYER_ID())) || (Global_262145.f_10082 == 1 && !func_1065(PLAYER::PLAYER_ID(), 1))) || MISC::IS_BIT_SET(Global_4456448.f_13, 31)) || MISC::IS_BIT_SET(Global_4456448.f_14, 8)) || Global_1590302)
  {
    if (func_1064(PLAYER::PLAYER_PED_ID()))
    {
      PED::SET_PED_ARMOUR(PLAYER::PLAYER_PED_ID(), SYSTEM::ROUND((IntToFloat(PED::GET_PED_ARMOUR(PLAYER::PLAYER_PED_ID())) * 1.5f)));
      MISC::SET_BIT(&(Global_2531497.f_1733), 20);
      fVar0 = Global_262145.f_10080;
      fVar0 = func_1020(fVar0, 0.10005f, 2f);
      PLAYER::SET_PLAYER_WEAPON_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), fVar0);
      if (func_269(PLAYER::PLAYER_PED_ID()) && !func_1063(PLAYER::PLAYER_PED_ID()))
      {
        PED::SET_MOVEMENT_MODE_OVERRIDE(PLAYER::PLAYER_PED_ID(), "MP_FEMALE_ACTION");
      }
    }
  }
}