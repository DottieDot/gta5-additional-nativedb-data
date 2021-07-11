// director_mode.ysc @ L7950
void func_105(bool bParam0)
{
  int iVar0;
  
  if (bParam0)
  {
  }
  if (func_57(func_106()))
  {
    HUD::DISPLAY_RADAR(false);
  }
  HUD::SET_BIGMAP_ACTIVE(0, 0);
  HUD::SET_BLIP_ALPHA(HUD::_0x3F0CF9CB7E589B88(), 255);
  HUD::UNLOCK_MINIMAP_POSITION();
  HUD::UNLOCK_MINIMAP_ANGLE();
  HUD::_0x15CFA549788D35EF();
  if (bParam0)
  {
    iVar0 = 0;
    while (iVar0 <= (30 - 1))
    {
      if (HUD::DOES_BLIP_EXIST(Local_717[iVar0 /*17*/].f_12))
      {
        HUD::REMOVE_BLIP(&(Local_717[iVar0 /*17*/].f_12));
      }
      iVar0++;
    }
  }
  bLocal_808 = false;
}