// am_casino_peds.ysc @ L66736
void func_520(int iParam0, int iParam1, var uParam2)
{
  int iVar0;
  
  if (INTERIOR::IS_VALID_INTERIOR(iParam1->f_9093) && INTERIOR::IS_INTERIOR_READY(iParam1->f_9093))
  {
    if (func_15(iParam1->f_217[iParam0 /*71*/]))
    {
      iVar0 = func_521(iParam1, uParam2, iParam0);
      if (iVar0 != 0)
      {
        INTERIOR::FORCE_ROOM_FOR_ENTITY(iParam1->f_217[iParam0 /*71*/], iParam1->f_9093, iVar0);
      }
    }
  }
}