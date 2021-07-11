// fm_capture_creator.c @ L53412
void func_659(int iParam0, int iParam1, bool bParam2, var uParam3)
{
  int iVar0;
  int iVar1;
  int iVar2;
  var uVar3;
  vector3 vVar4;
  
  if (*uParam3)
  {
    HUD::GET_HUD_COLOUR(23, &iVar0, &iVar1, &iVar2, &uVar3);
    if (bParam2)
    {
      iParam0->f_227[iParam1] = func_660(&(iParam0->f_194), 32);
    }
    if (iParam0->f_227[iParam1] != -1)
    {
      vVar4 = { Global_4456448.f_60691[iParam1 /*219*/] + Vector(0.2f, 0f, 0f) };
      MISC::GET_GROUND_Z_FOR_3D_COORD(vVar4, &(vVar4.f_2), 0, 0);
      iParam0->f_194[iParam0->f_227[iParam1]] = GRAPHICS::ADD_DECAL(9118, vVar4, 0f, 0f, -1f, 0f, 1f, 0f, 2f, 2f, (SYSTEM::TO_FLOAT(iVar0) / 255f), (SYSTEM::TO_FLOAT(iVar1) / 255f), (SYSTEM::TO_FLOAT(iVar2) / 255f), 1f, -1f, 1, 0, 0);
      *uParam3 = 0;
    }
  }
}