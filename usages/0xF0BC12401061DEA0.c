// agency_heist3a.c @ L135490
void func_950()
{
  switch (iLocal_2069)
  {
    case 0:
      if (func_593(PLAYER::PLAYER_PED_ID(), 126.562f, -737.4702f, 235.1521f, "V_FIB04_st1", "v_fib04"))
      {
        AUDIO::TRIGGER_MUSIC_EVENT("AH3A_STAIRWELL");
        iLocal_2069++;
      }
      break;
    
    case 1:
      if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 127.788f, -730.537f, 257.157f, 129.667f, -731.221f, 260.157f, 1.1f, 0, true, 0))
      {
        AUDIO::TRIGGER_MUSIC_EVENT("AH3A_GET_DOCS");
        iLocal_2069++;
      }
      break;
    
    case 2:
      if (MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(152.194f, -762.495f, 257.157f, 150.503f, -761.88f, 260.157f, 1.8f, joaat("WEAPON_STICKYBOMB"), 0))
      {
        AUDIO::TRIGGER_MUSIC_EVENT("AH3A_C4_PLANTED");
        iLocal_2069++;
      }
      break;
    
    case 3:
      break;
  }
}