// act_cinema.c @ L100183
void func_674(int iParam0)
{
  int iVar0;
  
  iVar0 = 0;
  while (iVar0 < 8)
  {
    if (VEHICLE::DOES_EXTRA_EXIST(iParam0, iVar0 + 1))
    {
      VEHICLE::SET_VEHICLE_EXTRA(iParam0, iVar0 + 1, false);
    }
    iVar0++;
  }
  if (VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("BODHI2")))
  {
    VEHICLE::SET_VEHICLE_EXTRA(iParam0, 5, true);
  }
  if (((((((VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("CHINO")) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("VOLTIC"))) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("buccaneer"))) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("buccaneer2"))) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("CHINO2"))) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("FACTION"))) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("FACTION2"))) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("MAMBA")))
  {
    if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iParam0, 0))
    {
      VEHICLE::SET_CONVERTIBLE_ROOF(iParam0, 1);
    }
    if (VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("MAMBA")))
    {
      VEHICLE::SET_VEHICLE_EXTRA(iParam0, 1, true);
    }
    VEHICLE::SET_VEHICLE_EXTRA(iParam0, 2, false);
    VEHICLE::SET_VEHICLE_EXTRA(iParam0, 3, true);
    VEHICLE::SET_VEHICLE_EXTRA(iParam0, 4, true);
  }
}