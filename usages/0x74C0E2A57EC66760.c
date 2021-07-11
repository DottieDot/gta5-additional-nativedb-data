// am_casino_peds.c @ L221106
int func_2175(int iParam0, bool bParam1)
{
  struct<4> Var0;
  bool bVar1;
  
  bVar1 = ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("mp_m_freemode_01");
  Var0.f_3 = -1;
  if (bVar1)
  {
    if (bParam1)
    {
      FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_HEIST_M_SPECIAL_7_0"), &Var0);
    }
    else
    {
      FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_HEIST_M_SPECIAL_6_0"), &Var0);
    }
  }
  else if (bParam1)
  {
    FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_HEIST_F_SPECIAL_11_0"), &Var0);
  }
  else
  {
    FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_HEIST_F_SPECIAL_10_0"), &Var0);
  }
  return Var0.f_3;
}