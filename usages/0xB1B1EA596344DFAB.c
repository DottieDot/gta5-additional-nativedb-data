// franklin1.c @ L116731
void func_651(int iParam0, var uParam1)
{
  if (!PED::IS_PED_INJURED(iParam0))
  {
    PED::REMOVE_PED_PREFERRED_COVER_SET(iParam0);
    if (ITEMSET::IS_ITEMSET_VALID(*uParam1))
    {
      ITEMSET::DESTROY_ITEMSET(*uParam1);
    }
  }
}