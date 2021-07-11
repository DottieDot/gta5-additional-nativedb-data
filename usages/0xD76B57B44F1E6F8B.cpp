// am_mp_arcade.ysc @ L279871
void func_3920(vector3 vParam0, float fParam1)
{
  if (func_85(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), vParam0, 0.1f, 0))
  {
    if (!func_3697(ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), fParam1, 5f))
    {
      TASK::TASK_ACHIEVE_HEADING(PLAYER::PLAYER_PED_ID(), fParam1, 0);
      return;
    }
  }
  else
  {
    TASK::TASK_GO_STRAIGHT_TO_COORD(PLAYER::PLAYER_PED_ID(), vParam0, 1f, 100, fParam1, 0.1f);
  }
}