// am_mp_yacht.c @ L121729
void func_854()
{
  int iVar0;
  vector3 vVar1;
  
  iVar0 = 0;
  while (iVar0 < 36)
  {
    if (func_1032(iVar0) && func_1044(PLAYER::PLAYER_ID(), iVar0, 1000f))
    {
      if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(iLocal_778[iVar0]))
      {
        vVar1 = { func_82(iVar0) };
        vVar1.z = -100f;
        iLocal_778[iVar0] = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(vVar1, 500f, 500f, 200f, func_855(func_106(iVar0)), 0, 7);
      }
    }
    else if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(iLocal_778[iVar0]))
    {
      PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_778[iVar0]);
    }
    iVar0++;
  }
}