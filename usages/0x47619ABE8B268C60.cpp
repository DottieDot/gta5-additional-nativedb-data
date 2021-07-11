// director_mode.ysc @ L17361
int func_247(var uParam0)
{
  float fVar0;
  float fVar1;
  
  if (uParam0->f_105)
  {
    fVar0 = TASK::GET_PHONE_GESTURE_ANIM_CURRENT_TIME(uParam0->f_121);
    fVar1 = TASK::GET_PHONE_GESTURE_ANIM_TOTAL_TIME(uParam0->f_121);
  }
  else
  {
    fVar0 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(uParam0->f_121, func_362(uParam0, 0, 0), &(uParam0->f_123.f_225));
    fVar1 = ENTITY::GET_ENTITY_ANIM_TOTAL_TIME(uParam0->f_121, func_362(uParam0, 0, 0), &(uParam0->f_123.f_225));
  }
  if (func_251(uParam0, 1, uParam0->f_123.f_378, &(uParam0->f_109), uParam0->f_108 > 0) || fVar1 < 0.1f)
  {
    return 1;
  }
  if (func_248(uParam0, 1))
  {
    return 1;
  }
  return 0;
}