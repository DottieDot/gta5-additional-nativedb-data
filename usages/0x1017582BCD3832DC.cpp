// docks_setup.ysc @ L133257
void func_829()
{
  int iVar0;
  
  if (!WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0))
  {
    if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, 1))
    {
      if (iLocal_2317 != 8)
      {
        if (iVar0 != joaat("WEAPON_UNARMED") && !func_354(0))
        {
          WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
        }
      }
    }
  }
  PAD::DISABLE_CONTROL_ACTION(0, 99, 1);
  PAD::DISABLE_CONTROL_ACTION(0, 100, 1);
  PAD::DISABLE_CONTROL_ACTION(0, 24, 1);
  PAD::DISABLE_CONTROL_ACTION(0, 257, 1);
  PAD::DISABLE_CONTROL_ACTION(0, 263, 1);
  PAD::DISABLE_CONTROL_ACTION(0, 264, 1);
  PAD::DISABLE_CONTROL_ACTION(0, 143, 1);
  PAD::DISABLE_CONTROL_ACTION(0, 262, 1);
  PAD::DISABLE_CONTROL_ACTION(0, 261, 1);
  PAD::DISABLE_CONTROL_ACTION(0, 25, 1);
  PAD::DISABLE_CONTROL_ACTION(0, 45, 1);
  PAD::DISABLE_CONTROL_ACTION(0, 141, 1);
  PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
  PAD::DISABLE_CONTROL_ACTION(0, 13, 1);
  PAD::DISABLE_CONTROL_ACTION(0, 37, 1);
}