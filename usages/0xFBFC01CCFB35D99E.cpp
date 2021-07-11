// ambient_sonar.ysc @ L4083
void func_118()
{
  iLocal_56 = 0;
  func_122();
  func_121(&Local_42, 3, joaat("prop_rad_waste_barrel_01"), "SUBM_COLLECT");
  func_119(&Local_42, joaat("NUM_HIDDEN_PACKAGES_3"), 815, 30);
  if (func_109(PLAYER::PLAYER_PED_ID()))
  {
    if (PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID()))
    {
      PLAYER::SET_MAX_WANTED_LEVEL(0);
      func_6(1);
    }
    else
    {
      PLAYER::SET_MAX_WANTED_LEVEL(5);
      func_6(2);
    }
  }
}