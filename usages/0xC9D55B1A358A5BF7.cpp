// ambient_solomon.ysc @ L3802
int func_52(vector3 vParam0)
{
  int iVar0;
  int iVar1;
  var uVar2[20];
  
  iVar0 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar2, -1);
  if (iVar0 == 0)
  {
    return 0;
  }
  iVar1 = 0;
  while (iVar1 < iVar0)
  {
    if (func_75(uVar2[iVar1]))
    {
      if (PED::IS_PED_MODEL(uVar2[iVar1], iLocal_245))
      {
        if (func_53(uVar2[iVar1], vParam0, 1) < 5f)
        {
          return 1;
        }
      }
    }
    iVar1++;
  }
  return 0;
}