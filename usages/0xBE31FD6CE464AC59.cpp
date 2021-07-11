// assassin_hooker.ysc @ L18748
void func_372()
{
  while (!func_268())
  {
    SYSTEM::WAIT(0);
  }
  while (!func_206())
  {
    SYSTEM::WAIT(0);
  }
  MISC::CLEAR_AREA_OF_PEDS(-607.262f, -1800.9f, 22.3211f, 10f, 0);
  func_359();
  func_263(&Local_1370, &Local_978, 0);
  func_235(&Local_978, 1);
  func_267(&Local_978, &iLocal_1910);
  AUDIO::TRIGGER_MUSIC_EVENT("ASS3_RESTART1");
  CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
  CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
  func_364(0, -1, 1);
  func_362(500);
  iLocal_1340 = 0;
  iLocal_975 = 10;
}