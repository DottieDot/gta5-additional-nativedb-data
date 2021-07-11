// director_mode.ysc @ L20127
int func_315(var uParam0)
{
  char* sVar0;
  char* sVar1;
  int iVar2;
  
  if (uParam0->f_112)
  {
    if (uParam0->f_103 == 3)
    {
      iVar2 = 1;
    }
    sVar1 = func_362(uParam0, iVar2, uParam0->f_105);
    sVar0 = func_261(uParam0);
    if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_121, sVar1, sVar0, 3))
    {
      if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(uParam0->f_121, sVar1, sVar0) >= uParam0->f_110)
      {
        return 1;
      }
      else
      {
        ENTITY::SET_ENTITY_ANIM_CURRENT_TIME(uParam0->f_121, sVar1, sVar0, uParam0->f_110);
      }
    }
  }
  return 0;
}