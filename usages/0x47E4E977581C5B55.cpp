// act_cinema.ysc @ L4661
void func_115(float fParam0)
{
  if (!PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
  {
    ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fParam0);
  }
  func_79(0f, 1);
}