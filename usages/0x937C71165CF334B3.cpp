// armenian2.ysc @ L64750
int func_564(int iParam0, int iParam1)
{
  if (!PED::IS_PED_INJURED(iParam0))
  {
    if (WEAPON::IS_WEAPON_VALID(iParam1))
    {
      if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, iParam1, 0))
      {
        if (WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, iParam1) > 0)
        {
          return 1;
        }
      }
    }
  }
  return 0;
}