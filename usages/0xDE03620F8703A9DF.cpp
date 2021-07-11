// maintransition.ysc @ L147939
int func_1512(bool bParam0, int iParam1, bool bParam2)
{
  float fVar0;
  float fVar1;
  vector3 vVar2;
  float fVar3;
  
  fVar0 = PAD::GET_CONTROL_NORMAL(2, 239);
  fVar1 = PAD::GET_CONTROL_NORMAL(2, 240);
  vVar2 = { HUD::_0x5BFF36D6ED83E0AE() };
  fVar3 = 0f;
  if (iParam1 == 0)
  {
    fVar3 = 0.069f;
  }
  if (!bParam0)
  {
  }
  if (bParam2)
  {
  }
  if (func_1511(vVar2.x, ((vVar2.y + 0.556f) - fVar3), func_1447(0.223f), 0.101f, fVar0, fVar1) && HUD::_0xDE03620F8703A9DF() == -1)
  {
    HUD::_SET_MOUSE_CURSOR_SPRITE(1);
    return 1;
  }
  return 0;
}