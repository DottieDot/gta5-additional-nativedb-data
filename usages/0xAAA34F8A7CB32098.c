// agency_heist3a.c @ L134955
void func_945()
{
  AUDIO::STOP_STREAM();
  TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_2203[0]);
  ENTITY::SET_ENTITY_COORDS(iLocal_2203[0], 122.058f, -727.0389f, 253.1523f, 1, false, 0, 1);
  ENTITY::SET_ENTITY_HEADING(iLocal_2203[0], 157.1273f);
  TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_348[0 /*32*/]);
  ENTITY::SET_ENTITY_COORDS(Local_348[0 /*32*/], 120.0677f, -727.0218f, 253.1523f, 1, false, 0, 1);
  ENTITY::SET_ENTITY_HEADING(Local_348[0 /*32*/], 156.6606f);
  TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_348[1 /*32*/]);
  ENTITY::SET_ENTITY_COORDS(Local_348[1 /*32*/], 122.3925f, -725.9218f, 253.1523f, 1, false, 0, 1);
  ENTITY::SET_ENTITY_HEADING(Local_348[1 /*32*/], 164.1283f);
  iLocal_2490[0] = GRAPHICS::LOAD_MOVIE_MESH_SET("agency_IT3_01.xml");
  iLocal_2490[1] = GRAPHICS::LOAD_MOVIE_MESH_SET("agency_IT3_02.xml");
  iLocal_2490[2] = GRAPHICS::LOAD_MOVIE_MESH_SET("agency_IT3_03.xml");
  iLocal_2490[3] = GRAPHICS::LOAD_MOVIE_MESH_SET("agency_IT2_01.xml");
  iLocal_2490[4] = GRAPHICS::LOAD_MOVIE_MESH_SET("agency_IT2_02.xml");
  iLocal_2490[5] = GRAPHICS::LOAD_MOVIE_MESH_SET("agency_IT2_04.xml");
  iLocal_1941 = 1;
  iLocal_2028 = MISC::GET_GAME_TIMER();
  iLocal_2029 = 5000;
  if (CAM::IS_SCREEN_FADED_IN())
  {
    func_863(0, 0, 0, 0, 0, 3000, 1, 1);
  }
  else
  {
    func_116(0, 0, 0, 0, 1, 1);
  }
}