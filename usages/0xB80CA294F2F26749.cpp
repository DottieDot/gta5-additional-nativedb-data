// finale_heist2a.ysc @ L111373
int func_567(int iParam0)
{
  int iVar0;
  int iVar1;
  
  if ((((!PED::IS_PED_RAGDOLL(iParam0) && !TASK::IS_PED_GETTING_UP(iParam0)) && !PED::IS_PED_IN_COMBAT(iParam0, 0)) && !PED::IS_PED_RELOADING(iParam0)) && WEAPON::IS_PED_WEAPON_READY_TO_SHOOT(iParam0))
  {
    WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, 1);
    iVar1 = WEAPON::GET_WEAPONTYPE_GROUP(iVar0);
    if (iVar1 != joaat("GROUP_MELEE") && iVar1 != 0)
    {
      return 1;
    }
  }
  return 0;
}