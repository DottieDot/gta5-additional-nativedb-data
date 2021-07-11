// benchmark.ysc @ L2085
void func_79()
{
  vector3 vVar0;
  vector3 vVar1;
  
  if ((iLocal_52 == 4 && iLocal_59 > -1) && (MISC::GET_GAME_TIMER() - iLocal_67) > (iLocal_59 - 5000))
  {
    if (!func_536(iLocal_62))
    {
      vVar0 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(VEHICLE::GET_VEHICLE_RECORDING_ID(iLocal_64, sLocal_65), fLocal_66) };
      vVar1 = { VEHICLE::GET_ROTATION_OF_VEHICLE_RECORDING_ID_AT_TIME(VEHICLE::GET_VEHICLE_RECORDING_ID(iLocal_64, sLocal_65), fLocal_66) };
      iLocal_62 = VEHICLE::CREATE_VEHICLE(iLocal_63, vVar0, vVar1.z, true, true, false);
      ENTITY::SET_ENTITY_INVINCIBLE(iLocal_62, true);
      VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_62, true, true, 0);
      VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(iLocal_62, false);
      VEHICLE::SET_VEHICLE_CAN_BREAK(iLocal_62, false);
      ENTITY::SET_ENTITY_PROOFS(iLocal_62, true, true, true, true, true, false, 0, false);
      VEHICLE::CONTROL_LANDING_GEAR(iLocal_62, 3);
      ENTITY::SET_ENTITY_LOD_DIST(iLocal_62, 5000);
      VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_62, iLocal_64, sLocal_65, 1);
      if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_62))
      {
        VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_62, fLocal_66);
      }
      PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_62, -1);
      iLocal_59 = -1;
      fLocal_113 = 2f;
      fLocal_114 = 2f;
      fLocal_115 = 1f;
    }
  }
}