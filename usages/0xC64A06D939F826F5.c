// am_mp_nightclub.c @ L272180
void func_4042(bool bParam0)
{
  var uVar0;
  float fVar1;
  int iVar2;
  
  if (MISC::IS_BIT_SET(Local_413.f_4, 20))
  {
    if (AUDIO::_0xC64A06D939F826F5(&fVar1, &uVar0, &iVar2))
    {
      if (Local_413.f_2085 != iVar2)
      {
        MISC::SET_BIT(&(Local_413.f_5), 6);
        Local_413.f_2087 = (fVar1 * 1000f);
        Local_413.f_2085 = iVar2;
      }
      else
      {
        MISC::CLEAR_BIT(&(Local_413.f_5), 6);
      }
    }
    if (bParam0)
    {
      Local_413.f_2087 = 450f;
    }
  }
}