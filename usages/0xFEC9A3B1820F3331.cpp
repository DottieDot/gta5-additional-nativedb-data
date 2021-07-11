// family6.ysc @ L114861
void func_551(int iParam0, int iParam1)
{
  bool bVar0;
  bool bVar1;
  
  bVar0 = PED::_0xFEC9A3B1820F3331(iParam0);
  bVar1 = ENTITY::IS_ENTITY_IN_WATER(iParam0);
  if (bVar0 && bVar1)
  {
    Global_96089[iParam1 /*29*/].f_16 = 1;
  }
  else
  {
    Global_96089[iParam1 /*29*/].f_16 = 0;
  }
}