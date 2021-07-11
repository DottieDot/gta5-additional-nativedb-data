// am_casino_peds.ysc @ L88897
int func_688(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4)
{
  int iVar0;
  
  if (uParam0->f_1)
  {
    return 1;
  }
  if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
  {
    return 1;
  }
  iVar0 = func_689(uParam0, iParam2, iParam3);
  ENTITY::SET_ENTITY_ALPHA(*uParam1, iVar0, bParam4);
  return 0;
}