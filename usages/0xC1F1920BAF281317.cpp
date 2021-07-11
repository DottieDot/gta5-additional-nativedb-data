// am_mp_arena_garage.ysc @ L328655
void func_4884(int iParam0, int iParam1, int iParam2)
{
  int iVar0;
  char* sVar1;
  
  if (iParam0 != -1)
  {
    if (func_4887(iParam2))
    {
      iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(func_1768(iParam2), func_4886(iParam2));
      sVar1 = func_4885(iParam0);
      if (INTERIOR::IS_VALID_INTERIOR(iVar0))
      {
        if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
        {
          if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar0, sVar1))
          {
            INTERIOR::_SET_INTERIOR_ENTITY_SET_COLOR(iVar0, sVar1, iParam1);
          }
        }
      }
    }
  }
}