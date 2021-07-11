// am_heist_int.c @ L121789
int func_1080()
{
  int iVar0;
  
  if (!ENTITY::DOES_ENTITY_EXIST(iLocal_184))
  {
    if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
    {
      iVar0 = ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID());
      iLocal_184 = PED::CREATE_PED(4, iVar0, 713.261f, -966.2629f, 29.3953f, 62.1074f, 0, false);
      ENTITY::SET_ENTITY_INVINCIBLE(iLocal_184, true);
      PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_184, true);
      PED::CLONE_PED_TO_TARGET(PLAYER::PLAYER_PED_ID(), iLocal_184);
      ENTITY::SET_ENTITY_VISIBLE(iLocal_184, false, 0);
    }
  }
  if (!ENTITY::DOES_ENTITY_EXIST(iLocal_184))
  {
    return 0;
  }
  if (!PED::IS_PED_INJURED(iLocal_184))
  {
    if (!PED::_HAS_STREAMED_PED_ASSETS_LOADED(iLocal_184))
    {
      return 0;
    }
  }
  return 1;
}