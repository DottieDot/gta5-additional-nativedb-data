// am_pi_menu.ysc @ L412061
void func_5248()
{
  if (Global_2509253.f_6343 == iLocal_369)
  {
    if (NETWORK::NETWORK_IS_FRIEND(&Local_548) || MISC::IS_ORBIS_VERSION())
    {
      func_1046("PIM_HFRQ1", 0, 0);
    }
    else if ((MISC::IS_PS3_VERSION() || MISC::IS_ORBIS_VERSION()) || MISC::IS_PC_VERSION())
    {
      func_1046("PIM_HFRQ2", 0, 0);
    }
    else if (!NETWORK::NETWORK_IS_PENDING_FRIEND(&Local_548))
    {
      func_1046("PIM_HFRQ2", 0, 0);
    }
    else
    {
      func_1046("PIM_HFRQ3", 0, 0);
    }
  }
  else if (Global_2509253.f_6343 == iLocal_370)
  {
    StringCopy(&(Global_2509253.f_6337), "PIM_DCREW", 24);
    StringIntConCat(&(Global_2509253.f_6337), iLocal_536, 24);
    func_1046(&(Global_2509253.f_6337), 0, 0);
  }
}