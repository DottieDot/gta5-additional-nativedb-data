// am_contact_requests.ysc @ L58730
void func_932(int iParam0, int iParam1, int iParam2, int iParam3)
{
  struct<6> Var0;
  
  Var0 = 71703256;
  Var0.f_1 = PLAYER::PLAYER_ID();
  Var0.f_3 = iParam1;
  Var0.f_5 = iParam3;
  Var0.f_2 = iParam2;
  if (!iParam0 == 0)
  {
    if (iParam3 == 0)
    {
      Global_2449755.f_4310[Var0.f_3] = 0;
      func_72(&(Global_2449755.f_4310.f_64[iParam1 /*2*/]), 1, 0);
      Global_2449755.f_4310.f_382 = NETWORK::NETWORK_GET_HOST_OF_SCRIPT(func_933(), -1, 0);
    }
    else
    {
      Global_2531497.f_4467.f_1 = 0;
      func_72(&(Global_2531497.f_4467.f_2), 0, 0);
    }
    SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 6, iParam0);
  }
}