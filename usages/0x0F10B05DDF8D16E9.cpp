// am_mp_property_int.ysc @ L498009
int func_7210()
{
  int iVar0;
  struct<13> Var1;
  
  func_1334(PLAYER::PLAYER_ID(), &Var1);
  if (func_3874(Var1))
  {
    if (NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&Var1))
    {
      iVar0 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&Var1);
    }
  }
  return iVar0;
}