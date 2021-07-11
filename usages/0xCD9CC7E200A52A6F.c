// player_scene_f_lamtaunt.c @ L5739
int func_136()
{
  int iVar0;
  
  if (!func_135())
  {
    if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Global_96029))
    {
      iVar0 = 0;
      while (iVar0 < iLocal_290)
      {
        if (!PED::IS_PED_INJURED(iLocal_290[iVar0]))
        {
          TASK::TASK_SYNCHRONIZED_SCENE(iLocal_290[iVar0], Global_96029, &cLocal_349, &(Local_359[iVar0 /*16*/]), 8f, -4f, 3, 0, 1148846080, 0);
          iLocal_292[iVar0] = 0;
        }
        else
        {
          iLocal_292[iVar0] = -1;
        }
        iVar0++;
      }
      PED::_DISPOSE_SYNCHRONIZED_SCENE(Global_96029);
      return 1;
    }
  }
  return 0;
}