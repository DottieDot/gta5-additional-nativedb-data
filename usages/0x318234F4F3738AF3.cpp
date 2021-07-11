// am_mp_nightclub.ysc @ L319934
int func_4929(var uParam0)
{
  int iVar0;
  struct<2> Var1;
  int iVar2;
  
  iVar0 = 1;
  iVar2 = 0;
  while (func_4902(uParam0, iVar2, &Var1))
  {
    STREAMING::REQUEST_CLIP_SET(Var1.f_1);
    if (!STREAMING::HAS_CLIP_SET_LOADED(Var1.f_1))
    {
      iVar0 = 0;
    }
    iVar2++;
  }
  return iVar0;
}