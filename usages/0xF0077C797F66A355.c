// am_contact_requests.c @ L49738
void func_677(bool bParam0)
{
  int iVar0;
  
  func_681("CUST_GAR_VEH_L8", -1);
  if (Global_1322848.f_2 > 0 && !Global_262145.f_131)
  {
    if (bParam0)
    {
      if (func_90())
      {
        func_78(68030260, Global_1322848.f_2, &iVar0, 1, 1, 0);
        Global_4263810[iVar0 /*84*/] = Global_1323611[Global_1322848.f_3 /*141*/].f_66;
      }
      else
      {
        MONEY::NETWORK_BUY_ITEM(Global_1322848.f_2, Global_1323611[Global_1322848.f_3 /*141*/].f_66, 9, 1, true, 0, 0, 0, 0, true);
      }
    }
    else
    {
      MONEY::NETWORK_BUY_ITEM(Global_1322848.f_2, Global_1323611[Global_1322848.f_3 /*141*/].f_66, 9, 1, true, 0, 0, 0, 0, true);
    }
  }
  func_1(Local_179.f_1, "CT_AUD", "MPCT_MoGen1", &Local_223, 0);
  Global_1322848.f_1 = 1;
  MISC::CLEAR_BIT(&(Local_179.f_359), 4);
  func_32(4);
  func_678(-205702236, 3, 0);
}