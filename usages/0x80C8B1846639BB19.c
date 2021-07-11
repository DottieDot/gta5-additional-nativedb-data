// altruist_cult.c @ L926
void func_12(int iParam0, int iParam1)
{
  if (iParam0 == 1)
  {
    func_14(0, 0);
    GRAPHICS::ANIMPOSTFX_PLAY("DeathFailOut", 0, 0);
    MISC::SET_BIT(&iLocal_48, 1);
    func_13(1, 2, 0);
    CAM::_SET_CAM_EFFECT(2);
  }
  else
  {
    if (MISC::IS_BIT_SET(iLocal_48, 1) || iParam1)
    {
      GRAPHICS::ANIMPOSTFX_STOP("DeathFailOut");
      func_13(0, 2, 1);
      CAM::_SET_CAM_EFFECT(0);
    }
    MISC::CLEAR_BIT(&iLocal_48, 1);
  }
}