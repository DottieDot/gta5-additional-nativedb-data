// am_ferriswheel.c @ L6223
void func_117()
{
  int iVar0;
  
  if (func_135(1) >= Global_262145.f_7789 || MONEY::NETWORK_CAN_SPEND_MONEY(Global_262145.f_7789, false, false, 1, -1, 0))
  {
    if (func_134())
    {
      func_122(1643659499, Global_262145.f_7789, &iVar0, 0, 1, 0);
      Global_4263810[iVar0 /*84*/].f_1 = 2;
    }
    else
    {
      MONEY::NETWORK_BUY_FAIRGROUND_RIDE(Global_262145.f_7789, 2, false, true);
    }
    MISC::SET_BIT(&(Local_1073[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2), 8);
  }
  else if (!MISC::IS_BIT_SET(iLocal_369, 3))
  {
    func_118(0, 31, 5);
    MISC::SET_BIT(&iLocal_369, 3);
  }
}