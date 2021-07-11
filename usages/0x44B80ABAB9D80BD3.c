// fm_mission_controller.c @ L554679
int func_8800()
{
  if (GRAPHICS::GET_USINGNIGHTVISION())
  {
    return 2;
  }
  if (GRAPHICS::GET_USINGSEETHROUGH())
  {
    return 3;
  }
  return 1;
}