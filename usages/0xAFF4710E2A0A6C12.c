// gb_biker_contraband_sell.c @ L148748
void func_1947(int iParam0, int iParam1)
{
  if (func_23())
  {
    if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0, 0))
    {
      if (!MISC::IS_BIT_SET(Local_268.f_982, iParam1))
      {
        PED::DROP_AMBIENT_PROP(iParam0);
        func_315(iParam0, func_317(1), 1);
        func_1475(iParam0, "GENERIC_THANKS", 0);
        if (func_23())
        {
          ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iParam0);
        }
        MISC::SET_BIT(&(Local_268.f_982), iParam1);
      }
    }
  }
}