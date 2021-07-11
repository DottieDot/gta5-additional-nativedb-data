// agency_heist3a.c @ L113144
int func_593(int iParam0, vector3 vParam1, char* sParam2, char* sParam3)
{
  int iVar0;
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (!PED::IS_PED_INJURED(iParam0))
  {
    iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(vParam1, sParam3);
    iVar1 = INTERIOR::GET_INTERIOR_FROM_ENTITY(iParam0);
    if (!iVar0 == 0)
    {
      if (iVar0 == iVar1)
      {
        iVar2 = INTERIOR::GET_KEY_FOR_ENTITY_IN_ROOM(iParam0);
        iVar3 = MISC::GET_HASH_KEY(sParam2);
        if (iVar2 != 0)
        {
          if (iVar2 == iVar3)
          {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}