// am_casino_peds.ysc @ L81183
void func_568(int iParam0, int iParam1, int iParam2)
{
  char* sVar0;
  char[] cVar1[8];
  char[] cVar2[8];
  char[] cVar3[8];
  
  func_66(iParam0, iParam1, &(iParam2->f_217[iParam0 /*71*/]), &cVar1, &cVar2, &cVar3);
  sVar0 = iParam2->f_217[iParam0 /*71*/].f_26;
  if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0) && !MISC::IS_STRING_NULL_OR_EMPTY(&cVar1))
  {
    if (func_15(iParam2->f_217[iParam0 /*71*/]))
    {
      if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam2->f_217[iParam0 /*71*/], sVar0, &cVar1, 3))
      {
        ENTITY::STOP_ENTITY_ANIM(iParam2->f_217[iParam0 /*71*/], &cVar1, sVar0, -1000f);
      }
    }
  }
}