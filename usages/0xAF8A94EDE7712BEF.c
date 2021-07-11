// business_battles.c @ L175029
void func_2022(bool bParam0)
{
  if (func_3993(PLAYER::PLAYER_ID(), 1, 1))
  {
  }
  if (bParam0 && func_1639())
  {
    if (!func_2037(PLAYER::PLAYER_PED_ID(), func_2039(), -1))
    {
      STREAMING::REQUEST_CLIP_SET("move_m@bag");
      if (STREAMING::HAS_CLIP_SET_LOADED("move_m@bag"))
      {
        func_2032(PLAYER::PLAYER_PED_ID(), func_2039(), -1);
        PED::SET_PED_MOVEMENT_CLIPSET(PLAYER::PLAYER_PED_ID(), "move_m@bag", 1048576000);
      }
    }
  }
  else if (func_2037(PLAYER::PLAYER_PED_ID(), func_2039(), -1))
  {
    func_2023(PLAYER::PLAYER_PED_ID(), func_2039(), -1, -1);
    STREAMING::REMOVE_CLIP_SET("move_m@bag");
    PED::RESET_PED_MOVEMENT_CLIPSET(PLAYER::PLAYER_PED_ID(), 1048576000);
  }
}