// finale_heist_prepd.c @ L18386
void func_348(vector3 vParam0, float fParam1)
{
  iLocal_51 = VEHICLE::CREATE_MISSION_TRAIN(7, vParam0, 0);
  VEHICLE::SET_TRAIN_CRUISE_SPEED(iLocal_51, fParam1);
  VEHICLE::SET_TRAIN_SPEED(iLocal_51, fParam1);
  ENTITY::SET_ENTITY_LOD_DIST(iLocal_51, 3000);
  VEHICLE::SET_VEHICLE_LOD_MULTIPLIER(iLocal_51, 100f);
}