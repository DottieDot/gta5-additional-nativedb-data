// fm_mission_controller.c @ L520483
void func_8240(int iParam0)
{
  if (Global_4456448.f_154360 == Global_262145.f_8597)
  {
    if (!MISC::IS_BIT_SET(iLocal_4130, 23))
    {
      if (iLocal_3061 < Global_4456448.f_166759[iParam0 /*1494*/].f_90)
      {
        if (iLocal_3061 == 6)
        {
          INTERIOR::CLEAR_ROOM_FOR_GAME_VIEWPORT();
        }
        STREAMING::SET_FOCUS_POS_AND_VEL(Global_4456448.f_166759[iParam0 /*1494*/].f_134[iLocal_3061 /*3*/], 0f, 0f, 0f);
      }
      else
      {
        STREAMING::CLEAR_FOCUS();
      }
      MISC::SET_BIT(&iLocal_4130, 23);
    }
  }
}