// am_contact_requests.ysc @ L64632
void func_1064(bool bParam0)
{
  float fVar0;
  float fVar1;
  float fVar2;
  int iVar3;
  
  fVar2 = (0.034722f / 2f);
  if (bParam0)
  {
    iVar3 = 48;
  }
  else
  {
    iVar3 = 210;
  }
  fVar0 = Global_22347;
  fVar1 = Global_22350.f_5730;
  GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
  GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
  if (Global_4268347 == -2)
  {
    func_295(fVar0, fVar1, Global_22349, fVar2, 255, 255, 255, iVar3);
  }
  else if (Global_4268347 == -3)
  {
    func_295(fVar0, (fVar1 + fVar2), Global_22349, fVar2, 255, 255, 255, iVar3);
  }
  GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}