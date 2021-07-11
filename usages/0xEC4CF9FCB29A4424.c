// agency_heist1.c @ L110207
int func_585(vector3 vParam0, char* sParam1, vector3 vParam2)
{
  int iVar0;
  int iVar1;
  
  if (!INTERIOR::_ARE_COORDS_COLLIDING_WITH_EXTERIOR(vParam0))
  {
    iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(vParam2, sParam1);
    if (!INTERIOR::IS_VALID_INTERIOR(iVar0))
    {
      return 0;
    }
    iVar1 = INTERIOR::GET_INTERIOR_FROM_COLLISION(vParam0);
    if (iVar1 == iVar0)
    {
      return 1;
    }
  }
  return 0;
}