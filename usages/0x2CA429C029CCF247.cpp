// agency_heist3a.ysc @ L144515
void func_1094()
{
  if (!iLocal_1958)
  {
    if (!func_729())
    {
      iLocal_2198 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(135.1881f, -765.1702f, 45.5f, "v_office_lobby");
      INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_2198);
      iLocal_1958 = 1;
    }
  }
  else if (func_729())
  {
    if (INTERIOR::IS_VALID_INTERIOR(iLocal_2198))
    {
      INTERIOR::UNPIN_INTERIOR(iLocal_2198);
    }
    iLocal_1958 = 0;
  }
}