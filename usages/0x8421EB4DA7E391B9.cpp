// finale_heist2b.ysc @ L130538
void func_831(var uParam0, var uParam1)
{
  int iVar0;
  
  if (!PED::IS_PED_INJURED(*uParam0))
  {
    iVar0 = ITEMSET::CREATE_ITEMSET(1);
    ITEMSET::ADD_TO_ITEMSET(*uParam1, iVar0);
    PED::SET_PED_PREFERRED_COVER_SET(*uParam0, iVar0);
    ITEMSET::DESTROY_ITEMSET(iVar0);
  }
}