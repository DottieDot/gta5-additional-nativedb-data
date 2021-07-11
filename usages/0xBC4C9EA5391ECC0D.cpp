// am_mp_arena_garage.ysc @ L292194
void func_4232(var uParam0)
{
  if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_2) || HUD::IS_HUD_COMPONENT_ACTIVE(19))
  {
    if (MISC::ARE_STRINGS_EQUAL(uParam0->f_2, "MP_HTRUCK_T_1e"))
    {
      if (func_4233())
      {
        HUD::CLEAR_HELP(1);
      }
    }
    else if (func_755(uParam0->f_2))
    {
      HUD::CLEAR_HELP(1);
    }
  }
}