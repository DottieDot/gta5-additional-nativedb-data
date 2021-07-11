// agency_heist3a.ysc @ L145530
void func_1117()
{
  STREAMING::REQUEST_MODEL(func_536(0));
  STREAMING::REQUEST_MODEL(func_37(0, 0));
  STREAMING::REQUEST_MODEL(Local_127.f_2);
  STREAMING::REQUEST_MODEL(Local_121.f_2);
  STREAMING::REQUEST_MODEL(Local_139[0 /*24*/].f_2);
  STREAMING::REQUEST_MODEL(Local_140.f_2);
  func_629(PLAYER::PLAYER_PED_ID(), 3);
  STREAMING::REQUEST_ANIM_SET("move_ped_mop");
  STREAMING::REQUEST_ANIM_SET("move_ped_bucket");
  STREAMING::REQUEST_ANIM_SET("move_ped_wpn_mop");
  STREAMING::REQUEST_ANIM_SET("move_ped_wpn_bucket");
  STREAMING::REQUEST_ANIM_SET("move_p_m_zero_janitor");
  STREAMING::REQUEST_ANIM_DICT("missfbi_s4mop");
  STREAMING::REQUEST_ANIM_DICT("move_m@janitor");
  STREAMING::REQUEST_ANIM_DICT("missheist_agency3aleadinoutah_3a_int");
  STREAMING::REQUEST_ANIM_DICT("missheist_agency3apower_cord");
  AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\LIFTS", false, -1);
  STREAMING::REQUEST_PTFX_ASSET();
}