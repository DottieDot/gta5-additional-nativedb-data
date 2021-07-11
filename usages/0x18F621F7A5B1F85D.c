// heli_gun.c @ L8847
void func_213()
{
  if (iLocal_133 != 0)
  {
    GRAPHICS::SET_NIGHTVISION(false);
    if (GRAPHICS::GET_USINGSEETHROUGH())
    {
      GRAPHICS::_SEETHROUGH_SET_MAX_THICKNESS(Global_1661834);
      Global_1661834 = -1f;
      GRAPHICS::SET_SEETHROUGH(false);
    }
    iLocal_133 = 0;
  }
}