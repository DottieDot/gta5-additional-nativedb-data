// director_mode.c @ L17318
int func_244(var uParam0)
{
  if (uParam0->f_123.f_376)
  {
    if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_121, 0))
    {
      if (uParam0->f_105)
      {
        if (uParam0->f_103 == 2)
        {
          if (func_245(uParam0->f_121) && TASK::IS_PLAYING_PHONE_GESTURE_ANIM(uParam0->f_121))
          {
            return 1;
          }
        }
      }
      else if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_121, func_362(uParam0, 0, 0), &(uParam0->f_123.f_241), 3))
      {
        return 1;
      }
    }
  }
  return 0;
}