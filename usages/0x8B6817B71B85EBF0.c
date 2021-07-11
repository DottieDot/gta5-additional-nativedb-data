// agency_prep2amb.c @ L11348
void func_240()
{
  if (!HUD::IS_STREAMING_ADDITIONAL_TEXT(5))
  {
    MISC::SET_BIT(&iLocal_49, 4);
  }
  else
  {
    MISC::CLEAR_BIT(&iLocal_49, 4);
  }
}