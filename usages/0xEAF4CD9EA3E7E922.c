// am_casino_peds.c @ L85151
void func_639(int iParam0, int iParam1, int iParam2)
{
  if (func_15(iParam2->f_217[func_309(iParam0) /*71*/]))
  {
    if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam2->f_217[func_309(iParam0) /*71*/], MISC::GET_HASH_KEY("HideChips")))
    {
      func_619(iParam0, iParam1, iParam2);
    }
  }
}