// act_cinema.c @ L106852
void func_775()
{
  if (Global_2405071.f_2462)
  {
    if (SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2405071.f_2464)
    {
      PATHFIND::REMOVE_NAVMESH_REQUIRED_REGIONS();
    }
    else
    {
      PATHFIND::REMOVE_NAVMESH_REQUIRED_REGIONS();
    }
    Global_2405071.f_2462 = 0;
  }
}