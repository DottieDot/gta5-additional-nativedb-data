// am_contact_requests.c @ L64745
void func_1068(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4)
{
  GRAPHICS::SET_SCRIPT_GFX_ALIGN(iParam4, 84);
  if (iParam4 == 82)
  {
    *uParam0 = 0.14f;
    *uParam1 = 0.3f;
    *uParam2 = 0.28f;
    *uParam3 = 0.6f;
  }
  else if (iParam4 == 76)
  {
    *uParam0 = 0.14f;
    *uParam1 = 0.3f;
    *uParam2 = 0.28f;
    *uParam3 = 0.6f;
  }
  GRAPHICS::_GET_SCRIPT_GFX_POSITION(*uParam0, *uParam1, uParam0, uParam1);
  GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}