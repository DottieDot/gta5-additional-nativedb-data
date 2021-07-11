// am_mp_arena_garage.ysc @ L350510
void func_5340()
{
  if (ENTITY::DOES_ENTITY_EXIST(Local_378.f_433) && !PED::IS_PED_INJURED(Local_378.f_433))
  {
    ENTITY::FREEZE_ENTITY_POSITION(Local_378.f_433, false);
    ENTITY::SET_ENTITY_ROTATION(Local_378.f_433, PED::GET_ANIM_INITIAL_OFFSET_ROTATION(func_5344(), func_5341(), func_5343(), func_5342(), 0f, 2), 2, 1);
    ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_378.f_433, PED::GET_ANIM_INITIAL_OFFSET_POSITION(func_5344(), func_5341(), func_5343(), func_5342(), 0f, 2), 0, 0, 1);
    TASK::TASK_SYNCHRONIZED_SCENE(Local_378.f_433, Local_378.f_432, func_5344(), func_5341(), 1000f, -1000f, 4, 0, 1148846080, 0);
  }
}