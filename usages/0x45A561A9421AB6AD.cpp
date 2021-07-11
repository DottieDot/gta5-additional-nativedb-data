// fm_mission_controller.ysc @ L583301
void func_9295(int iParam0, int iParam1, int iParam2)
{
  int iVar0;
  
  iVar0 = func_9296(iParam0, iParam1);
  VEHICLE::SET_VEHICLE_FIXED(iParam2);
  ENTITY::SET_ENTITY_HEALTH(iParam2, iVar0, 0);
  VEHICLE::_SET_VEHICLE_UNK_DAMAGE_MULTIPLIER(iParam2, func_9297(iParam0));
  VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iParam2, (IntToFloat(iVar0) * 1f));
  VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(iParam2, (IntToFloat(iVar0) * 1f));
  if (iVar0 >= 3000)
  {
    VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(iParam2, 0);
  }
}