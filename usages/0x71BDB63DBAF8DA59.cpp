// golf.ysc @ L126660
void func_1202(var uParam0, var uParam1)
{
  int iVar0;
  bool bVar1;
  var uVar2;
  
  iVar0 = func_524(uParam0);
  bVar1 = func_896(uParam1, uParam0, 1);
  uVar2 = iVar0 + 1;
  HUD::SET_MINIMAP_GOLF_COURSE(uVar2);
  HUD::TOGGLE_STEALTH_RADAR(0);
  if (HUD::DOES_BLIP_EXIST(uParam1->f_56))
  {
    HUD::REMOVE_BLIP(&(uParam1->f_56));
  }
  uParam1->f_56 = func_1209(func_532(uParam1, iVar0), 0);
  HUD::SET_BLIP_SPRITE(uParam1->f_56, 358);
  func_1203(iVar0, bVar1);
  HUD::SET_RADAR_ZOOM(SYSTEM::CEIL((1100f * fLocal_519)));
  HUD::LOCK_MINIMAP_POSITION(fLocal_517, fLocal_518);
  HUD::LOCK_MINIMAP_ANGLE(iLocal_520);
}