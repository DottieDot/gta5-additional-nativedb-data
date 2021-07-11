// agency_heist3b.c @ L120925
void func_756()
{
  float fVar0;
  
  if (PLAYER::PLAYER_PED_ID() == func_116() && ((PED::IS_PED_IN_COVER(func_116(), 0) || PED::IS_PED_GOING_INTO_COVER(func_116())) || PED::IS_PED_AIMING_FROM_COVER(func_116())))
  {
    if (PED::IS_PED_AIMING_FROM_COVER(func_116()))
    {
      if (iLocal_1398 != 1)
      {
        iLocal_1398 = 1;
        iLocal_1397 = MISC::GET_GAME_TIMER();
      }
      PLAYER::SET_PLAYER_FORCED_ZOOM(PLAYER::PLAYER_ID(), 1);
    }
    else if (iLocal_1398 != -1)
    {
      iLocal_1398 = -1;
      iLocal_1397 = MISC::GET_GAME_TIMER();
    }
    fVar0 = func_681((IntToFloat((MISC::GET_GAME_TIMER() - iLocal_1397)) / 500f), 0f, 1f);
    if (iLocal_1398 == -1)
    {
      fVar0 = (1f - fVar0);
    }
    CAM::_CLAMP_GAMEPLAY_CAM_YAW(func_719(64.665f, 17.185f, fVar0), func_719(98.325f, 99.375f, fVar0));
    CAM::_CLAMP_GAMEPLAY_CAM_PITCH(func_719(-7.2f, -18.85f, fVar0), func_719(12.96f, 22.685f, fVar0));
    CAM::_ANIMATE_GAMEPLAY_CAM_ZOOM(func_719(0.9f, 0.9f, fVar0), func_719(1.2f, 1.2f, fVar0));
  }
}