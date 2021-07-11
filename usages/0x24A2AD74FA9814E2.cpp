// family4.ysc @ L126329
void func_881(var uParam0)
{
  float fVar0;
  
  if (!iLocal_477)
  {
    if (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
    {
      fVar0 = TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID());
      if (TASK::IS_MOVE_BLEND_RATIO_RUNNING(fVar0) || TASK::IS_MOVE_BLEND_RATIO_SPRINTING(fVar0))
      {
        TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(*uParam0, 2f);
        iLocal_477 = 1;
      }
    }
  }
  else
  {
    TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(*uParam0, 2f);
  }
}