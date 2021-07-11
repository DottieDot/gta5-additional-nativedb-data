// am_casino_peds.ysc @ L296488
void func_3655()
{
  int iVar0;
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
  {
    iVar3 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
    iVar0 = 0;
    while (iVar0 <= 8)
    {
      iVar1 = iVar0;
      iVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar3, iVar1, 0);
      if ((ENTITY::DOES_ENTITY_EXIST(iVar2) && PED::IS_PED_A_PLAYER(iVar2)) && !VEHICLE::IS_TURRET_SEAT(iVar3, iVar1))
      {
        NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(iVar2, true, 0);
      }
      iVar0++;
    }
  }
}