// assassin_bus.c @ L13049
int func_234()
{
  if (bLocal_1378)
  {
    if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
    {
      if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 4))
      {
        if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()) && !WEAPON::IS_PED_CURRENT_WEAPON_SILENCED(PLAYER::PLAYER_PED_ID()))
        {
          return 1;
        }
      }
    }
  }
  return 0;
}