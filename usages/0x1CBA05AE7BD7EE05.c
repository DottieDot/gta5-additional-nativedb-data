// fm_mission_controller.c @ L227826
void func_2692()
{
  if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("InchPickup"))
  {
    GRAPHICS::ANIMPOSTFX_STOP("InchPickup");
  }
  else if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("PPOrange"))
  {
    GRAPHICS::ANIMPOSTFX_STOP("PPOrange");
  }
  else if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("PPPurple"))
  {
    GRAPHICS::ANIMPOSTFX_STOP("PPPurple");
  }
  else if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("PPGreen"))
  {
    GRAPHICS::ANIMPOSTFX_STOP("PPGreen");
  }
  else if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("PPPink"))
  {
    GRAPHICS::ANIMPOSTFX_STOP("PPPink");
  }
  else if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("DeadlineNeon"))
  {
    GRAPHICS::ANIMPOSTFX_STOP("DeadlineNeon");
  }
  else if (GRAPHICS::GET_TIMECYCLE_MODIFIER_INDEX() != -1)
  {
    GRAPHICS::_0x1CBA05AE7BD7EE05(1f);
  }
}