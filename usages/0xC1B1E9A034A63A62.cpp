// agency_heist2.ysc @ L776
void func_2(int iParam0)
{
  iLocal_179 = iParam0;
  if (HUD::DOES_BLIP_EXIST(iLocal_74))
  {
    HUD::REMOVE_BLIP(&iLocal_74);
  }
  if (HUD::DOES_BLIP_EXIST(iLocal_76))
  {
    HUD::REMOVE_BLIP(&iLocal_76);
  }
  iLocal_149 = 0;
  SYSTEM::SETTIMERA(0);
}