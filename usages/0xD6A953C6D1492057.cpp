// finale_heist_prepd.ysc @ L480
void func_1()
{
  func_21();
  AUDIO::TRIGGER_MUSIC_EVENT("FHPRD_FAIL");
  if (!ENTITY::IS_ENTITY_DEAD(iLocal_50, 0))
  {
    if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_50, 0))
    {
      func_19(1722.484f, 3254.085f, 40.1525f, 281.7393f);
    }
  }
  func_3(0);
  while (!func_2())
  {
    SYSTEM::WAIT(0);
  }
  if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
  {
    PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID());
  }
  if (ENTITY::DOES_ENTITY_EXIST(iLocal_51))
  {
    VEHICLE::DELETE_MISSION_TRAIN(&iLocal_51);
  }
  func_748();
  SCRIPT::TERMINATE_THIS_THREAD();
}