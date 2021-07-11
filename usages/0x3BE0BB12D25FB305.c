// fm_race_creator.c @ L215013
int func_2056(struct<10> Param0, var uParam1)
{
  int iVar0;
  int iVar1;
  int iVar2;
  
  if (ENTITY::DOES_ENTITY_EXIST(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Param0.f_1)) && !ENTITY::IS_ENTITY_DEAD(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Param0.f_1), 0))
  {
    if (func_2057(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Param0.f_1)))
    {
      iVar0 = WEAPON::GET_WEAPON_DAMAGE_TYPE(Param0.f_4);
      iVar1 = Param0.f_4;
      iVar2 = WEAPON::GET_WEAPONTYPE_GROUP(iVar1);
      if (((Param0.f_9 || iVar1 == joaat("WEAPON_UNARMED")) || iVar2 == joaat("GROUP_MELEE")) || iVar0 == 2)
      {
        return 1;
      }
    }
  }
  return 0;
}