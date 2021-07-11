// director_mode.c @ L28564
int func_405(int iParam0)
{
  if ((!PED::GET_PED_STEALTH_MOVEMENT(iParam0) && !PED::IS_PED_DUCKING(iParam0)) && PED::GET_PED_COMBAT_MOVEMENT(iParam0) == 0)
  {
    return 1;
  }
  return 0;
}