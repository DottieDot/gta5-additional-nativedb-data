// fm_race_controler.c @ L492011
void func_8144(int iParam0, int iParam1, int iParam2)
{
  if (VEHICLE::DOES_VEHICLE_HAVE_WEAPONS(iParam0))
  {
    if (!VEHICLE::_IS_VEHICLE_WEAPON_DISABLED(iParam2, iParam0, iParam1))
    {
      VEHICLE::DISABLE_VEHICLE_WEAPON(1, iParam2, iParam0, iParam1);
    }
  }
}