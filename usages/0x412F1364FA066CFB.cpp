// arena_carmod.ysc @ L301862
void func_2732()
{
  if (Global_1590303)
  {
    if (Global_1590285 != func_2964())
    {
      if (!func_2664(Global_1590285))
      {
        if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
        {
          if (!ENTITY::DOES_ENTITY_EXIST(Local_105.f_408))
          {
            MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 0.5f, 0, 0, 0, false);
            TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
            if (((!PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_DIVING(PLAYER::PLAYER_PED_ID())) && !PED::_0x412F1364FA066CFB(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_ON_VEHICLE(PLAYER::PLAYER_PED_ID()))
            {
              if (func_1556(&Global_1590304, 2000, 0))
              {
                if (!func_2470())
                {
                  func_2585(PLAYER::PLAYER_ID(), 1, 0, 0);
                  CAM::DO_SCREEN_FADE_IN(500);
                }
                Global_1590303 = 0;
                func_95(&Global_1590304);
              }
            }
          }
        }
      }
    }
  }
}