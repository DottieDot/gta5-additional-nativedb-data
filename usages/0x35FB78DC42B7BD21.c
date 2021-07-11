// am_armwrestling.c @ L6250
void func_73(bool bParam0)
{
  if (bParam0)
  {
    GRAPHICS::ANIMPOSTFX_STOP("MP_race_crash");
    if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("CrossLine"))
    {
      GRAPHICS::ANIMPOSTFX_STOP("CrossLine");
    }
    if (GRAPHICS::GET_REQUESTINGNIGHTVISION())
    {
      GRAPHICS::ANIMPOSTFX_PLAY("DeathFailMPDark", 0, 0);
    }
    else
    {
      GRAPHICS::ANIMPOSTFX_PLAY("DeathFailMPIn", 0, 0);
    }
    CAM::_SET_CAM_EFFECT(1);
    Global_2437549.f_2703 = NETWORK::GET_NETWORK_TIME();
    Global_2437549.f_2703.f_1 = NETWORK::GET_NETWORK_TIME();
    MISC::SET_BIT(&(Global_2437549.f_2703.f_2), 0);
  }
  else
  {
    MISC::CLEAR_BIT(&(Global_2437549.f_2703.f_2), 0);
  }
}