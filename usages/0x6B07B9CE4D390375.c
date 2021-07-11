// maintransition.c @ L323796
int func_4070(var uParam0)
{
  if (func_4195() || func_1829() == 1)
  {
    NETWORK::_NETWORK_BLOCK_KICKED_PLAYERS(0);
    func_4227(3);
    func_4235(4);
  }
  else
  {
    if (func_29(202))
    {
      MISC::SET_BIT(&(uParam0->f_1661), 0);
    }
    if (MISC::IS_BIT_SET(uParam0->f_1661, 0))
    {
      if (PAD::IS_CONTROL_JUST_RELEASED(2, 202))
      {
        MISC::CLEAR_BIT(&(uParam0->f_1661), 0);
        NETWORK::_NETWORK_BLOCK_KICKED_PLAYERS(0);
        func_4227(32);
        func_4235(63);
      }
    }
  }
  return 0;
}