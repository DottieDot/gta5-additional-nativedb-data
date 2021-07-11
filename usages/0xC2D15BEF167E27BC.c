// freemode.c @ L804409
void func_11551(int iParam0)
{
  if (*iParam0 != func_6658())
  {
    switch (func_6658())
    {
      case 0:
        if (!func_102(&Global_2459463))
        {
          HUD::REMOVE_MULTIPLAYER_WALLET_CASH();
          HUD::REMOVE_MULTIPLAYER_BANK_CASH();
        }
        break;
      
      case 1:
      case 2:
        if (!func_102(&Global_2459463))
        {
          HUD::SET_MULTIPLAYER_WALLET_CASH();
          HUD::SET_MULTIPLAYER_BANK_CASH();
        }
        break;
    }
    *iParam0 = func_6658();
  }
}