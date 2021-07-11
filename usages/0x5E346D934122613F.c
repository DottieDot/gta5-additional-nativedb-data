// agency_heist3b.c @ L143903
int func_1049(int iParam0)
{
  int iVar0;
  
  if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
  {
    if (!PED::IS_PED_INJURED(iParam0))
    {
      WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, 1);
      if (((iVar0 == joaat("WEAPON_SNIPERRIFLE") || iVar0 == joaat("WEAPON_HEAVYSNIPER")) || iVar0 == joaat("WEAPON_MARKSMANRIFLE")) || iVar0 == joaat("WEAPON_HEAVYSNIPER_MK2"))
      {
        return 1;
      }
    }
  }
  return 0;
}