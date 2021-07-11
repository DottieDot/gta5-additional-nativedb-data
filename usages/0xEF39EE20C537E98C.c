// assassin_bus.c @ L16789
void func_335(int iParam0)
{
  if (!iLocal_1406)
  {
    if (func_368(Local_1898[iParam0 /*30*/].f_1, 1) <= 100f)
    {
      if (!func_336(Local_1898[iParam0 /*30*/].f_24))
      {
        iLocal_1497 = STREAMING::_0x1F3F018BC3AFA77C(Local_1898[iParam0 /*30*/].f_24, Local_1898[iParam0 /*30*/].f_27, 25f, 12, 127);
        if (iLocal_1429 == 3)
        {
          CUTSCENE::REQUEST_CUTSCENE("ASS_MCS_1", 8);
          STREAMING::_0xEF39EE20C537E98C(133.2094f, -791.931f, 35.3551f, -4.9404f, 0f, 68.7852f);
        }
        iLocal_1406 = 1;
      }
    }
  }
  else if (func_368(Local_1898[iParam0 /*30*/].f_1, 1) > 120f)
  {
    func_299();
    CUTSCENE::REMOVE_CUTSCENE();
  }
}