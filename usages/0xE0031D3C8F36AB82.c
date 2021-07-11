// am_casino_peds.c @ L229220
void func_2230()
{
  var uVar0[10];
  int iVar1;
  int iVar2;
  
  iVar1 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar0, -1);
  iVar2 = 0;
  while (iVar2 < iVar1)
  {
    if ((ENTITY::DOES_ENTITY_EXIST(uVar0[iVar2]) && func_15(uVar0[iVar2])) && TASK::IS_PED_ACTIVE_IN_SCENARIO(uVar0[iVar2]))
    {
      NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(uVar0[iVar2], true, 1);
    }
    iVar2++;
  }
}