// agency_heist1.c @ L2690
bool func_47(int iParam0)
{
  struct<7> Var0;
  int iVar1;
  
  Var0 = { func_60(iParam0) };
  iVar1 = OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(Var0.f_5);
  return ((iVar1 == 1 || iVar1 == 4) || iVar1 == 2);
}