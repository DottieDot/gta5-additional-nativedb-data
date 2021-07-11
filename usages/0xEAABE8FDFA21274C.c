// offroad_races.c @ L9943
void func_211(vector3 vParam0)
{
  EVENT::REMOVE_ALL_SHOCKING_EVENTS(0);
  MISC::CLEAR_AREA(vParam0, 100f, 1, 0, 0, false);
  MISC::CLEAR_AREA_OF_PEDS(vParam0, 100f, 0);
  MISC::CLEAR_AREA_OF_VEHICLES(vParam0, 100f, 0, 0, 0, 0, false, 0);
  MISC::CLEAR_AREA_OF_PROJECTILES(vParam0, (100f * 5f), 0);
  FIRE::STOP_FIRE_IN_RANGE(vParam0, 100f);
}