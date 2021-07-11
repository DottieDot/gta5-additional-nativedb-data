// fm_maintain_transition_players.ysc @ L38867
void func_308()
{
  int iVar0;
  int iVar1;
  
  iVar0 = 0;
  while (iVar0 <= (Global_4456448.f_88008 - 1))
  {
    if (!func_338(Global_4456448.f_88017[iVar0 /*72*/]))
    {
      iVar1 = func_309(iVar0, -1);
      HUD::_RACE_GALLERY_NEXT_BLIP_SPRITE(iVar1);
      HUD::_RACE_GALLERY_ADD_BLIP(Global_4456448.f_88017[iVar0 /*72*/]);
    }
    iVar0++;
  }
}