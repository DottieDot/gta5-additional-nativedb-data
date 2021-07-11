// am_mp_drone.ysc @ L1739
void func_81()
{
  if (func_155())
  {
    return;
  }
  if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_117.f_121) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_117.f_121), 0))
  {
    if (CAM::DOES_CAM_EXIST(Local_117.f_131) && CAM::IS_CAM_RENDERING(Local_117.f_131))
    {
      if (!func_27())
      {
        func_146();
        func_108();
      }
      else
      {
        func_90();
        func_84();
      }
      RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
      func_83(1);
      func_82(2);
    }
  }
}