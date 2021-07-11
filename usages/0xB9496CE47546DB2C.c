// am_pi_menu.c @ L216817
int func_1931(int iParam0)
{
  int iVar0;
  
  iVar0 = FILES::GET_HASH_NAME_FOR_PROP(iParam0, 0, PED::GET_PED_PROP_INDEX(iParam0, 0), PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, 0));
  if (func_65(iParam0))
  {
    if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("ALT_HELMET"), 1))
    {
      return 1;
    }
    return 0;
  }
  return PED::_IS_PED_HELMET_UNK(iParam0);
}