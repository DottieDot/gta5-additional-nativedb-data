// fmmc_launcher.c @ L329469
void func_4827()
{
  if (func_4532())
  {
    HUD::_SET_WARNING_MESSAGE_4("FACES_WARNH2", "QM_NO_1", 0, 6, "", 0, -1, 0, func_4828(func_4352(0)), func_4828(func_4352(0)), 1, 0);
  }
  else if (func_4702())
  {
    HUD::SET_WARNING_MESSAGE_WITH_HEADER_AND_SUBSTRING_FLAGS("FACES_WARNH2", "QM_NO_AWSP", 36, 0, 0, -1, 0, 0, 0, 1, 0);
  }
  else if ((func_4802() && !Global_262145.f_4682) && !func_4351())
  {
    HUD::_SET_WARNING_MESSAGE_4("FACES_WARNH2", "QM_NO_2", 0, 6, "", 0, -1, 0, func_4828(iLocal_7314), 0, 1, 0);
  }
  else
  {
    HUD::_SET_WARNING_MESSAGE_4("FACES_WARNH2", "QM_NO_0", 0, 6, "", 0, -1, 0, func_4828(func_4352(0)), 0, 1, 0);
  }
}