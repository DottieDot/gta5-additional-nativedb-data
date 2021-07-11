// lester1.c @ L10082
void func_83(var uParam0, float fParam1)
{
  if (uParam0->f_2)
  {
    if (*uParam0 == 0)
    {
      if (!func_84(uParam0->f_4) && uParam0->f_3 != 0)
      {
        ENTITY::STOP_SYNCHRONIZED_MAP_ENTITY_ANIM(uParam0->f_4, 1f, uParam0->f_3, fParam1);
      }
    }
    else if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_8) && !MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_9))
    {
      if (ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, uParam0->f_8, uParam0->f_9, 3))
      {
        ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(*uParam0, fParam1, 1);
      }
    }
    uParam0->f_3 = 0;
    uParam0->f_8 = "";
    uParam0->f_9 = "";
    uParam0->f_2 = 0;
  }
}