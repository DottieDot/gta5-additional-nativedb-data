// fm_bj_race_controler.c @ L490233
void func_8050(int iParam0, int iParam1)
{
  if ((((((((Global_4456448.f_69121[iParam0 /*84*/].f_7 == joaat("stt_prop_track_speedup") || Global_4456448.f_69121[iParam0 /*84*/].f_7 == joaat("stt_prop_track_speedup_t1")) || Global_4456448.f_69121[iParam0 /*84*/].f_7 == joaat("stt_prop_track_speedup_t2")) || Global_4456448.f_69121[iParam0 /*84*/].f_7 == joaat("stt_prop_stunt_tube_speed")) || Global_4456448.f_69121[iParam0 /*84*/].f_7 == joaat("stt_prop_stunt_tube_speedb")) || Global_4456448.f_69121[iParam0 /*84*/].f_7 == joaat("ar_prop_ar_speed_ring")) || Global_4456448.f_69121[iParam0 /*84*/].f_7 == joaat("ar_prop_ar_tube_speed")) || Global_4456448.f_69121[iParam0 /*84*/].f_7 == joaat("ar_prop_ar_tube_2x_speed")) || Global_4456448.f_69121[iParam0 /*84*/].f_7 == joaat("ar_prop_ar_tube_4x_speed"))
  {
    if (ENTITY::DOES_ENTITY_EXIST(iParam1))
    {
      OBJECT::_SET_OBJECT_STUNT_PROP_SPEEDUP(iParam1, func_8054(Global_4456448.f_69121[iParam0 /*84*/].f_36));
      OBJECT::_SET_OBJECT_STUNT_PROP_DURATION(iParam1, func_8053(Global_4456448.f_69121[iParam0 /*84*/].f_36));
      MISC::SET_BIT(&(Global_4456448.f_69121[iParam0 /*84*/].f_21), 30);
    }
  }
  if (((Global_4456448.f_69121[iParam0 /*84*/].f_7 == joaat("stt_prop_track_slowdown") || Global_4456448.f_69121[iParam0 /*84*/].f_7 == joaat("stt_prop_track_slowdown_t1")) || Global_4456448.f_69121[iParam0 /*84*/].f_7 == joaat("stt_prop_track_slowdown_t2")) || func_8052(Global_4456448.f_69121[iParam0 /*84*/].f_7))
  {
    OBJECT::_SET_OBJECT_STUNT_PROP_SPEEDUP(iParam1, func_8051(Global_4456448.f_69121[iParam0 /*84*/].f_36));
  }
}