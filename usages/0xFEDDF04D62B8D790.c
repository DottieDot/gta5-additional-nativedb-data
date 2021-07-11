// am_casino_peds.c @ L7282
void func_60(int iParam0, var uParam1, char* sParam2, char* sParam3, bool bParam4)
{
  if (bParam4)
  {
    PED::_0x5687C7F05B39E401(*uParam1, sParam2);
    PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(*uParam1, sParam3, 0);
  }
  else
  {
    TASK::TASK_PLAY_ANIM(*uParam1, sParam2, sParam3, 8f, -8f, -1, 33, 0, 0, 0, 0);
  }
  uParam1->f_20 = MISC::GET_GAME_TIMER();
  uParam1->f_19 = SYSTEM::FLOOR((ENTITY::GET_ANIM_DURATION(sParam2, sParam3) * 1000f));
}