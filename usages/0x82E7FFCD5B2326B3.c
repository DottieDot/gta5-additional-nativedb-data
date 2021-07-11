// am_mp_arcade.c @ L327947
void func_5026()
{
  float fVar0;
  float fVar1;
  char* sVar2;
  
  fVar0 = SYSTEM::VDIST2(func_4224(), func_673(PLAYER::PLAYER_ID()));
  fVar1 = 1f;
  if (fVar0 < 32f)
  {
    fVar1 = (fVar0 / 32f);
    GRAPHICS::SET_TIMECYCLE_MODIFIER_STRENGTH(fVar1);
    if (MISC::IS_BIT_SET(Local_823.f_1, 2))
    {
      MISC::CLEAR_BIT(&(Local_823.f_1), 2);
    }
    sVar2 = func_4220();
    if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
    {
      GRAPHICS::SET_TIMECYCLE_MODIFIER(sVar2);
    }
  }
  else if (!MISC::IS_BIT_SET(Local_823.f_1, 2))
  {
    MISC::SET_BIT(&(Local_823.f_1), 2);
    GRAPHICS::SET_TIMECYCLE_MODIFIER_STRENGTH(1f);
  }
}