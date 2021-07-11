// dreyfuss1.ysc @ L36462
void func_297()
{
  if (func_437(iLocal_89))
  {
    if (WEAPON::HAS_PED_BEEN_DAMAGED_BY_WEAPON(iLocal_89, joaat("WEAPON_STUNGUN"), 0))
    {
      if (func_437(iLocal_89))
      {
        ENTITY::SET_ENTITY_HEALTH(iLocal_89, 99, 0);
      }
    }
  }
}