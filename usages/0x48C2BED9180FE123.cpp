// am_casino_peds.ysc @ L310914
int func_3865(int iParam0, int iParam1)
{
  int iVar0;
  int iVar1;
  
  iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, iParam1);
  if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("trailersmall2"))
  {
    iVar1 = ENTITY::GET_ENTITY_ATTACHED_TO(iVar0);
    if (ENTITY::DOES_ENTITY_EXIST(iVar1))
    {
      iVar0 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar1);
    }
  }
  return iVar0;
}