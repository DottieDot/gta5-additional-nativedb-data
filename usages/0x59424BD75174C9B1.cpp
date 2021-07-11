// franklin0.ysc @ L3120
void func_51(int iParam0, int iParam1, bool bParam2)
{
  PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
  HUD::DISPLAY_RADAR(true);
  HUD::DISPLAY_HUD(true);
  func_9(0);
  if (bParam2)
  {
    CAM::_SET_GAMEPLAY_CAM_VEHICLE_CAMERA("SPEEDO");
    CAM::_0x59424BD75174C9B1();
  }
  CAM::_RENDER_FIRST_PERSON_CAM(0, iParam0, iParam1, 0);
  func_17(0, 1, 1, 0, 0, 0);
  iLocal_306 = 0;
  bLocal_307 = false;
  iLocal_308 = 0;
  bLocal_309 = false;
  iLocal_193 = 0;
  if (CAM::IS_SCREEN_FADED_OUT())
  {
    if (CAM::DOES_CAM_EXIST(iLocal_294))
    {
      CAM::DESTROY_CAM(iLocal_294, 0);
    }
    CAM::DO_SCREEN_FADE_IN(800);
  }
}