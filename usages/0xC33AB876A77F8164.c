// docks_prep2b.c @ L16236
int func_268()
{
  int iVar0;
  
  if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
  {
    PED::GET_CLOSEST_PED(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 30f, 0, 1, &iVar0, 0, 1, -1);
  }
  iLocal_58 = 0;
  while (iLocal_58 <= 9)
  {
    if (ENTITY::DOES_ENTITY_EXIST(iLocal_32[iLocal_58]))
    {
      if (!PED::IS_PED_INJURED(iLocal_32[iLocal_58]))
      {
        if (iVar0 == iLocal_32[iLocal_58])
        {
          return iLocal_32[iLocal_58];
        }
      }
    }
    iLocal_58++;
  }
  return 0;
}