// finale_heist_prepa.c @ L4857
void func_152(int iParam0)
{
  func_174(iParam0);
  if (!func_173(iParam0))
  {
    if (func_154(Local_289[iParam0 /*22*/], 1, 50f, 140f, 0, 1, 1, 1) || FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(Local_289[iParam0 /*22*/], true), 100f))
    {
      if ((!PED::IS_PED_BEING_STEALTH_KILLED(Local_289[iParam0 /*22*/]) && !PED::WAS_PED_KILLED_BY_STEALTH(Local_289[iParam0 /*22*/])) && !PED::WAS_PED_KILLED_BY_TAKEDOWN(Local_289[iParam0 /*22*/]))
      {
        func_125();
      }
      else if (!bLocal_274)
      {
        PLAYER::_SWITCH_CRIME_TYPE(PLAYER::PLAYER_ID(), 41);
        PLAYER::_SWITCH_CRIME_TYPE(PLAYER::PLAYER_ID(), 33);
        PLAYER::_SWITCH_CRIME_TYPE(PLAYER::PLAYER_ID(), 12);
        PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
        PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
      }
    }
  }
  else if (func_153(Local_289[iParam0 /*22*/], PLAYER::PLAYER_PED_ID(), 5f, 1))
  {
    if (!bLocal_274)
    {
      PLAYER::_SWITCH_CRIME_TYPE(PLAYER::PLAYER_ID(), 41);
      PLAYER::_SWITCH_CRIME_TYPE(PLAYER::PLAYER_ID(), 33);
    }
  }
}