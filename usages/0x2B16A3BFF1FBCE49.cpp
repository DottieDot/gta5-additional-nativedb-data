// agency_heist3b.ysc @ L130985
void func_909(int iParam0, int iParam1, int iParam2)
{
  struct<14> Var0;
  
  if (iParam1 == 12 || iParam1 == 13)
  {
    return;
  }
  Var0 = { func_134(ENTITY::GET_ENTITY_MODEL(iParam0), iParam1, iParam2, -1) };
  if (iParam1 == 14)
  {
    if (Var0.f_3 != -1 && Var0.f_3 != 255)
    {
      PED::SET_PED_PRELOAD_PROP_DATA(iParam0, Var0.f_12, Var0.f_3, Var0.f_4);
    }
  }
  else if (Var0.f_3 != -1 && Var0.f_4 != -1)
  {
    PED::SET_PED_PRELOAD_VARIATION_DATA(iParam0, func_147(iParam1), Var0.f_3, Var0.f_4);
  }
}