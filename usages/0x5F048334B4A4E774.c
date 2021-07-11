// am_mp_nightclub.c @ L25993
void func_369()
{
  if (!ENTITY::DOES_ENTITY_EXIST(Local_413.f_2070))
  {
    STREAMING::REQUEST_MODEL(joaat("ba_prop_battle_lights_club_dancefloor"));
    if (STREAMING::HAS_MODEL_LOADED(joaat("ba_prop_battle_lights_club_dancefloor")))
    {
      Local_413.f_2070 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("ba_prop_battle_lights_club_dancefloor"), Local_413.f_71, false, false, false);
      if (func_59(Local_413.f_436))
      {
        if (ENTITY::DOES_ENTITY_EXIST(Local_413.f_2070))
        {
          OBJECT::_SET_OBJECT_LIGHT_COLOR(Local_413.f_2070, 1, 202, 28, 255);
        }
      }
      else if (ENTITY::DOES_ENTITY_EXIST(Local_413.f_2070))
      {
        OBJECT::_SET_OBJECT_LIGHT_COLOR(Local_413.f_2070, 1, 255, 255, 255);
      }
      ENTITY::SET_ENTITY_ALPHA(Local_413.f_2070, 255, false);
      STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ba_prop_battle_lights_club_dancefloor"));
    }
  }
}