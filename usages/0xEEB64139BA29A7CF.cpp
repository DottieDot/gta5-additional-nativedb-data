// fm_mission_controller.ysc @ L787226
void func_12857(int iParam0)
{
  if (MISC::IS_BIT_SET(Global_4456448.f_106[iParam0 /*11610*/].f_6502, 2))
  {
    PED::SET_PED_DIES_INSTANTLY_IN_WATER(iLocal_1073, 1);
  }
  else
  {
    PED::SET_PED_DIES_INSTANTLY_IN_WATER(iLocal_1073, 0);
  }
  if (iParam0 == 1)
  {
    iLocal_7066 = 0;
  }
  else
  {
    func_4512(iLocal_1073, &uLocal_8201);
    if (func_4514(joaat("WEAPON_PUMPSHOTGUN_MK2")))
    {
      func_12858(joaat("WEAPON_PUMPSHOTGUN_MK2"), &iLocal_8723, &iLocal_8724);
    }
    PED::RESET_PED_MOVEMENT_CLIPSET(iLocal_1073, 1048576000);
    PED::RESET_PED_STRAFE_CLIPSET(iLocal_1073);
    WEAPON::SET_WEAPON_ANIMATION_OVERRIDE(iLocal_1073, joaat("DEFAULT"));
  }
  func_8456();
}