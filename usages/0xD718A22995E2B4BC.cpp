// business_battles.ysc @ L252525
void func_3885()
{
  if (func_2149())
  {
    if (func_3868(47))
    {
      if (func_2037(PLAYER::PLAYER_PED_ID(), 3, -1) && !func_3868(48))
      {
        func_2023(PLAYER::PLAYER_PED_ID(), 3, -1, -1);
      }
      PED::SET_PED_DIES_IN_WATER(PLAYER::PLAYER_PED_ID(), 1);
      PED::SET_PED_DIES_IN_SINKING_VEHICLE(PLAYER::PLAYER_PED_ID(), 1);
      MISC::SET_BIT(&(Global_2531497.f_4591), 22);
      func_124(2046, iLocal_537, -1, 1, 0);
      PLAYER::_0xA0D3E4F7AAFB7E78(PLAYER::PLAYER_ID(), 100f);
      func_3867(47);
    }
  }
}