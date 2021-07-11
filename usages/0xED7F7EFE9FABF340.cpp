// agency_heist2.ysc @ L4235
void func_101()
{
  if (iLocal_179 != 4)
  {
    iLocal_180 = iLocal_179;
    iLocal_179 = 4;
    HUD::CLEAR_PRINTS();
    func_102();
    HUD::REMOVE_BLIP(&iLocal_76);
    PED::SET_PED_CAN_SWITCH_WEAPON(PLAYER::PLAYER_PED_ID(), true);
  }
  if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
  {
    iLocal_179 = iLocal_180;
    HUD::CLEAR_PRINTS();
  }
}