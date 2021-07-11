// paparazzo1.c @ L57449
void func_629()
{
  if (!iLocal_262)
  {
    if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID()))
    {
      func_394("PAP1_H2", 1);
      if (MISC::IS_PC_VERSION())
      {
        func_394("PAP1_H2_KM", 1);
      }
      iLocal_262 = 1;
    }
  }
}