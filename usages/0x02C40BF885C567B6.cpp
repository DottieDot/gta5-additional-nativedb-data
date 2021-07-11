// am_hold_up.ysc @ L7102
int func_221(float fParam0)
{
  iLocal_114 = NETWORK::_NETWORK_CONVERT_SYNCHRONISED_SCENE_TO_SYNCHRONIZED_SCENE(Local_103.f_29);
  if (iLocal_114 != -1)
  {
    if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_114))
    {
      if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_114) >= fParam0)
      {
        return 1;
      }
    }
  }
  return 0;
}