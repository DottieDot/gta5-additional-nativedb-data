// fm_hideout_controler.ysc @ L45267
int func_795(int iParam0)
{
  int iVar0;
  
  if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
  {
    return 0;
  }
  iVar0 = -1;
  if (ENTITY::IS_ENTITY_DEAD(iParam0, 0) || PED::IS_PED_INJURED(iParam0))
  {
    if (PED::WAS_PED_KILLED_BY_STEALTH(iParam0) || PED::WAS_PED_KILLED_BY_TAKEDOWN(iParam0))
    {
      return 0;
    }
    if (!PED::GET_PED_LAST_DAMAGE_BONE(iParam0, &iVar0))
    {
      return 0;
    }
    return (iVar0 == 31086 || iVar0 == 39317);
  }
  return 0;
}