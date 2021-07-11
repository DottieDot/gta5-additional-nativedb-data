// act_cinema.c @ L6674
int func_141(int iParam0, int iParam1)
{
  switch (iParam0)
  {
    case joaat("mp_m_freemode_01"):
      if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam1, joaat("COWBOY_BOOTS"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam1, joaat("HAS_ALT_VERSION"), 0))
      {
        return 1;
      }
      break;
    
    case joaat("mp_f_freemode_01"):
      if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam1, joaat("COWBOY_BOOTS"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam1, joaat("HAS_ALT_VERSION"), 0))
      {
        return 1;
      }
      break;
  }
  return 0;
}