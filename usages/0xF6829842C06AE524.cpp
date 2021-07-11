// extreme2.ysc @ L102190
void func_522()
{
  float fVar0;
  
  func_452(7, 1);
  WATER::GET_WATER_HEIGHT(vLocal_308, &fVar0);
  func_523(&iLocal_307, iLocal_74[3], vLocal_308.x, vLocal_308.y, fVar0, -71.71291f, -1, 0f, 0);
  VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_307, false, true, 0);
  VEHICLE::SET_BOAT_ANCHOR(iLocal_307, true);
  VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_307, 0);
  STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_74[3]);
}