// act_cinema.ysc @ L106170
int func_745(vector3 vParam0)
{
  int iVar0;
  int iVar1;
  
  if (Global_2405071.f_45.f_55)
  {
    if (INTERIOR::IS_VALID_INTERIOR(Global_2405071.f_45.f_56))
    {
      if (!INTERIOR::_ARE_COORDS_COLLIDING_WITH_EXTERIOR(vParam0))
      {
        iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS(vParam0);
        if (INTERIOR::IS_VALID_INTERIOR(iVar0))
        {
          iVar1 = INTERIOR::GET_INTERIOR_GROUP_ID(iVar0);
          if (!iVar1 == Global_2405071.f_45.f_57)
          {
            return 0;
          }
        }
        else
        {
          return 0;
        }
      }
      else
      {
        return 0;
      }
    }
  }
  return 1;
}