// abigail1.c @ L38817
void func_299()
{
  if (func_303(PLAYER::PLAYER_PED_ID()))
  {
    func_304();
    PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
    if (iLocal_88 == 0)
    {
      if (func_303(iLocal_83))
      {
        if (func_300(PLAYER::PLAYER_PED_ID(), iLocal_83, 1) < 4f || (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 2f && func_300(PLAYER::PLAYER_PED_ID(), iLocal_83, 1) < 6f))
        {
          PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
          TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
          iLocal_88 = 1;
        }
      }
    }
  }
}