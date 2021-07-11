// fm_mission_controller.ysc @ L625899
float func_10019(int iParam0, bool bParam1)
{
  float fVar0;
  float fVar1;
  float fVar2;
  vector3 vVar3;
  float fVar4;
  
  fVar1 = VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(iParam0);
  if (!bParam1)
  {
    fVar2 = ENTITY::GET_ENTITY_SPEED(iParam0);
    fVar0 = (fVar2 / fVar1);
  }
  else
  {
    vVar3 = { NETWORK::_0x33DE49EDF4DDE77A(iParam0) };
    fVar4 = ((MISC::ABSF(vVar3.x) + MISC::ABSF(vVar3.y)) + MISC::ABSF(vVar3.z));
    fVar0 = (fVar4 / fVar1);
  }
  return fVar0;
}