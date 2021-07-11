// gb_smuggler.c @ L81130
int func_1658()
{
  float fVar0;
  int iVar1;
  int iVar2;
  
  if (!func_118(136))
  {
    if (func_1012(PLAYER::PLAYER_ID()) && !STATS::_0x8B9CDBD6C566C38C())
    {
      STATS::_0x33D72899E24C3365(20, 1);
      func_3553(136);
    }
  }
  else
  {
    STATS::_0xF11F01D98113536A(&fVar0);
    iVar1 = SYSTEM::ROUND(fVar0);
    if (iLocal_381 != iVar1)
    {
      iVar2 = (iVar1 - iLocal_381);
      iLocal_381 = iVar1;
      return iVar2;
    }
  }
  return 0;
}