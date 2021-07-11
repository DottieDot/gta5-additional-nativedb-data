// taxilauncher.c @ L899
void func_17()
{
  int iVar0;
  
  if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
  {
    iVar0 = PED::GET_RANDOM_PED_AT_COORD(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1.5f, 1.5f, 1.5f, -1);
    if (!PED::IS_PED_INJURED(iVar0))
    {
      if (PED::IS_PED_ON_FOOT(iVar0))
      {
        TASK::TASK_SMART_FLEE_PED(iVar0, PLAYER::PLAYER_PED_ID(), 150f, -1, 0, 0);
      }
    }
  }
}