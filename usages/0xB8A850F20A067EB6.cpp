// am_contact_requests.ysc @ L53050
void func_778(int iParam0, int iParam1)
{
  GRAPHICS::SET_SCRIPT_GFX_ALIGN(iParam1, 84);
  if (iParam1 == 82)
  {
    GRAPHICS::DRAW_SCALEFORM_MOVIE(*iParam0, 0.14f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
  }
  else if (iParam1 == 76)
  {
    GRAPHICS::DRAW_SCALEFORM_MOVIE(*iParam0, 0.14f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
  }
  GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}