// agency_heist2.c @ L968
void func_14(int iParam0)
{
  if (ENTITY::DOES_ENTITY_EXIST(iLocal_82))
  {
    OBJECT::DELETE_OBJECT(&iLocal_82);
  }
  if (!WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("WEAPON_BRIEFCASE_02"), 0))
  {
    WEAPON::GIVE_WEAPON_TO_PED(iParam0, joaat("WEAPON_BRIEFCASE_02"), -1, true, true);
  }
  WEAPON::SET_CURRENT_PED_WEAPON(iParam0, joaat("WEAPON_BRIEFCASE_02"), true);
}