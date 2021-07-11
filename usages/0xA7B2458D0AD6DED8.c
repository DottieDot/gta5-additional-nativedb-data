// am_casino_peds.c @ L287958
void func_3502(var uParam0, var uParam1)
{
  if (!MISC::IS_BIT_SET(uParam0->f_319, 0))
  {
    if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
    {
      PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
    }
    MISC::SET_BIT(&(uParam0->f_319), 0);
  }
  if (!MISC::IS_BIT_SET(uParam0->f_319, 1))
  {
    if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
    {
      if (PED::IS_PED_WEARING_HELMET(PLAYER::PLAYER_PED_ID()))
      {
        PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), 1);
      }
    }
    MISC::SET_BIT(&(uParam0->f_319), 1);
  }
}