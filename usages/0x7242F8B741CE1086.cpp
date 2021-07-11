// am_mp_arena_box.ysc @ L80571
void func_351(var uParam0)
{
  int iVar0;
  int iVar1;
  int iVar2;
  vector3 vVar3;
  vector3 vVar4;
  
  iVar0 = 4;
  iVar1 = iVar0;
  iVar2 = NETWORK::NET_TO_ENT(uParam0->f_16[iVar1]);
  if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar2) || NETWORK::_0x7242F8B741CE1086(uParam0->f_16[iVar1]))
  {
    return;
  }
  func_26(iVar0, &vVar3, &vVar4, uParam0);
  ENTITY::SET_ENTITY_COORDS(iVar2, vVar3, 1, false, 0, 1);
  ENTITY::SET_ENTITY_ROTATION(iVar2, vVar4, 2, 0);
}