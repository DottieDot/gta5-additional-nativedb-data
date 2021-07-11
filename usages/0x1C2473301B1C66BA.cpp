// am_pi_menu.ysc @ L211444
void func_1859()
{
  bool bVar0;
  
  StringCopy(&(Global_2509253.f_6337), "PIM_TITLE5", 24);
  StringIntConCat(&(Global_2509253.f_6337), iLocal_572, 24);
  func_1080(&(Global_2509253.f_6337));
  bVar0 = false;
  if (iLocal_572 == 0)
  {
    if (((Global_2531497.f_283 > 0 && MONEY::NETWORK_CAN_SHARE_JOB_CASH()) && func_1853() > 0) && func_1085(PLAYER::PLAYER_ID()) != 154)
    {
      bVar0 = true;
    }
    func_1076(0, "PIM_DILJ", 0, bVar0, 0, 0);
    if (Global_2509253.f_6343 == 0 && bVar0 == 1)
    {
      Global_2509238 = 1;
    }
  }
  func_1064(0, 0, 0, 0, 0);
}