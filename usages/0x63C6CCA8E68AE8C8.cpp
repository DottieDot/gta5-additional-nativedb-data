// exile3.ysc @ L134187
void func_902()
{
  int iVar0;
  
  iLocal_191 = VEHICLE::CREATE_MISSION_TRAIN(0, -498.4123f, 4304.3f, 88.40305f, 1);
  VEHICLE::SET_TRAIN_CRUISE_SPEED(iLocal_191, 20f);
  VEHICLE::SET_TRAIN_SPEED(iLocal_191, 20f);
  VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(VEHICLE::GET_TRAIN_CARRIAGE(iLocal_191, 0), 0);
  iVar0 = 0;
  while (iVar0 <= 2)
  {
    ENTITY::SET_ENTITY_LOD_DIST(VEHICLE::GET_TRAIN_CARRIAGE(iLocal_191, iVar0), 500);
    iVar0++;
  }
}