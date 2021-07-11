// friendactivity.ysc @ L120648
void func_833(var uParam0)
{
  if (uParam0->f_2)
  {
    func_832(uParam0);
    PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_3, true);
    TASK::CLEAR_PED_TASKS(uParam0->f_3);
    uParam0->f_2 = 0;
  }
  if (!func_121(uParam0->f_3, 1226945658))
  {
    TASK::CLEAR_PED_TASKS(uParam0->f_3);
    TASK::TASK_PARACHUTE_TO_TARGET(uParam0->f_3, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
    uParam0->f_24 = MISC::GET_GAME_TIMER() + 1000;
  }
  else if (uParam0->f_24 < MISC::GET_GAME_TIMER())
  {
    TASK::SET_PARACHUTE_TASK_TARGET(uParam0->f_3, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
    uParam0->f_24 = MISC::GET_GAME_TIMER() + 1000;
  }
  if (PED::GET_PED_PARACHUTE_STATE(uParam0->f_3) == 0)
  {
    PED::FORCE_PED_TO_OPEN_PARACHUTE(uParam0->f_3);
  }
}