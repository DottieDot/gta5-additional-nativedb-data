// arena_carmod.c @ L138063
int func_1217(char* sParam0)
{
  int iVar0;
  
  if ((MISC::STRING_TO_INT(sParam0, &iVar0) && iVar0 >= 0) && iVar0 <= 9)
  {
    return 1;
  }
  return 0;
}