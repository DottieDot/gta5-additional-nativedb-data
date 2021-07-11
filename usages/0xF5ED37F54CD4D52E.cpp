// am_cp_collection.ysc @ L9480
void func_174()
{
  int iVar0;
  
  iVar0 = 0;
  while (iVar0 < Local_151.f_709)
  {
    if (HUD::DOES_BLIP_EXIST(vLocal_134[iVar0 /*3*/]))
    {
      HUD::REMOVE_BLIP(&(vLocal_134[iVar0 /*3*/]));
      GRAPHICS::DELETE_CHECKPOINT(vLocal_134[iVar0 /*3*/].f_1);
    }
    iVar0++;
  }
  iVar0 = 0;
  while (iVar0 < 4)
  {
    iLocal_124[iVar0] = 0;
    iVar0++;
  }
}