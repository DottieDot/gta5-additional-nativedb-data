// agency_heist3a.c @ L5074
void func_19(int iParam0)
{
  bool bVar0;
  struct<8> Var1;
  
  if (HUD::DOES_BLIP_EXIST(*iParam0))
  {
    HUD::REMOVE_BLIP(iParam0);
    bVar0 = true;
  }
  if (HUD::DOES_BLIP_EXIST(iParam0->f_1))
  {
    HUD::REMOVE_BLIP(&(iParam0->f_1));
    bVar0 = true;
  }
  if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_7))
  {
    if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_7, 0))
    {
      if (HUD::DOES_PED_HAVE_AI_BLIP(iParam0->f_7))
      {
        HUD::SET_PED_HAS_AI_BLIP(iParam0->f_7, 0);
      }
    }
    bVar0 = true;
  }
  if (bVar0)
  {
    *iParam0 = { Var1 };
  }
}