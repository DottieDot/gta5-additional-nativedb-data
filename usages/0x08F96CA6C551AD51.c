// fm_bj_race_controler.c @ L490785
void func_8065(var uParam0, var uParam1)
{
  if (func_364(uParam0))
  {
    if (func_8068(uParam1))
    {
      if (func_8026(PLAYER::PLAYER_ID(), 1, 1))
      {
        WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), OBJECT::GET_WEAPON_TYPE_FROM_PICKUP_TYPE(*uParam1), func_8066(*uParam1), false, true);
      }
    }
  }
}