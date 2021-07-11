// franklin1.ysc @ L19127
void func_276(int iParam0)
{
  if (iParam0 < 3)
  {
    VEHICLE::SET_BOAT_ANCHOR(Local_800[iParam0 /*13*/], false);
    VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_800[iParam0 /*13*/], Local_800[iParam0 /*13*/].f_7, sLocal_312, 1);
    VEHICLE::_0x796A877E459B99EA(Local_800[iParam0 /*13*/], 1f, 0f, 0f);
    VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_800[iParam0 /*13*/], 1000f);
    VEHICLE::SET_PLAYBACK_SPEED(Local_800[iParam0 /*13*/], 1.15f);
  }
}