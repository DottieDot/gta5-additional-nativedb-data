// fm_capture_creator.c @ L159828
void func_1140(var uParam0, bool bParam1)
{
  int iVar0;
  
  if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_2))
  {
    PED::DELETE_PED(&(uParam0->f_2));
  }
  iVar0 = 0;
  while (iVar0 <= 79)
  {
    if (HUD::DOES_BLIP_EXIST(uParam0->f_3[iVar0]))
    {
      HUD::REMOVE_BLIP(&(uParam0->f_3[iVar0]));
    }
    if (GRAPHICS::IS_DECAL_ALIVE(uParam0->f_362[iVar0]))
    {
      GRAPHICS::REMOVE_DECAL(uParam0->f_362[iVar0]);
    }
    iVar0++;
  }
  if (bParam1)
  {
    Global_4456448.f_142773 = 0;
    iVar0 = 0;
    while (iVar0 <= 59)
    {
      Global_4456448.f_142780[iVar0 /*21*/] = { 0f, 0f, 0f };
      Global_4456448.f_142780[iVar0 /*21*/].f_3 = 0f;
      iVar0++;
    }
  }
}