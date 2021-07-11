// director_mode.ysc @ L122710
void func_755()
{
  int iVar0;
  
  iLocal_710 = 0;
  iVar0 = 0;
  while (iVar0 < Local_708)
  {
    if (AUDIO::_CAN_PED_SPEAK(PLAYER::PLAYER_PED_ID(), &(Local_708[iVar0 /*8*/]), 0) || MISC::IS_STRING_NULL_OR_EMPTY(&(Local_708[iVar0 /*8*/])))
    {
      if (!func_756(Local_708[iVar0 /*8*/]))
      {
        iLocal_709[iLocal_710] = iVar0;
        iLocal_710++;
      }
    }
    iVar0++;
  }
  iLocal_667[3] = 0;
}