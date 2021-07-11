// fm_mission_controller.c @ L372177
void func_5392()
{
  if (HUD::DOES_BLIP_EXIST(iLocal_1880))
  {
    HUD::_CLEAR_ALL_BLIP_ROUTES();
    HUD::SET_BLIP_COLOUR(iLocal_1880, 0);
    HUD::SET_BLIP_AS_SHORT_RANGE(iLocal_1880, true);
  }
}