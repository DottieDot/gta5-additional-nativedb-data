// am_mp_arena_garage.ysc @ L350702
void func_5349(bool bParam0)
{
  if (Local_378.f_432 != -1)
  {
    if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_378.f_432))
    {
      if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_378.f_432) < 1f)
      {
        PED::SET_SYNCHRONIZED_SCENE_PHASE(Local_378.f_432, 1f);
      }
    }
    Local_378.f_432 = -1;
  }
  if (ENTITY::DOES_ENTITY_EXIST(Local_378.f_433))
  {
    PED::DELETE_PED(&(Local_378.f_433));
  }
  if (CAM::DOES_CAM_EXIST(Local_378.f_430))
  {
    CAM::RENDER_SCRIPT_CAMS(false, false, 3000, 1, 0, 0);
    CAM::DESTROY_CAM(Local_378.f_430, 0);
  }
  if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE() && MISC::IS_BIT_SET(Global_1676879.f_3, 5))
  {
    func_662(0, 0, 0, 1);
  }
  MISC::CLEAR_BIT(&Local_378, 8);
  if (bParam0)
  {
    MISC::CLEAR_BIT(&(Global_1676879.f_3), 5);
  }
}