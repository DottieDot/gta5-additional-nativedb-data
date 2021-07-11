// am_mp_yacht.c @ L7153
void func_114(int iParam0)
{
  int iVar0;
  int iVar1;
  int iVar2;
  var uVar3;
  
  if (func_115() == 0)
  {
    if (uLocal_783[iParam0] == 0f)
    {
      MISC::GET_GROUND_Z_FOR_3D_COORD(Global_3934119[iLocal_629 /*2012*/].f_38[iParam0 /*27*/].f_12 + Vector(0.5f, 0f, 0f), &(uLocal_783[iParam0]), 0, 0);
    }
    HUD::GET_HUD_COLOUR(9, &iVar0, &iVar1, &iVar2, &uVar3);
    GRAPHICS::_DRAW_MARKER_2(1, Vector(uLocal_783[iParam0], Global_3934119[iLocal_629 /*2012*/].f_38[iParam0 /*27*/].f_12.f_1, Global_3934119[iLocal_629 /*2012*/].f_38[iParam0 /*27*/].f_12) + Vector(-0.25f, 0f, 0f), 0f, 0f, 0f, 0f, 0f, 0f, 0.75f, 0.75f, 0.75f, iVar0, iVar1, iVar2, 255, 0, 0, 2, 0, 0, 0, false, 0, false);
  }
}