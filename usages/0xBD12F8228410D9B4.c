// am_mp_arena_garage.c @ L262658
int func_3806()
{
  bool bVar0;
  var uVar1;
  int iVar2;
  
  bVar0 = func_3629(PLAYER::PLAYER_ID());
  if (func_235(0, bVar0, -1, 0))
  {
    func_3836();
    if (bVar0)
    {
      HUD::BEGIN_TEXT_COMMAND_BUSYSPINNER_ON("FMMC_PLYLOAD");
      HUD::END_TEXT_COMMAND_BUSYSPINNER_ON(5);
      func_3807(&(Global_2448961.f_680), 0, 0, 0f, 0f, 0f, &uVar1, 0f, 0f, 0f, 1, 0, &uVar1, &iVar2, iVar2, 0, 0, 0, 1, 0, 0);
      HUD::DISPLAY_RADAR(false);
    }
    return 1;
  }
  return 0;
}