// launcher_triathlon.c @ L3520
void func_45()
{
  int iVar0;
  
  if (bLocal_87)
  {
    iVar0 = 0;
    while (iVar0 < iLocal_92)
    {
      if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(iLocal_92[iVar0]))
      {
        PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_92[iVar0]);
      }
      iVar0++;
    }
    TASK::RESET_EXCLUSIVE_SCENARIO_GROUP();
  }
}