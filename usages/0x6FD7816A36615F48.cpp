// triathlonsp.ysc @ L102402
void func_561(int iParam0)
{
  int iVar0;
  int iVar1;
  float fVar2;
  
  if (!func_321(16777216))
  {
    iVar0 = func_383() + 1;
    iVar1 = iParam0->f_1735[0 /*206*/].f_11;
    if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "missfbi4", "takeoff_mask", 3))
    {
      fVar2 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), "missfbi4", "takeoff_mask");
      if (fVar2 >= 0.457f)
      {
        PED::KNOCK_OFF_PED_PROP(PLAYER::PLAYER_PED_ID(), 0, 1, 1, 1);
        func_334(16777216);
      }
    }
    if ((iVar1 >= iVar0 && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "missfbi4", "takeoff_mask", 3)) && !PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID()))
    {
      TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "missfbi4", "takeoff_mask", 8f, -8f, -1, 48, 0, 0, 0, 0);
    }
  }
}