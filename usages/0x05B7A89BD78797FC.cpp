// act_cinema.ysc @ L119770
var func_1110(int iParam0, int iParam1)
{
  struct<5> Var0;
  
  Var0 = { func_1111(iParam0) };
  *iParam1 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Var0, Var0.f_3);
  return Var0.f_4;
}