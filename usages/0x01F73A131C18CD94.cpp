// am_mp_nightclub.ysc @ L320392
void func_4946(var uParam0)
{
  struct<2> Var0;
  int iVar1;
  
  iVar1 = 0;
  while (func_4902(uParam0, iVar1, &Var0))
  {
    STREAMING::REMOVE_CLIP_SET(Var0.f_1);
    iVar1++;
  }
}