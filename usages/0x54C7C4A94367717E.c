// finalec2.c @ L45102
void func_361(int iParam0)
{
  if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iParam0)))
  {
    if (PED::GET_PED_PROP_INDEX(PLAYER::PLAYER_PED_ID(), 0) == -1)
    {
      PED::GIVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), 0, 4096, -1);
    }
  }
}