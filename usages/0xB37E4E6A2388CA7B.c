// arena_carmod.c @ L862
void func_2()
{
  if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
  {
    return;
  }
  if (!NETWORK::_0xB37E4E6A2388CA7B())
  {
    if (!NETWORK::NETWORK_IS_TUTORIAL_SESSION_CHANGE_PENDING())
    {
      if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
      {
        if (NETWORK::NETWORK_GET_PLAYER_TUTORIAL_SESSION_INSTANCE(PLAYER::PLAYER_ID()) == Local_105.f_118.f_32)
        {
          func_4();
        }
      }
      else if (MISC::IS_BIT_SET(iLocal_354, 26))
      {
        if (MISC::GET_GAME_TIMER() > iLocal_355)
        {
          func_3();
        }
      }
      else
      {
        iLocal_355 = MISC::GET_GAME_TIMER() + 3000;
        MISC::SET_BIT(&iLocal_354, 26);
      }
    }
  }
}