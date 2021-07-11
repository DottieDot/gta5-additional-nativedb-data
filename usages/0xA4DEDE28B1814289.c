// barry3a.c @ L44603
void func_399()
{
  int iVar0;
  
  if (iLocal_246)
  {
    if ((!CUTSCENE::IS_CUTSCENE_PLAYING() && !func_403(0)) && !func_398())
    {
      iVar0 = (iLocal_244 - MISC::GET_GAME_TIMER());
      if (iVar0 < 0)
      {
        iVar0 = 0;
      }
      HUD::_HIDE_AREA_AND_VEHICLE_NAME_THIS_FRAME();
      if (MISC::GET_GAME_TIMER() >= iLocal_245)
      {
        func_400(iVar0, "B3ATIME", 0, 0, -1, 0, 2, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, -1);
      }
      else
      {
        func_400(iVar0, "B3ATIME", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
      }
    }
  }
}