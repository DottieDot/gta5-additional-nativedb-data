// am_challenges.ysc @ L22986
void func_684()
{
  if (Local_1537[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_3 == 3)
  {
    if (!MISC::IS_BIT_SET(iLocal_142, 8))
    {
      if ((!func_7(PLAYER::PLAYER_ID()) && !func_162(PLAYER::PLAYER_ID())) && !func_399(PLAYER::PLAYER_ID()))
      {
        func_398();
      }
    }
    else if (!MISC::IS_BIT_SET(iLocal_142, 9))
    {
      if ((func_7(PLAYER::PLAYER_ID()) || func_162(PLAYER::PLAYER_ID())) || func_399(PLAYER::PLAYER_ID()))
      {
        STATS::_0xA761D4AC6115623D();
        Local_1537[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_4 = 0;
        MISC::SET_BIT(&iLocal_142, 9);
      }
    }
  }
}