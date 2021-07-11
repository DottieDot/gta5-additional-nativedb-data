// fbi4_prep1.ysc @ L6260
void func_198(var uParam0)
{
  if (uParam0->f_5 != 1)
  {
    if (func_37(iLocal_43) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
    {
      if (!func_184(*uParam0, 2104565373) && PED::IS_PED_IN_VEHICLE(*uParam0, iLocal_43, 0))
      {
        if (func_157(PLAYER::PLAYER_PED_ID(), iLocal_43, 10f, 1))
        {
          if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iLocal_43, PLAYER::PLAYER_PED_ID()))
          {
            TASK::TASK_DRIVE_BY(*uParam0, PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 10f, 100, 1, -957453492);
            uParam0->f_1 = MISC::GET_GAME_TIMER();
            uParam0->f_6 = 9;
          }
        }
      }
    }
  }
}