// fm_mission_controller.ysc @ L646607
void func_10388(bool bParam0)
{
  if (GRAPHICS::GET_TIMECYCLE_TRANSITION_MODIFIER_INDEX() > -1 || GRAPHICS::_0x98D18905BF723B99())
  {
    return;
  }
  if (bParam0)
  {
    GRAPHICS::SET_TRANSITION_TIMECYCLE_MODIFIER("spectator6", 10f);
    MISC::SET_BIT(&iLocal_9578, 1);
    CAM::SHAKE_GAMEPLAY_CAM("DRUNK_SHAKE", 1f);
  }
  else
  {
    GRAPHICS::_0x1CBA05AE7BD7EE05(10f);
    MISC::CLEAR_BIT(&iLocal_9578, 1);
    CAM::STOP_GAMEPLAY_CAM_SHAKING(false);
  }
}