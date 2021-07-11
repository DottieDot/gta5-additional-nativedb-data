// fmmc_launcher.ysc @ L383724
void func_5916(int iParam0)
{
  int iVar0;
  int iVar1;
  struct<5> Var2;
  
  PED::SET_PED_COMPONENT_VARIATION(iParam0, 1, 0, 0, 0);
  iVar0 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1), PED::GET_PED_TEXTURE_VARIATION(iParam0, 1));
  iVar1 = FILES::GET_HASH_NAME_FOR_PROP(iParam0, 1, PED::GET_PED_PROP_INDEX(iParam0, 1), PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, 1));
  if (iVar0 == joaat("DLC_MP_ARENA_M_BERD_13_0") || iVar0 == joaat("DLC_MP_ARENA_F_BERD_13_0"))
  {
    if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("ARENA_DRAW_0"), 1))
    {
      FILES::INIT_SHOP_PED_PROP(&Var2);
      if (iVar0 == joaat("DLC_MP_ARENA_M_BERD_13_0"))
      {
        FILES::GET_SHOP_PED_QUERY_PROP(joaat("DLC_MP_ARENA_M_PEYES_0_0"), &Var2);
      }
      else
      {
        FILES::GET_SHOP_PED_QUERY_PROP(joaat("DLC_MP_ARENA_F_PEYES_0_0"), &Var2);
      }
      PED::SET_PED_PROP_INDEX(iParam0, 1, Var2.f_3, Var2.f_4, false);
    }
  }
  else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("ARENA_DRAW_0"), 1))
  {
    PED::CLEAR_PED_PROP(iParam0, 1);
  }
}