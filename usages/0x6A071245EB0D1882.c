// fbi4_prep1.c @ L6191
void func_196(var uParam0, bool bParam1)
{
  int iVar0;
  
  if (func_191(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_43, func_137(bParam1)), iLocal_43, 1.9f, 1.9f, 8f))
  {
    if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(*uParam0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_43, 5f, 0f, -2f), ENTITY::GET_ENTITY_COORDS(iLocal_43, true) + Vector(2f, 0f, 0f), 9f, 0, true, 0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_43, 5f, 0f, -2f), ENTITY::GET_ENTITY_COORDS(iLocal_43, true) + Vector(2f, 0f, 0f), 9f, 0, true, 0))
    {
      func_197(uParam0);
    }
    else if (!func_184(*uParam0, 1227113341) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_43, 5f, 0f, -2f), ENTITY::GET_ENTITY_COORDS(iLocal_43, true) + Vector(2f, 0f, 0f), 9f, 0, true, 0))
    {
      TASK::CLEAR_PED_TASKS(*uParam0);
      TASK::TASK_GO_TO_ENTITY(*uParam0, PLAYER::PLAYER_PED_ID(), -1, 4f, 1f, 1073741824, 0);
    }
  }
  else if (func_107(*uParam0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_43, func_137(bParam1)), 5f))
  {
    iVar0 = -1;
    if (!bParam1)
    {
      iVar0 = 0;
    }
    TASK::TASK_ENTER_VEHICLE(*uParam0, iLocal_43, -1, iVar0, 1f, 8388609, 0);
    uParam0->f_7 = 2;
  }
}