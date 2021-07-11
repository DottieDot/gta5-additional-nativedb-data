// ambient_ufos.ysc @ L358
void func_6()
{
  if (bLocal_92)
  {
    if (MISC::GET_GAME_TIMER() > iLocal_87)
    {
      if (iLocal_89 != -1)
      {
        func_4(&iLocal_89);
        iLocal_87 = (MISC::GET_GAME_TIMER() + iLocal_86);
      }
      else
      {
        iLocal_89 = AUDIO::GET_SOUND_ID();
        AUDIO::PLAY_SOUND(iLocal_89, "ent_amb_elec_crackle", 0, 0, 0, 1);
        iLocal_87 = (MISC::GET_GAME_TIMER() + iLocal_84);
      }
    }
  }
}