// maintransition.ysc @ L327927
int func_4202()
{
  if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
  {
    if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()))
    {
      return 1;
    }
  }
  if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
  {
    if (!PLAYER::CAN_PLAYER_START_MISSION(PLAYER::PLAYER_ID()))
    {
      return 1;
    }
  }
  return 0;
}