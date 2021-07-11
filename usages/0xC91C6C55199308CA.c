// fm_capture_creator.c @ L185700
void func_1513(var uParam0, int iParam1)
{
  float fVar0;
  float fVar1;
  vector3 vVar2;
  
  vVar2 = { CAM::GET_CAM_COORD(*uParam0) };
  if (ENTITY::DOES_ENTITY_EXIST(iParam1))
  {
    if (func_1414(vVar2, iParam1, 3f))
    {
      fVar0 = func_1515(iParam1);
      fVar1 = func_1514(iParam1);
      if (fVar0 >= (vVar2.z - 3f) && fVar1 < (vVar2.z + 3f))
      {
        uParam0->f_2 = { vVar2.x, vVar2.y, (fVar0 + 3f) };
        CAM::SET_CAM_COORD(*uParam0, uParam0->f_2);
        CAM::SET_FLY_CAM_COORD_AND_CONSTRAIN(*uParam0, uParam0->f_2);
      }
    }
  }
}