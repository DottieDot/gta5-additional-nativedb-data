// am_mp_arc_cab_manager.ysc @ L101119
void func_927()
{
  int iVar0;
  struct<4> Var1;
  int iVar2;
  
  if (MONEY::NETWORK_CAN_SPEND_MONEY(1, false, true, 0, -1, 0))
  {
    iVar0 = func_516(PLAYER::PLAYER_ID());
    Var1 = { func_636(iVar0, 0) };
    if (func_939())
    {
      Global_4263810[iVar2 /*84*/] = MISC::GET_HASH_KEY(&Var1);
      func_928(1868043300, 1, &iVar2, 0, 1, 0);
    }
    else
    {
      MONEY::_0xEAD3D81F2C3A1458(1, 0, 1, MISC::GET_HASH_KEY(&Var1), 2);
    }
    HUD::_0x170F541E1CADD1DE(0);
    HUD::HIDE_HUD_COMPONENT_THIS_FRAME(13);
    func_993(5);
  }
  else
  {
    func_993(11);
  }
}