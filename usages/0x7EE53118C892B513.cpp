// am_mp_armory_truck.ysc @ L4361
void func_74()
{
  if (func_14(PLAYER::PLAYER_ID(), 1, 1))
  {
    if (!PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 342, 1))
    {
      PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 342, true);
      MISC::SET_BIT(&(Local_1764.f_3), 8);
    }
  }
}