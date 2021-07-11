// agency_prep2amb.ysc @ L9395
int func_191(vector3 vParam0)
{
  vector3 vVar0;
  float fVar1;
  
  if (PATHFIND::GET_CLOSEST_VEHICLE_NODE(vParam0, &vVar0, 0, 1077936128, 0))
  {
    fVar1 = SYSTEM::VDIST2(vParam0, vVar0);
    if (fVar1 >= 400f || !func_192(vParam0, vVar0))
    {
      return 0;
    }
    else if (fVar1 < 20f && fVar1 > 6f)
    {
      if (func_13())
      {
        func_69(40);
      }
      return 1;
    }
    else
    {
      if (func_13())
      {
        func_69(41);
      }
      return 1;
    }
  }
  return 0;
}