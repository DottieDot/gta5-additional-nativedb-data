// director_mode.ysc @ L136967
void func_909()
{
  if (iLocal_597[3] == 0)
  {
    PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f, 0f);
  }
  if (iLocal_597[2] == 4)
  {
    if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
    {
      PLAYER::_0xFAC75988A7D078D3(PLAYER::PLAYER_ID());
    }
  }
}