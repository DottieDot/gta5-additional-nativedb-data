// agency_heist1.c @ L896
int func_13(int iParam0)
{
  if ((ENTITY::DOES_ENTITY_EXIST(iParam0) && !PED::IS_PED_INJURED(iParam0)) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -112.6861f, -14.27577f, 69.53925f, -109.5499f, -5.690081f, 72.7827f, 6f, 0, true, 0))
  {
    return 1;
  }
  return 0;
}