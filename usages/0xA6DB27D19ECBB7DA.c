// abigail2.c @ L454
void func_6(int iParam0)
{
  if (HUD::DOES_BLIP_EXIST(*iParam0))
  {
    HUD::SET_BLIP_ROUTE(*iParam0, false);
    HUD::REMOVE_BLIP(iParam0);
  }
}