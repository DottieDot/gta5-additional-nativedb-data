// gb_bellybeast.ysc @ L705
void func_21(int iParam0)
{
  int iVar0;
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar0 = VEHICLE::GET_VEHICLE_LIVERY_COUNT(iParam0);
  iVar1 = VEHICLE::GET_NUMBER_OF_VEHICLE_COLOURS(iParam0);
  if (iVar0 > 0)
  {
    iVar3 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0);
    VEHICLE::SET_VEHICLE_LIVERY(iParam0, iVar3);
  }
  iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar1);
  VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iParam0, iVar2);
}