// armenian1.c @ L55468
void func_522(vector3 vParam0, vector3 vParam1, float fParam2, int iParam3, int iParam4)
{
  int iVar0;
  
  iVar0 = MISC::GET_GAME_TIMER();
  while ((MISC::GET_GAME_TIMER() - iVar0) < iParam4)
  {
    if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
    {
      STREAMING::NEW_LOAD_SCENE_START(vParam0, vParam1, fParam2, iParam3);
    }
    else if (STREAMING::IS_NEW_LOAD_SCENE_LOADED())
    {
      iVar0 = 0;
    }
    SYSTEM::WAIT(0);
  }
  STREAMING::NEW_LOAD_SCENE_STOP();
}