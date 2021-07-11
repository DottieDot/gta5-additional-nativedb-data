// agency_heist3a.ysc @ L128868
void func_865()
{
  int iVar0;
  
  func_866();
  if (INTERIOR::IS_VALID_INTERIOR(iLocal_2199))
  {
    INTERIOR::UNPIN_INTERIOR(iLocal_2199);
  }
  TASK::ASSISTED_MOVEMENT_REQUEST_ROUTE("AssAfterLift");
  PED::SET_PED_CAN_SWITCH_WEAPON(PLAYER::PLAYER_PED_ID(), true);
  PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
  PLAYER::SET_MAX_WANTED_LEVEL(6);
  PED::SET_CREATE_RANDOM_COPS(true);
  PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
  ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), false, false, false, false, false, false, 0, false);
  ENTITY::SET_ENTITY_PROOFS(iLocal_2203[0], false, false, false, false, false, false, 0, false);
  ENTITY::SET_ENTITY_PROOFS(Local_348[0 /*32*/], false, false, false, false, false, false, 0, false);
  if (ENTITY::DOES_ENTITY_EXIST(Local_348[1 /*32*/]))
  {
    ENTITY::SET_ENTITY_PROOFS(Local_348[1 /*32*/], false, false, false, false, false, false, 0, false);
  }
  iVar0 = 0;
  while (iVar0 <= (Local_360 - 1))
  {
    Local_360[iVar0 /*32*/].f_24 = 0;
    iLocal_2044[iVar0] = 0;
    iVar0++;
  }
  AUDIO::START_AUDIO_SCENE("AH_3A_GET_TO_FIRETRUCK");
}