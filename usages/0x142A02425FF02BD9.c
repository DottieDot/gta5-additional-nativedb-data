// country_race_controller.c @ L1550
void func_51()
{
  if (func_61(iLocal_151))
  {
    if ((!PED::IS_PED_FLEEING(iLocal_151) && !PED::IS_PED_IN_COMBAT(iLocal_151, 0)) && !PED::IS_PED_RAGDOLL(iLocal_151))
    {
      if (!func_53(iLocal_151, 993674639, 1))
      {
        TASK::TASK_START_SCENARIO_IN_PLACE(iLocal_151, "WORLD_HUMAN_STAND_IMPATIENT", -1, 1);
      }
      if (func_52(iLocal_150) || Global_111560.f_25068.f_9)
      {
        PED::_0xF1C03A5352243A30(iLocal_151);
        TASK::TASK_COMBAT_PED(iLocal_151, PLAYER::PLAYER_PED_ID(), 0, 16);
      }
      fLocal_154 = ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID());
    }
    else if (PED::IS_PED_RAGDOLL(iLocal_151))
    {
      if (!func_53(iLocal_151, 780511057, 1))
      {
        PED::_0xF1C03A5352243A30(iLocal_151);
        TASK::TASK_COMBAT_PED(iLocal_151, PLAYER::PLAYER_PED_ID(), 0, 16);
      }
    }
  }
}