// agency_heist3a.ysc @ L5006
void func_17()
{
  int iVar0;
  
  iVar0 = 0;
  while (iVar0 <= (Local_381 - 1))
  {
    if (ENTITY::DOES_ENTITY_EXIST(Local_381[iVar0 /*32*/]))
    {
      PED::DELETE_PED(&(Local_381[iVar0 /*32*/]));
    }
    if (HUD::DOES_BLIP_EXIST(Local_381[iVar0 /*32*/].f_2))
    {
      HUD::REMOVE_BLIP(&(Local_381[iVar0 /*32*/].f_2));
    }
    func_19(&(Local_381[iVar0 /*32*/].f_3));
    iVar0++;
  }
  iVar0 = 0;
  while (iVar0 <= (Local_348 - 1))
  {
    func_18(&(Local_348[iVar0 /*32*/]), 1);
    iVar0++;
  }
  if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_2481))
  {
    GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_2481, 0);
  }
  func_18(&(iLocal_2203[0]), 1);
  func_18(&(iLocal_2203[1]), 1);
}