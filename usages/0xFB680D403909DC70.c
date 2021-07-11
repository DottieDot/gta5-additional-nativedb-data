// fm_intro.c @ L8415
void func_208(int iParam0)
{
  int iVar0;
  
  if (!MISC::IS_BIT_SET(*iParam0, 9))
  {
    if (iParam0->f_6 > 0)
    {
      if (!NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
      {
        if (!NETWORK::NETWORK_IS_TUTORIAL_SESSION_CHANGE_PENDING())
        {
          iVar0 = PLAYER::PLAYER_ID() + 32;
          NETWORK::_0xFB680D403909DC70(1, iVar0);
          func_209(1);
          MISC::SET_BIT(iParam0, 9);
        }
      }
      else
      {
        func_209(1);
        MISC::SET_BIT(iParam0, 9);
      }
    }
  }
}