// hunting_ambient.ysc @ L670
void func_2()
{
  int iVar0;
  int iVar1;
  int iVar2;
  
  while (ITEMSET::GET_ITEMSET_SIZE(Local_56.f_651) > 0)
  {
    iVar0 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(0, Local_56.f_651);
    ITEMSET::REMOVE_FROM_ITEMSET(iVar0, Local_56.f_651);
    if (ENTITY::IS_AN_ENTITY(iVar0))
    {
      iVar1 = iVar0;
      iVar2 = HUD::GET_BLIP_FROM_ENTITY(iVar1);
      HUD::REMOVE_BLIP(&iVar2);
      ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar1);
    }
    ITEMSET::CLEAN_ITEMSET(Local_56.f_651);
  }
  while (ITEMSET::GET_ITEMSET_SIZE(Local_56.f_652) > 0)
  {
    iVar0 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(0, Local_56.f_652);
    ITEMSET::REMOVE_FROM_ITEMSET(iVar0, Local_56.f_652);
    if (ENTITY::IS_AN_ENTITY(iVar0))
    {
      iVar1 = iVar0;
      iVar2 = HUD::GET_BLIP_FROM_ENTITY(iVar1);
      HUD::REMOVE_BLIP(&iVar2);
      ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar1);
    }
    ITEMSET::CLEAN_ITEMSET(Local_56.f_652);
  }
}