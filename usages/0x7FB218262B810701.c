// am_casino_peds.c @ L89028
int func_697(var uParam0, char* sParam1, bool bParam2, int iParam3, float fParam4)
{
  int iVar0;
  char* sVar1;
  
  if (!STREAMING::HAS_ANIM_DICT_LOADED(func_660(4)))
  {
    return 0;
  }
  iVar0 = *uParam0;
  if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
  {
    return 0;
  }
  if (!ENTITY::DOES_ENTITY_HAVE_DRAWABLE(iVar0))
  {
    return 0;
  }
  sVar1 = func_660(4);
  func_698(uParam0);
  ENTITY::PLAY_ENTITY_ANIM(iVar0, sParam1, sVar1, 1000f, bParam2, iParam3, 0, fParam4, 136704);
  uParam0->f_22 = sParam1;
  return 1;
}