// am_mp_arcade.c @ L25507
int func_312(int iParam0)
{
  if (iParam0 != 0)
  {
    if (!HUD::IS_NAMED_RENDERTARGET_LINKED(iParam0))
    {
      HUD::LINK_NAMED_RENDERTARGET(iParam0);
    }
    return 1;
  }
  return 0;
}