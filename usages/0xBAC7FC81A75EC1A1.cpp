// animal_controller.ysc @ L112702
void func_634()
{
  HUD::CLEAR_HELP(1);
  func_455(&iLocal_297);
  PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), iLocal_116, 0);
  if (iLocal_111 != -1)
  {
    AUDIO::STOP_SOUND(iLocal_111);
    AUDIO::RELEASE_SOUND_ID(iLocal_111);
    iLocal_111 = -1;
  }
  if (iLocal_124 != 0 && !ENTITY::DOES_ENTITY_EXIST(iLocal_124))
  {
    func_45(24, 1);
    Global_75396[24] = 0;
  }
  func_592(0, 0);
  AUDIO::STOP_AUDIO_SCENES();
  func_31();
  func_30(0);
  STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_593(iLocal_113));
}