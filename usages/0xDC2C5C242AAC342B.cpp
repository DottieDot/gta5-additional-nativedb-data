// am_casino_peds.ysc @ L310381
void func_3848(var uParam0, float fParam1)
{
  int iVar0;
  
  iVar0 = 0;
  while (iVar0 < *uParam0)
  {
    if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar0]) && !ENTITY::IS_ENTITY_DEAD((*uParam0)[iVar0], 0))
    {
      PED::SET_PED_LOD_MULTIPLIER((*uParam0)[iVar0], fParam1);
    }
    iVar0++;
  }
}