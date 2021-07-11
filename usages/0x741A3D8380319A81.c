// am_mp_arc_cab_manager.c @ L94912
void func_687()
{
  if (func_64(PLAYER::PLAYER_ID(), 1, 1))
  {
    if (Global_2424073[PLAYER::PLAYER_ID() /*421*/].f_309.f_8 == PLAYER::PLAYER_ID())
    {
      if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
      {
        if (!func_77(&(Local_209.f_729)))
        {
          if (NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT() != func_688())
          {
            NETWORK::_0x741A3D8380319A81();
            func_76(&(Local_209.f_729), 1, 0);
          }
        }
        else if (func_75(&(Local_209.f_729), 1000, 1))
        {
          func_74(&(Local_209.f_729));
        }
      }
    }
  }
}