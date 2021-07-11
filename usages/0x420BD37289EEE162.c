// am_mp_armory_aircraft.c @ L4283
void func_73(char* sParam0)
{
  int iVar0;
  
  iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(func_72(), func_71());
  if (INTERIOR::IS_VALID_INTERIOR(iVar0))
  {
    if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
    {
      if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar0, sParam0))
      {
        INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar0, sParam0);
      }
    }
  }
}