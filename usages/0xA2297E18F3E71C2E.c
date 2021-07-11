// fm_mission_controller.c @ L361459
void func_5201(int iParam0, int iParam1)
{
  vector3 vVar0;
  vector3 vVar1;
  float fVar2;
  
  if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
  {
    MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)), &vVar0, &vVar1);
    fVar2 = (vVar1.z - vVar0.z);
    CAM::SET_GAMEPLAY_VEHICLE_HINT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0f, fLocal_159, 0f, 1, iParam1, iParam0, 0);
    CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETY((fLocal_156 * fVar2));
    CAM::_SET_GAMEPLAY_HINT_ANGLE(fLocal_157);
    CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETZ(fLocal_158);
  }
}