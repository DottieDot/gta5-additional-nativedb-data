// fmmc_launcher.ysc @ L308737
void func_4177()
{
  int iVar0;
  
  NETWORK::NETWORK_CLEAR_GET_GAMER_STATUS();
  NETWORK::NETWORK_CLEAR_FOUND_GAMERS();
  Global_1839494 = 0;
  Global_1839494.f_1 = 0;
  Global_1839494.f_2 = { 0f, 0f, 0f };
  StringCopy(&(Global_1839494.f_5), "", 24);
  Global_1839494.f_11 = 0;
  iVar0 = 0;
  while (iVar0 < 6)
  {
    Global_1839494.f_12[iVar0] = 0;
    Global_1839494.f_19[iVar0] = 0;
    iVar0++;
  }
  Global_1839494.f_26 = 0;
  func_4178();
}