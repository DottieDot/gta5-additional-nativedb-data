// am_casino_peds.ysc @ L253097
int func_2663(vector3 vParam0)
{
  int iVar0;
  int iVar1;
  var uVar2[15];
  int iVar3;
  
  iVar0 = func_2567();
  if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, 0))
  {
    if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
    {
      iVar3 = PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), &uVar2);
      iVar1 = 0;
      while (iVar1 < iVar3)
      {
        if (ENTITY::DOES_ENTITY_EXIST(uVar2[iVar1]) && ENTITY::IS_ENTITY_A_VEHICLE(uVar2[iVar1]))
        {
          if (!ENTITY::IS_ENTITY_DEAD(uVar2[iVar1], 0) && !func_1307(uVar2[iVar1], 1))
          {
            if (func_2671(uVar2[iVar1], vParam0, 1) < 2.5f)
            {
              return 1;
            }
          }
        }
        iVar1++;
      }
    }
  }
  return 0;
}