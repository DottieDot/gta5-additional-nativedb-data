// fm_capture_creator.ysc @ L30586
void func_432()
{
  int iVar0;
  
  iVar0 = PLAYER::PLAYER_ID();
  Global_2424073[iVar0 /*421*/].f_209 = NETWORK::GET_NUM_RESERVED_MISSION_PEDS(true, 0);
  Global_2424073[iVar0 /*421*/].f_210 = NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(true, 0);
  Global_2424073[iVar0 /*421*/].f_211 = NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(true, 0);
  if (MISC::IS_BIT_SET(Global_1385512, 0))
  {
    if (((Global_1385520 == 0 || Global_1385521 == 0) || Global_1385522 == 0) || Global_1385523 == 0)
    {
      MISC::CLEAR_BIT(&Global_1385512, 0);
    }
    else
    {
      func_437();
    }
  }
  else
  {
    Global_1385520 = NETWORK::GET_MAX_NUM_NETWORK_PEDS();
    Global_1385521 = NETWORK::GET_MAX_NUM_NETWORK_VEHICLES();
    Global_1385522 = NETWORK::GET_MAX_NUM_NETWORK_OBJECTS();
    Global_1385523 = NETWORK::GET_MAX_NUM_NETWORK_PICKUPS();
    func_436();
    MISC::SET_BIT(&Global_1385512, 0);
  }
  func_433();
}