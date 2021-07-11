// am_mp_yacht.c @ L121710
void func_853()
{
  int iVar0;
  
  iVar0 = 0;
  while (iVar0 < 36)
  {
    if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(iLocal_778[iVar0]))
    {
      PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_778[iVar0]);
    }
    iVar0++;
  }
  if (bLocal_779)
  {
    bLocal_779 = false;
  }
}