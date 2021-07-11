// arena_carmod.c @ L328971
void func_2943(int iParam0)
{
  if (ENTITY::DOES_ENTITY_EXIST(iParam0))
  {
    if (!PED::IS_PED_INJURED(iParam0))
    {
      if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
      {
        AUDIO::_PLAY_AMBIENT_SPEECH1(iParam0, "GENERIC_SHOCKED_HIGH", "SPEECH_PARAMS_FORCE", 1);
        func_12("Telling shop keeper to cower", -1);
        TASK::CLEAR_PED_TASKS(iParam0);
        PED::SET_PED_CONFIG_FLAG(iParam0, 185, false);
        PED::SET_PED_CONFIG_FLAG(iParam0, 150, true);
        PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iParam0, 1);
        TASK::TASK_COWER(iParam0, -1);
        PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, false);
        PED::SET_PED_KEEP_TASK(iParam0, true);
        ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iParam0);
      }
      else
      {
        func_12("Bypass telling shop keeper to cower, network doesn't have control of entity", -1);
      }
    }
  }
}