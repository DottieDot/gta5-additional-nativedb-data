// agency_heist3a.c @ L131204
void func_912()
{
  float fVar0;
  
  STREAMING::REQUEST_ANIM_DICT("missheist_agency3ashield_face");
  if (func_913())
  {
    if (STREAMING::HAS_ANIM_DICT_LOADED("missheist_agency3ashield_face"))
    {
      fVar0 = TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID());
      if (TASK::IS_MOVE_BLEND_RATIO_STILL(fVar0) || TASK::IS_MOVE_BLEND_RATIO_WALKING(fVar0))
      {
        if (func_3(&iLocal_2098, 7000))
        {
          if (!ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "missheist_agency3ashield_face", "Shield_Face_Player1", 3))
          {
            TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "missheist_agency3ashield_face", "Shield_Face_Player1", 2f, -2f, -1, 48, 0, 0, 0, 0);
            iLocal_2098 = MISC::GET_GAME_TIMER();
          }
        }
      }
      else if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "missheist_agency3ashield_face", "Shield_Face_Player1", 3))
      {
        TASK::STOP_ANIM_TASK(PLAYER::PLAYER_PED_ID(), "missheist_agency3ashield_face", "Shield_Face_Player1", -4f);
      }
    }
  }
}