// am_casino_peds.ysc @ L287189
void func_3477(float fParam0, int iParam1, int iParam2, int iParam3)
{
  if (!MISC::IS_BIT_SET(*iParam1, iParam2))
  {
    AUDIO::PLAY_STREAM_FRONTEND();
    MISC::SET_BIT(iParam1, iParam2);
  }
  if (fParam0 >= 1f)
  {
    if (!MISC::IS_BIT_SET(*iParam1, iParam3))
    {
      AUDIO::STOP_STREAM();
      AUDIO::PLAY_SOUND_FRONTEND(-1, "Door_Open_Limit", "DLC_SM_Hangar_Door_Sounds", true);
      MISC::SET_BIT(iParam1, iParam3);
    }
  }
}