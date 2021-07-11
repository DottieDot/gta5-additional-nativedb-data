// am_darts.c @ L109454
void func_599(var uParam0, var uParam1, bool bParam2, int iParam3)
{
  vector3 vVar0;
  
  vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam1->f_1, uParam1->f_4, uParam0->f_14, (uParam0->f_14.f_1 + fLocal_319), uParam0->f_14.f_2) };
  if (iParam3 == 1)
  {
    vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam1->f_1, uParam1->f_4, uParam0->f_14, (uParam0->f_14.f_1 + fLocal_319), uParam0->f_14.f_2) };
  }
  GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(vVar0, &Local_323, &(Local_323.f_1));
  if ((MISC::GET_GAME_TIMER() % 1000) < 50)
  {
  }
  if (!bParam2)
  {
    if (bLocal_334)
    {
      func_591("Darts", "Dart_Reticules_Zoomed", &Local_323, 1, 0, 4, 0);
    }
    else
    {
      func_591("Darts", "Dart_Reticules", &Local_323, 1, 0, 4, 0);
    }
    if (!iLocal_341)
    {
      iLocal_341 = 1;
    }
  }
}