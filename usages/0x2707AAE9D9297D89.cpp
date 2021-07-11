// freemode.ysc @ L879429
int func_13177(var uParam0, vector3 vParam1)
{
  int iVar0;
  int iVar1;
  int iVar2;
  int iVar3;
  var uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  vector3 vVar9;
  
  HUD::GET_HUD_COLOUR(func_13179(uParam0), &iVar1, &iVar2, &iVar3, &uVar4);
  if (func_13142(uParam0))
  {
    iVar0 = GRAPHICS::CREATE_CHECKPOINT(func_13178(uParam0), vParam1 + Vector(4f, 0f, 0f), vParam1, 7f, iVar1, iVar2, iVar3, 150, 0);
    GRAPHICS::SET_CHECKPOINT_CYLINDER_HEIGHT(iVar0, 7.5f, 7.5f, 100f);
  }
  else
  {
    HUD::GET_HUD_COLOUR(134, &iVar5, &iVar6, &iVar7, &iVar8);
    vVar9 = { func_13144(uParam0, 1) };
    iVar0 = GRAPHICS::CREATE_CHECKPOINT(func_13178(uParam0), vParam1 + Vector(2f, 0f, 0f), vVar9 + Vector(2f, 0f, 0f), (((7.5f * 1f) * 0.66f) * 0.7f), iVar1, iVar2, iVar3, 150, 0);
    GRAPHICS::_SET_CHECKPOINT_ICON_RGBA(iVar0, iVar5, iVar6, iVar7, iVar8);
    GRAPHICS::SET_CHECKPOINT_CYLINDER_HEIGHT(iVar0, 6f, 6f, 100f);
    GRAPHICS::_0xFCF6788FC4860CD4(iVar0);
  }
  return iVar0;
}