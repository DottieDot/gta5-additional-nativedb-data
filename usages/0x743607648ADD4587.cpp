// am_mp_shooting_range.ysc @ L117393
int func_864()
{
  float fVar0;
  float fVar1;
  
  fVar0 = (CAM::GET_GAMEPLAY_CAM_RELATIVE_HEADING() + ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()));
  if (fVar0 > 180f)
  {
    fVar0 = (fVar0 - 360f);
  }
  else if (fVar0 < -180f)
  {
    fVar0 = (fVar0 + 360f);
  }
  fVar1 = (((((fVar0 - func_743(Local_1552.f_4)) + 180f) + 360f) % 360f) - 180f);
  if (fVar1 <= 45f && fVar1 >= -45f)
  {
    return 1;
  }
  return 0;
}