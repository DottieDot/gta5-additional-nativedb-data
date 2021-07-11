// agency_prep2amb.ysc @ L9257
int func_184()
{
  var uVar0[5];
  int iVar1;
  
  PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar0, -1);
  iVar1 = 0;
  while (iVar1 <= 4)
  {
    if (func_250(uVar0[iVar1]) && uVar0[iVar1] != PLAYER::PLAYER_PED_ID())
    {
      if (SYSTEM::VDIST2(vLocal_50, ENTITY::GET_ENTITY_COORDS(uVar0[iVar1], true)) <= 16f)
      {
        return 1;
      }
    }
    iVar1++;
  }
  return 0;
}