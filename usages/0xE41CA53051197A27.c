// code_controller.c @ L36435
int func_410(int iParam0)
{
  int iVar0;
  
  iVar0 = iParam0;
  if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
  {
    return 0;
  }
  if (HUD::DOES_BLIP_EXIST(Global_31111[iVar0 /*23*/].f_19))
  {
    if (HUD::IS_BLIP_ON_MINIMAP(Global_31111[iVar0 /*23*/].f_19))
    {
      return 1;
    }
  }
  return 0;
}