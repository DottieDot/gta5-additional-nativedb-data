// mission_triggerer_a.ysc @ L112052
void func_714()
{
  int iVar0;
  
  iLocal_1461 = 0;
  iLocal_1463 = 0;
  fLocal_1464 = 999999f;
  iLocal_1465 = -1;
  iLocal_1462 = -1;
  iVar0 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
  if (!INTERIOR::IS_VALID_INTERIOR(iVar0))
  {
    OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-565026078, 0f, true, false);
    OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-565026078, 1, true, true);
  }
  if (CAM::DOES_CAM_EXIST(iLocal_1466))
  {
    CAM::DESTROY_CAM(iLocal_1466, 0);
  }
  ENTITY::REMOVE_MODEL_HIDE(1276.49f, -1720.06f, 56.47f, 0.5f, joaat("prop_cctv_cam_06a"), false);
  AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_LESTERS_DOGS", 1, 1);
}