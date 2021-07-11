// josh3.c @ L36690
int func_294(vector3 vParam0, float fParam1)
{
  vector3 vVar0;
  
  if (FIRE::GET_CLOSEST_FIRE_POS(&vVar0, vParam0) && MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, vParam0, true) < fParam1)
  {
    return 1;
  }
  return 0;
}