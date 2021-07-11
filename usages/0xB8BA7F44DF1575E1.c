// am_mp_arcade.c @ L327341
void func_4998(int iParam0)
{
  if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), iParam0->f_6, iParam0->f_9, iParam0->f_14, 0, true, 0))
  {
    if (!NETWORK::NETWORK_IS_SCRIPT_ACTIVE("mp_bed_high", iParam0->f_13, 1, 0))
    {
      SCRIPT::REQUEST_SCRIPT("mp_bed_high");
      if (SCRIPT::HAS_SCRIPT_LOADED("mp_bed_high"))
      {
        SYSTEM::START_NEW_SCRIPT_WITH_ARGS("mp_bed_high", iParam0, 16, 1424);
        SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("mp_bed_high");
      }
    }
  }
}