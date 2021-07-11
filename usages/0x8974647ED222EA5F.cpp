// fm_capture_creator.ysc @ L274487
int func_2797(vector3 vParam0, var uParam1)
{
  vector3 vVar0;
  var uVar1;
  float fVar2;
  
  vVar0 = { vParam0 + Vector(0.5f, 0f, 0f) };
  uParam1->f_764++;
  if (WATER::TEST_PROBE_AGAINST_ALL_WATER(vVar0, vVar0 - Vector(5.5f, 0f, 0f), 17, &uVar1) == 1)
  {
    return 1;
  }
  if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &fVar2, 0, 0))
  {
    if ((vVar0.z - fVar2) > 1f)
    {
      return 1;
    }
  }
  return 0;
}