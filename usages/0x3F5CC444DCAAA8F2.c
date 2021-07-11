// fm_mission_controller.c @ L905838
void func_14669()
{
  int iVar0;
  int iVar1;
  
  if (func_3117())
  {
    HUD::SET_HEALTH_HUD_DISPLAY_VALUES(-1, -1, 1);
    iVar0 = 0;
    iVar0 = 0;
    while (iVar0 <= 31)
    {
      if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
      {
        iVar1 = func_10245(iVar0);
        if (HUD::IS_MP_GAMER_TAG_ACTIVE(iVar1))
        {
          HUD::_SET_MP_GAMER_HEALTH_BAR_DISPLAY(iVar1, 0);
        }
      }
      iVar0++;
    }
  }
}