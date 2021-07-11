// fm_mission_controller.ysc @ L764941
int func_12554(int iParam0, int iParam1)
{
  vector3 vVar0;
  float fVar1;
  float fVar2;
  
  if (func_382(iParam0))
  {
    vVar0 = { func_340(ENTITY::GET_ENTITY_COORDS(iParam1, true) - ENTITY::GET_ENTITY_COORDS(iParam0, true)) };
    fVar1 = func_1032(ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0), vVar0);
    fVar2 = func_9200(PED::_GET_PED_VISUAL_FIELD_CENTER_ANGLE(iParam0));
    return fVar1 >= (1f - fVar2);
  }
  return 0;
}