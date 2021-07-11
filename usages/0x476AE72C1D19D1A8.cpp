// fm_mission_controller.ysc @ L659225
void func_10659(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
  if (iParam4 < iParam3)
  {
    WEAPON::SET_PED_AMMO(iLocal_1073, iParam2, iParam4, 0);
  }
  else
  {
    WEAPON::SET_PED_AMMO(iLocal_1073, iParam2, iParam3, 0);
  }
  if (func_10660(iParam2))
  {
    WEAPON::SET_PED_INFINITE_AMMO(iLocal_1073, 1, iParam2);
  }
  else
  {
    WEAPON::SET_PED_INFINITE_AMMO(iLocal_1073, 0, iParam2);
  }
  WEAPON::SET_PED_AMMO_TO_DROP(iLocal_1073, 0);
  WEAPON::SET_PED_DROPS_WEAPONS_WHEN_DEAD(iLocal_1073, 0);
  PAD::DISABLE_CONTROL_ACTION(0, 57, 1);
  PAD::DISABLE_CONTROL_ACTION(0, 56, 1);
}