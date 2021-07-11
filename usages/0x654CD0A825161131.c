// am_casino_peds.c @ L182264
int func_2050(int iParam0)
{
  STREAMING::REQUEST_ANIM_DICT(iParam0->f_3);
  if (!STREAMING::HAS_ANIM_DICT_LOADED(iParam0->f_3))
  {
    return 0;
  }
  if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam0->f_4))
  {
    STREAMING::REQUEST_ANIM_DICT(iParam0->f_4);
    if (!STREAMING::HAS_ANIM_DICT_LOADED(iParam0->f_4))
    {
      return 0;
    }
  }
  if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_2))
  {
    func_2051(&(iParam0->f_2), PLAYER::PLAYER_ID(), 1, 1);
    return 0;
  }
  if ((func_15(iParam0->f_2) && PED::_HAS_STREAMED_PED_ASSETS_LOADED(iParam0->f_2)) && PED::HAS_PED_HEAD_BLEND_FINISHED(iParam0->f_2))
  {
    ENTITY::SET_ENTITY_VISIBLE(iParam0->f_2, true, 0);
  }
  else
  {
    return 0;
  }
  return 1;
}