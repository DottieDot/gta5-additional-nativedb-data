// maintransition.ysc @ L105104
void func_548()
{
  if (func_389(0))
  {
    if (func_29(202))
    {
      func_4227(3);
      func_549(6, 0);
      func_4235(4);
    }
    if (!HUD::IS_SOCIAL_CLUB_ACTIVE())
    {
      if (func_29(201))
      {
        HUD::OPEN_SOCIAL_CLUB_MENU();
      }
    }
    if (NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT())
    {
      func_4227(3);
      func_4235(4);
    }
  }
}