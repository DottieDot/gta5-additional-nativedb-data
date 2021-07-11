// appinternet.c @ L266538
void func_2389()
{
  if (MISC::ARE_STRINGS_EQUAL(&cLocal_1186, ""))
  {
    HUD::CLEAR_ADDITIONAL_TEXT(4, true);
    StringCopy(&cLocal_1186, func_2390(), 24);
  }
  else if (!MISC::ARE_STRINGS_EQUAL(&cLocal_1186, func_2390()))
  {
    HUD::CLEAR_ADDITIONAL_TEXT(4, true);
    StringCopy(&cLocal_1186, func_2390(), 24);
  }
  HUD::REQUEST_ADDITIONAL_TEXT(&cLocal_1186, 4);
  bLocal_184 = true;
  if (HUD::DOES_TEXT_BLOCK_EXIST(&cLocal_1186))
  {
    while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(4))
    {
      func_2454(0, 0);
      SYSTEM::WAIT(0);
    }
  }
}