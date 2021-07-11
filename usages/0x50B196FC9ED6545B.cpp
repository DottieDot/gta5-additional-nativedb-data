// appzit.ysc @ L454
void func_15()
{
  iLocal_26 = AUDIO::GET_AUDIBLE_MUSIC_TRACK_TEXT_ID();
  StringCopy(&Local_20, "", 64);
  StringIntConCat(&Local_20, iLocal_26, 64);
  StringConCat(&Local_20, "S", 64);
  StringCopy(&(Local_20.f_16), "", 32);
  StringIntConCat(&(Local_20.f_16), iLocal_26, 32);
  StringConCat(&(Local_20.f_16), "A", 32);
  StringCopy(&(Local_20.f_25), AUDIO::GET_PLAYER_RADIO_STATION_NAME(), 24);
  if (!HUD::DOES_TEXT_LABEL_EXIST(&Local_20))
  {
    StringCopy(&Local_20, "CELL_195", 64);
  }
  if (!HUD::DOES_TEXT_LABEL_EXIST(&(Local_20.f_16)))
  {
    StringCopy(&(Local_20.f_16), "CELL_195", 32);
    StringCopy(&(Local_20.f_25), "CELL_195", 24);
  }
}