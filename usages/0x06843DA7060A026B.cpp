// abigail2.ysc @ L38135
int func_339(int iParam0, vector3 vParam1, float fParam2, bool bParam3, int iParam4)
{
  bool bVar0;
  float fVar1;
  
  bVar0 = false;
  if (func_463(iParam0))
  {
    if (bParam3 == 1)
    {
      fVar1 = 0f;
      bVar0 = MISC::GET_GROUND_Z_FOR_3D_COORD(vParam1, &fVar1, 0, 0);
      if (bVar0)
      {
        vParam1.z = fVar1;
      }
    }
    ENTITY::SET_ENTITY_COORDS(iParam0, vParam1, 1, false, 0, iParam4);
    ENTITY::SET_ENTITY_HEADING(iParam0, fParam2);
    if (bParam3)
    {
      return bVar0;
    }
    return 1;
  }
  return 0;
}