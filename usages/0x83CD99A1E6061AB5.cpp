// act_cinema.ysc @ L101132
int func_698(vector3 vParam0, float fParam1)
{
  int iVar0;
  
  if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
  {
    return 0;
  }
  else
  {
    func_63();
    iVar0 = 0;
    while (iVar0 < 3)
    {
      if (Global_2405071.f_678[iVar0] == -1 && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
      {
        Global_2405071.f_678[iVar0] = NETWORK::NETWORK_ADD_ENTITY_DISPLAYED_BOUNDARIES(vParam0 - Vector(fParam1, fParam1, fParam1), vParam0 + Vector(fParam1, fParam1, fParam1));
        Global_2405071.f_682[iVar0] = SCRIPT::GET_ID_OF_THIS_THREAD();
        Global_2405071.f_689 = Global_2405071.f_678[iVar0];
        return 1;
      }
      iVar0++;
    }
  }
  return 0;
}