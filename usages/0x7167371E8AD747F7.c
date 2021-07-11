// am_cp_collection.c @ L14001
void func_350(var uParam0, var uParam1, int iParam2, int iParam3)
{
  int iVar0;
  int iVar1;
  int iVar2;
  var uVar3;
  
  if (*uParam0 != 0)
  {
    *uParam1 = (*uParam1 - 25);
    if (*uParam1 > 0)
    {
      HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &uVar3);
      GRAPHICS::SET_CHECKPOINT_RGBA(*uParam0, iVar0, iVar1, iVar2, *uParam1);
      GRAPHICS::_SET_CHECKPOINT_ICON_RGBA(*uParam0, iVar0, iVar1, iVar2, *uParam1);
    }
    else
    {
      if (HUD::DOES_BLIP_EXIST(*iParam2))
      {
        HUD::REMOVE_BLIP(iParam2);
      }
      GRAPHICS::DELETE_CHECKPOINT(*uParam0);
      *uParam0 = 0;
      MISC::CLEAR_BIT(&(iLocal_124[func_17(iParam3)]), func_16(iParam3));
    }
  }
}