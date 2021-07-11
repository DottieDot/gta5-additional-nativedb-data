// rampage1.c @ L48135
void func_532()
{
  func_202();
  switch (iLocal_379)
  {
    case 0:
      break;
    
    case 1:
      HUD::CLEAR_PRINTS();
      HUD::CLEAR_HELP(1);
      func_173();
      if (Local_277 < Local_280.f_53)
      {
        func_535("TR_FAIL", 1);
      }
      else
      {
        func_678(1);
      }
      iLocal_379 = 2;
      break;
    
    case 2:
      if (func_534())
      {
        GRAPHICS::REMOVE_DECALS_IN_RANGE(func_533(), 500f);
        WEAPON::REMOVE_ALL_PED_WEAPONS(PLAYER::PLAYER_PED_ID(), 1);
        func_569(0);
      }
      break;
  }
}