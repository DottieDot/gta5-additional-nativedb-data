// act_cinema.c @ L97066
void func_611(int iParam0, int iParam1)
{
  int iVar0;
  
  func_462(iParam0, &iVar0);
  if (iVar0 >= 0)
  {
    func_458(iVar0, -1, -1);
  }
  func_612(&(Global_1323611[iParam0 /*141*/]));
  Global_2097152[func_8() /*10828*/].f_6168.f_1274 = NETWORK::GET_CLOUD_TIME_AS_INT();
  func_437(iParam0, &(Global_1323611[iParam0 /*141*/]), 0, iParam1, 0, 0);
}