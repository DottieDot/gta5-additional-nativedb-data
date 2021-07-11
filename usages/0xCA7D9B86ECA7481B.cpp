// am_ammo_drop.ysc @ L2317
int func_69()
{
  STREAMING::REQUEST_PTFX_ASSET();
  if (STREAMING::HAS_PTFX_ASSET_LOADED())
  {
    return 1;
  }
  return 0;
}