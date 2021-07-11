// am_hold_up.c @ L15853
int func_390(float fParam0)
{
  if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
  {
    if (fParam0 <= 0f)
    {
      return PED::_0x5407B7288D0478B7(PLAYER::PLAYER_PED_ID()) > 0;
    }
    else
    {
      return PED::_0x336B3D200AB007CB(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), fParam0) > 0;
    }
  }
  return 0;
}