// act_cinema.ysc @ L100289
int func_678(int iParam0, float fParam1)
{
  vector3 vVar0;
  float fVar1;
  
  if (ENTITY::DOES_ENTITY_EXIST(iParam0))
  {
    vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
    if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &fVar1, 0, 0))
    {
      if (MISC::ABSF((vVar0.z - fVar1)) > fParam1)
      {
        return 1;
      }
    }
    else if (vVar0.z > (PATHFIND::_GET_HEIGHTMAP_BOTTOM_Z_FOR_POSITION(vVar0.x, vVar0.y) + fParam1))
    {
      return 1;
    }
    else if (vVar0.z > 300f)
    {
      return 1;
    }
  }
  return 0;
}