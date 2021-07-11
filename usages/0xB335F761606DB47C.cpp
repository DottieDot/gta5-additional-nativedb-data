// act_cinema.ysc @ L108954
struct<6> func_836(var uParam0, int iParam1)
{
  struct<6> Var0;
  var uVar1;
  int iVar2;
  
  iVar2 = 0;
  if (func_837(iParam1, &uVar1))
  {
    iVar2 = 1;
  }
  if (iVar2 && MISC::_GET_BASE_ELEMENT_METADATA(&Var0, &(Var0.f_3), uParam0, uVar1))
  {
    return Var0;
  }
  return Var0;
}