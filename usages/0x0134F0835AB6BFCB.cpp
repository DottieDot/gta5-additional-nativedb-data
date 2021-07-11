// am_hot_target.ysc @ L126051
void func_1290()
{
  int iVar0;
  int iVar1;
  int iVar2;
  var uVar3;
  
  if (func_1472())
  {
    return;
  }
  if (HUD::DOES_BLIP_EXIST(iLocal_1475))
  {
    HUD::REMOVE_BLIP(&iLocal_1475);
  }
  if (!HUD::DOES_BLIP_EXIST(iLocal_1477))
  {
    iLocal_1477 = HUD::ADD_BLIP_FOR_COORD(Local_112.f_16);
    HUD::SET_BLIP_COLOUR(iLocal_1477, 5);
    HUD::SHOW_HEIGHT_ON_BLIP(iLocal_1477, true);
    HUD::SET_BLIP_FLASH_TIMER(iLocal_1477, 7000);
    HUD::SET_BLIP_PRIORITY(iLocal_1477, 8);
    HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_1477, "HTV_BLIP2");
    HUD::SET_BLIP_ROUTE(iLocal_1477, true);
    HUD::GET_HUD_COLOUR(12, &iVar0, &iVar1, &iVar2, &uVar3);
    iLocal_1478 = GRAPHICS::CREATE_CHECKPOINT(9, Local_112.f_16 + Vector(3f, 0f, 0f), 0f, 0f, 0f, Local_112.f_20, iVar0, iVar1, iVar2, 75, 0);
  }
}