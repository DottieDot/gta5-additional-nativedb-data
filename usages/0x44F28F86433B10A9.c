// am_mp_yacht.c @ L126938
void func_1009()
{
  if (MISC::IS_PREV_WEATHER_TYPE("RAIN") || MISC::IS_NEXT_WEATHER_TYPE("RAIN"))
  {
    func_1013();
  }
  else if (MISC::IS_NEXT_WEATHER_TYPE("THUNDER") || MISC::IS_PREV_WEATHER_TYPE("THUNDER"))
  {
    func_1012();
  }
  else if (MISC::IS_NEXT_WEATHER_TYPE("EXTRASUNNY") || MISC::IS_PREV_WEATHER_TYPE("EXTRASUNNY"))
  {
    func_1011();
  }
  else if (MISC::IS_NEXT_WEATHER_TYPE("FOGGY") || MISC::IS_PREV_WEATHER_TYPE("FOGGY"))
  {
    func_1010();
  }
}