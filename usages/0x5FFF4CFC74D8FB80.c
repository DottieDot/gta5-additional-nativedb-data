// am_armybase.c @ L3237
int func_98(int iParam0)
{
  if (PED::IS_PED_IN_ANY_PLANE(iParam0) || PED::IS_PED_IN_ANY_HELI(iParam0))
  {
    return 1;
  }
  return 0;
}