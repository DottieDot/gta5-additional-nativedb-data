// freemode.c @ L920689
void func_14054()
{
  if (Global_2405071.f_499 == 1 || Global_2405071.f_497 == joaat("VEHICLE_WEAPON_HUNTER_BARRAGE"))
  {
    if (ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)) == joaat("HUNTER"))
    {
      WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("VEHICLE_WEAPON_HUNTER_BARRAGE"));
    }
    else
    {
      PLAYER::_0x237440E46D918649(PLAYER::PLAYER_ID());
    }
  }
}