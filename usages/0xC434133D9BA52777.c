// am_hot_target.c @ L7657
int func_193()
{
  var uVar0;
  
  if (func_1492())
  {
    if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_112.f_2))
    {
      if (ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_112.f_2), 0))
      {
        if (PLAYER::PLAYER_ID() == NETWORK::NETWORK_GET_DESTROYER_OF_NETWORK_ID(Local_112.f_2, &uVar0) || PLAYER::PLAYER_ID() == NETWORK::_0xC434133D9BA52777(NETWORK::NET_TO_VEH(Local_112.f_2), &uVar0))
        {
          return 1;
        }
      }
    }
  }
  return 0;
}