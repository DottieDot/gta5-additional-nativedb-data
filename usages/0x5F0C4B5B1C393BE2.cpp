// am_mp_nightclub.ysc @ L340241
int func_5331()
{
  Local_413.f_1314 = 0;
  while (Local_413.f_1314 < 3)
  {
    GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(Local_413.f_41[Local_413.f_1314 /*4*/].f_1, "FADE", 1f, 0);
    Local_413.f_1314++;
  }
  MISC::CLEAR_BIT(&(Local_413.f_3), 9);
  return 1;
}