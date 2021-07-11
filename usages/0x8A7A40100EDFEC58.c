// agency_heist3a.c @ L144536
void func_1095()
{
  if (!iLocal_1901)
  {
    if (func_729())
    {
      iLocal_2199 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(133.4784f, -766.3165f, 242.5f, "V_FIB01");
      INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_2199);
      iLocal_1901 = 1;
    }
  }
  else if (!func_729())
  {
    if (INTERIOR::IS_VALID_INTERIOR(iLocal_2199))
    {
      INTERIOR::UNPIN_INTERIOR(iLocal_2199);
    }
    iLocal_1901 = 0;
  }
  else if (INTERIOR::IS_INTERIOR_READY(iLocal_2199))
  {
    STREAMING::REQUEST_MODELS_IN_ROOM(iLocal_2199, "v_fib01_jan_elev");
    STREAMING::REQUEST_MODELS_IN_ROOM(iLocal_2199, "limbo");
  }
}