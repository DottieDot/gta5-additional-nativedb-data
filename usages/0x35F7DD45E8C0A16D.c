// am_mp_arcade.c @ L298241
void func_4254(int iParam0, var uParam1, int iParam2, int iParam3)
{
  int iVar0;
  char* sVar1;
  
  if (iParam0 != -1)
  {
    iVar0 = iParam3;
    if (func_4257(iParam0))
    {
      iVar0 = iParam2;
    }
    sVar1 = func_4256(iParam0);
    if (INTERIOR::IS_VALID_INTERIOR(iVar0))
    {
      if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
      {
        if (!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar0, sVar1))
        {
          INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iVar0, sVar1);
          func_4255(iParam0, uParam1, 1);
        }
        else
        {
          func_4255(iParam0, uParam1, 1);
        }
      }
    }
    else if (func_4257(iParam0))
    {
    }
  }
}