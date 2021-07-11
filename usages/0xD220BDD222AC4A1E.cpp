// am_mp_bunker.ysc @ L18495
void func_275()
{
  int iVar0;
  
  ENTITY::REMOVE_MODEL_HIDE(897.0294f, -3248.417f, -99.29f, 5f, joaat("gr_prop_gr_tunnel_gate"), false);
  ENTITY::REMOVE_MODEL_HIDE(855.74f, -3230.87f, -99f, 5f, 2132191990, false);
  if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
  {
    STREAMING::NEW_LOAD_SCENE_STOP();
  }
  if (CUTSCENE::IS_CUTSCENE_PLAYING())
  {
    CUTSCENE::STOP_CUTSCENE_IMMEDIATELY();
    CUTSCENE::REMOVE_CUTSCENE();
  }
  func_289();
  func_278(1, 1, 0, 1);
  NETWORK::NETWORK_SET_VOICE_ACTIVE(1);
  MISC::CLEAR_BIT(&(Local_2406[NETWORK::PARTICIPANT_ID_TO_INT() /*7*/]), 2);
  func_277();
  func_276(Local_2407.f_1001, 0);
  Local_2407.f_989 = 0;
  iVar0 = iLocal_3200;
  if (ENTITY::DOES_ENTITY_EXIST(iVar0))
  {
    ENTITY::DELETE_ENTITY(&iVar0);
  }
  Local_2407.f_1472 = 0;
}