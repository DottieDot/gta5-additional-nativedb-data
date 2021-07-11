// act_cinema.c @ L106773
void func_768(float fParam0, float fParam1)
{
  PATHFIND::ADD_NAVMESH_REQUIRED_REGION(fParam0, fParam1, 0.1f);
  Global_2405071.f_2464 = SCRIPT::GET_ID_OF_THIS_THREAD();
  Global_2405071.f_2462 = 1;
  Global_2405071.f_2465 = NETWORK::GET_NETWORK_TIME();
}