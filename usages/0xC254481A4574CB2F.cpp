// am_hold_up.ysc @ L7706
void func_229()
{
  iLocal_114 = NETWORK::_NETWORK_CONVERT_SYNCHRONISED_SCENE_TO_SYNCHRONIZED_SCENE(Local_103.f_29);
  if (iLocal_114 != -1)
  {
    if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_114))
    {
      NETWORK::NETWORK_STOP_SYNCHRONISED_SCENE(Local_103.f_29);
    }
  }
}